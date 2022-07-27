#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
// #include <cmath>

class converter
{
	public:
		converter();
		converter(std::string input);
		~converter();

		void	print_all( void ) const ;

	private:
		double	double_val_;
		bool	nan_;
		bool	inff_;
		bool	inff_n_;
		bool	inval_arg;

		void	printChar( void ) const ;
		void	printInt( void ) const ;
		void	printFloat( void ) const ;
		void	printDouble( void ) const ;
		double	getDouble( void ) const ;

		bool	is_allnum(std::string c);
		bool	is_float(std::string c);
		bool	is_double(std::string c);
};

#endif