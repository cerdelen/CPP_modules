#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					val_;
		static const int	bits_ = 8;

	public:
		Fixed();								//default const
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& copy);				//copy const
		~Fixed();								//destructor


		Fixed&			operator=(const Fixed& copy);	//A copy assignment operator overload
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;





//		comparison operators
		bool	operator>(const Fixed &num2) const;
		bool	operator<(const Fixed &num2) const;
		bool	operator>=(const Fixed &num2) const;
		bool	operator<=(const Fixed &num2) const;
		bool	operator==(const Fixed &num2) const;
		bool	operator!=(const Fixed &num2) const;

//		arithmetic operators
		Fixed	operator+(const Fixed &num2) const;
		Fixed	operator-(const Fixed &num2) const;
		Fixed	operator*(const Fixed &num2) const;
		Fixed	operator/(const Fixed &num2) const;

//		min/max functions
		static Fixed&				min(Fixed& num1, Fixed& num2);
		static Fixed&				max(Fixed& num1, Fixed& num2);
		static const Fixed&			min(const Fixed& num1, const Fixed& num2);
		static const Fixed&			max(const Fixed& num1, const Fixed& num2);

//		increment/decrement functions

// Add public member functions to your class to overload the following operators:

// 			• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.



};

std::ostream&	operator<<(std::ostream &os, const Fixed &nbr);

#endif