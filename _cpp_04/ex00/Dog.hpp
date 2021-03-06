/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:38 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 01:18:49 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog : public Animal{
	
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog& operator = (Dog const& copy);

		void		makeSound() const;
		std::string	getType() const;

};

#endif