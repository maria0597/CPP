/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:21:45 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/31 11:40:59 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

int main() 
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // Print the memory addresses
    std::cout << YELLOW "Memory address of the string variable: " RESET << &str << std::endl;
    std::cout << YELLOW "Memory address held by stringPTR: " RESET << stringPTR << std::endl;
    std::cout << YELLOW "Memory address held by stringREF: " RESET << &stringREF << std::endl;

    // Print the values
    std::cout << GREEN "Value of the string variable: " RESET << str << std::endl;
    std::cout << GREEN "Value pointed to by stringPTR: " RESET  << *stringPTR << std::endl;
    std::cout << GREEN "Value pointed to by stringREF: " RESET  << stringREF << std::endl;

    return 0;
}
