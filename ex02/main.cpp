/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:57 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/13 14:54:59 by btomlins         ###   ########.fr       */
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
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

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