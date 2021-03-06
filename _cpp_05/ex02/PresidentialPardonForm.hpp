/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:57:21 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 20:18:23 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

#define PRESID_S 25 
#define PRESID_E 5

class PresidentialPardonForm : public Form{
	
	private:
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
		std::string const _target_;

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm();

		void action() const;
};


#endif
