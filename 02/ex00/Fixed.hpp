#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
	private:
		int					val_;
		static const int	bits_ = 8;

	public:
		Fixed();								//default const
		Fixed(const Fixed& copy);				//copy const
		Fixed&	operator=(const Fixed& copy);	//A copy assignment operator overload
		~Fixed();								//destructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif