/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:27:06 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 13:29:24 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal created." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed." << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound." << std::endl;
}

std::string Animal::getType() const
{
    return type;
}