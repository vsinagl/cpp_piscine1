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

		bool    operator>( const Fixed &rhs ) const ;
    	bool    operator<( const Fixed &rhs ) const ;
    	bool    operator>=( const Fixed &rhs ) const ;
    	bool    operator<=( const Fixed &rhs ) const ;
    	bool    operator==( const Fixed &rhs ) const ;
    	bool    operator!=( const Fixed &rhs ) const ;

    	Fixed   operator+( const Fixed &rhs ) const ;
    	Fixed   operator-( const Fixed &rhs ) const ;
    	Fixed   operator*( const Fixed &rhs ) const ;
    	Fixed   operator/( const Fixed &rhs ) const ;

    	Fixed&  operator++( void ); // prefix
    	Fixed   operator++( int ); // postfix
    	Fixed&  operator--( void ); // prefix
    	Fixed   operator--( int ); // postfix

		/* static methods:
			by declaring method as static, you make it independet of any particular object of the class.
			This means that you call method even if no object of the class exist and static method are accessed using onlyt 
			the class anem and the scope of resolution operator ::
		*/
    	static Fixed& min( Fixed &a, Fixed &b );
    	static const Fixed& min( const Fixed &a, const Fixed &b );
    	static Fixed& max( Fixed &a, Fixed &b );
    	static const Fixed& max( const Fixed &a, const Fixed &b );
};

//stream insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif