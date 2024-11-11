/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:34:38 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/11 15:45:10 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i;
    i = 0;

    std::cout << "Brain created." << std::endl;
    while (i < 100)
    {
        ideas[i] = "Default idea";
        ++i;
    }
}

Brain::Brain(const Brain &other)
{
    int i;
    i = 0;

    std::cout << "Brain copied." << std::endl;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
        ++i;
    }
}

Brain &Brain::operator=(const Brain &other)
{
    int i;
    i = 0;

    std::cout << "Brain assigned." << std::endl;
    if (this != &other)
    {
        while (i < 100)
        {
            ideas[i] = other.ideas[i];
            ++i;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}