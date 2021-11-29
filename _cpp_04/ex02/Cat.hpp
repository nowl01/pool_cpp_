/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:00:34 by abdait-m          #+#    #+#             */
/*   Updated: 2021/11/28 09:05:45 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat: public Animal{
	
	private:
		Brain	*_brain;
	
	public:
		Cat();
		Cat(Cat const& copy);
		~Cat();
		Cat& operator = (Cat const& copy);

		void		makeSound();
		void		_set_brain_(Brain& brain);
		Brain&		_get_brain_();
		std::string	getType();
		
};

#endif