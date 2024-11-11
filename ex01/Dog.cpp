/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:05 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/11 16:03:25 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) 
{
    type = "Dog";
    std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) 
{
    type = other.type;
    std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << "Dog assigned." << std::endl;
    if (this != &other) {
        type = other.type;
        if (brain) {
            delete brain;
        }
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}