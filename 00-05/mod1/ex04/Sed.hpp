#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>

class Sed
{
    private:
        std::string _filename;  
        std::string _searchStr; 
        std::string _replaceStr;
        std::ifstream _inFile;  
        std::ofstream _outFile; 
        
        bool _openFiles(void);
        void _closeFiles(void);
        std::string _processLine(const std::string& line);

    public:
        Sed(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Sed();

        bool replace(void);
};

#endif