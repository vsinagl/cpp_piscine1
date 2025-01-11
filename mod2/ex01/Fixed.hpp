#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		Fixed(const int n);
		Fixed(const float n);

		//conversion functions:
 		float toFloat(void) const;
  	 	int toInt(void) const;

		//getters, setters:
		int getRawBits(void) const;
		void setRawBits(int const raw);


};

//stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif