/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:52:38 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 17:00:30 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat created." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout <<< "Meow? (This is the wrong sound)" << std::endl;
}