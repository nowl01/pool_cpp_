# include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon(nullptr)
{
	this->name = name;
}

HumanB::~HumanB(){ }

void	HumanB::attack(void)
{
	if (this->weapon != nullptr)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}