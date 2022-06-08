#ifndef HARL
#define HARL
#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	other( void );

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif