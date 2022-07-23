#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
// #include <cmath>

class converter
{
	private:
		double	double_val_;
		bool	nan_;
		bool	inff_;
		bool	inff_p_;
		bool	inff_n_;

		void	getChar( void ) const ;
		int		getInt( void ) const ;
		float	getFloat( void ) const ;
		double	getDouble( void ) const ;
	public:
		converter();
		converter(std::string input);
		~converter();

		void	print_all( void ) const ;
		
};

#endif