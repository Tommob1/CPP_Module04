/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:27:06 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/12 13:21:03 by btomlins         ###   ########.fr       */
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

std::string Animal::getType() const
{
    return type;
}
