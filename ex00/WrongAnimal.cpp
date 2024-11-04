/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:52:34 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 16:56:33 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed." << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some generic wrong animal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}