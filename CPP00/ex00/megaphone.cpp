/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:30:48 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/28 16:30:52 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <stdio.h>

void megaphone(char **argv)
{
    for(int i = 1; argv[i] != NULL ; i++)
    {
        for(size_t j = 0; j < strlen(argv[i]); j++)
            putchar(toupper(argv[i][(int) j]));
    }
    putchar('\n');
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
        return 1;
    }
    megaphone(argv);
    return 0;
}
