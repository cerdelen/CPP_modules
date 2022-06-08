#include <iostream>

class Zombie
{
private:
	std::string name_;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void){
		std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
};
