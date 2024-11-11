/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:57 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/11 16:09:04 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    std::cout << "--- Correct Polymorphism Example ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n--- Array of Animals (Polymorphism) ---" << std::endl;

    Animal* animal1 = new Dog();
    Animal* animal2 = new Dog();
    Animal* animal3 = new Cat();
    Animal* animal4 = new Cat();

    std::cout << animal1->getType() << " says: ";
    animal1->makeSound();

    std::cout << animal2->getType() << " says: ";
    animal2->makeSound();

    std::cout << animal3->getType() << " says: ";
    animal3->makeSound();

    std::cout << animal4->getType() << " says: ";
    animal4->makeSound();

    delete animal1;
    delete animal2;
    delete animal3;
    delete animal4;

    std::cout << "\n--- Deep Copy Test ---" << std::endl;

    Dog originalDog;
    originalDog.makeSound();

    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    Cat originalCat;
    originalCat.makeSound();

    Cat copiedCat = originalCat;
    copiedCat.makeSound();

    return 0;
}