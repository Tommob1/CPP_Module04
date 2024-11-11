/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:47:06 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/11 16:03:57 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) 
{
    type = "Cat";
    std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    type = other.type;
    std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other) 
{
    std::cout << "Cat assigned." << std::endl;
    if (this != &other) {
        type = other.type;
        if (brain) {
            delete brain;
        }
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}