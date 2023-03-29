/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:30:58 by mardolin          #+#    #+#             */
/*   Updated: 2023/03/28 16:40:15 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

# include <unistd.h>
# include <stdio.h>

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define BOLDBLACK "\033[1m\033[30m"
# define BOLDRED "\033[1m\033[31m"
# define BOLDGREEN "\033[1m\033[32m"
# define BOLDYELLOW "\033[1m\033[33m"
# define BOLDBLUE "\033[1m\033[34m"
# define BOLDMAGENTA "\033[1m\033[35m"
# define BOLDCYAN "\033[1m\033[36m"
# define BOLDWHITE "\033[1m\033[37m"
# define LAMPRED "\033[5;31;40m"
# define LAMPCYAN "\033[5;36;40m"
# define LAMPWHITE "\033[5;36;40m"

//# define FADE_TIME 100
//
//void fade_color(const char *color)
//{
//	printf("\033[2J");
//	for (int i = 100; i >= 0; i--) 
//	{
//		printf("\033[48;5;%dm", i);
//		printf("\033[0;0H");
//		printf("%s", color);
//		fflush(stdout);
//		usleep(FADE_TIME * 1000);
//	}
//}

#endif