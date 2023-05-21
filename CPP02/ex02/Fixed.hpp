/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:58:12 by mardolin          #+#    #+#             */
/*   Updated: 2023/04/24 16:30:03 by mardolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <cmath>

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

class Fixed
{
	
	private:
		int					x;
		static int const	bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &x);
        Fixed(const int a);
        Fixed(const float b);
		
	Fixed	&operator=(const Fixed &x);
	
	bool	operator>(const Fixed &x) const;
	bool	operator<(const Fixed &x) const;
	bool	operator>=(const Fixed &x) const;
	bool	operator<=(const Fixed &x) const;
	bool	operator==(const Fixed &x) const;
	bool	operator!=(const Fixed &x) const;
	
	Fixed	&operator+(const Fixed &x);
	Fixed	&operator-(const Fixed &x);
	Fixed	&operator*(const Fixed &x);
	Fixed	&operator/(const Fixed &x);

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
	
	int 	getRawBits( void ) const;
    void 	setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
