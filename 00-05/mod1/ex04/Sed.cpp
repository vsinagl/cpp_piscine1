#include "Sed.hpp"
#include <iostream>

//using list inicialization by providing string references
Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
		: _filename(filename), _searchStr(s1), _replaceStr(s2)
{
}

Sed::~Sed()
{
	this->_closeFiles();
}

/*
@desc: handling opening files
c_str returns string as const char *
*/
bool Sed::_openFiles(void)
{
	std::string outFilename;

	_inFile.open(_filename.c_str());
	if (!_inFile.is_open())
	{
    	std::cout << "Error in opening input file: " << _filename << std::endl;
    	return false;
	}

	outFilename = _filename + ".replace";
	_outFile.open(outFilename.c_str());
	if (!_outFile.is_open())
	{
    	std::cout << "Error in creating output file: " << outFilename << std::endl;
    	_inFile.close();
    	return false;
	}
	return true;
}

void Sed::_closeFiles(void)
{
	if (_inFile.is_open())
    	_inFile.close();
	if (_outFile.is_open())
    	_outFile.close();
}

/*
@description that process replacement of string
npos is special character that represents invalid or not existing string position
while loop --> we need to loop unless we find all occurances 
*/
std::string Sed::_processLine(const std::string& line)
{
	std::string result = line;
	size_t pos = 0;
    
	pos = result.find(_searchStr, pos);
	while (pos  != std::string::npos)
	{
    	result = result.substr(0, pos) + _replaceStr + result.substr(pos + _searchStr.length());
    	pos += _replaceStr.length();
		pos = result.find(_searchStr, pos);
	}
	return result;
}

bool Sed::replace(void)
{
	std::string		line;

    if (_searchStr.empty())
    {
        std::cout << "Error: Search string cannot be empty" << std::endl;
        return false;
    }
    if (!(this->_openFiles)())
        return false;

    while (std::getline(_inFile, line))
    {
        _outFile << this->_processLine(line);
        if (!_inFile.eof())
            _outFile << std::endl;
    }

    this->_closeFiles();
    return true;
}
