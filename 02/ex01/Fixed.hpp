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
};

std::ostream&	operator<<(std::ostream &os, const Fixed &nbr);

#endif