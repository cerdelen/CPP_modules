#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(){
		name = "";
	};
	Zombie(std::string name);
	~Zombie();
	void	announce(void){
		std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
	void	set_name(std::string name){
		this->name = name;
	}
};
