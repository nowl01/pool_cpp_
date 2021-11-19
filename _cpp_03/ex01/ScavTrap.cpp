# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	this->_name_ = "unknown";
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 50;
	this->_AttackDamage_ = 20;
	std::cout << "\033[1;33mThe default constructor of ScavTrap is called .\033[0;37m" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->_name_ = name;
	this->_HitPoints_ = 100;
	this->_EnergyPoints_ = 50;
	this->_AttackDamage_ = 20;
	std::cout << "\033[1;33mThe constructor with parameter of ScavTrap is called .\033[0;37m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy):ClapTrap(copy)
{
	std::cout << "\033[1;33mThe copy constructor of ScavTrap is called .\033[0;37m" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << "\033[1;33mThe copy assignement operator of ScavTrap is called .\033[0;37m" << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "\033[1;36mScavTrap " << this->_name_ <<  " attack " << target << ", causing " << this->_AttackDamage_ << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;36mScavTrap " << this->_name_ <<  " has taken " << amount << " of points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	 std::cout << "\033[1;36mScavTrap " << this->_name_ <<  " has repaired " << amount << " of points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout <<  "\033[1;36mScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;33mThe destructor is of ScavTrap called .\033[0;37m" << std::endl;
}