/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:36 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/24 19:41:38 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog"; 
	std::cout << Y << "The default constructer of Dog is called ." << DEF << std::endl;  
}

Dog::Dog(Dog const& copy)
{
	*this = copy;
	std::cout << Y << "The copy constructer of Dog is called ." << DEF << std::endl;
}

Dog&	Dog::operator = (Dog const& copy)
{
	this->type = copy.type;
	std::cout << Y << "The assignment operator of Dog is called ." << DEF << std::endl;
	return  (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog is barking !!" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}

Dog::~Dog()
{
	std::cout << Y << "The destructer of Dog is called ." << DEF << std::endl;
}
