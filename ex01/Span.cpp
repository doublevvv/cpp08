/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:35:29 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/21 13:25:08 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _array(0), _size(0)
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int maxnbr) : _size(maxnbr)
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(const Span &obj) : _array(0)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	(*this) = obj;
}
//Destructor
Span::~Span()
{
	std::cout << "Span Destructor called " << std::endl;
}

//Operator Overload
Span &Span::operator=(const Span &rhs)
{
	this->_array = rhs._array;
	this->_size = rhs._size;
	std::cout <<  "Span Copy Assignment Operator called" << std::endl;
	return (*this);
}

const char *Span::Arrayfull::what() const throw()
{
	return ("Array is full\n");
}

const char *Span::NotEnough::what() const throw()
{
	return ("Not enough number or empty\n");
}

void	Span::addNumber(int n)
{
	if (_size < 2)
	{
		throw NotEnough();
		return ;
	}
	_array.push_back(n);
	return ;
}

int	Span::shortestSpan()
{
	std::sort(_array.begin(), _array.end());
	int min = *(_array.end() - 1);
	std::cout << min << std::endl;
	std::vector<int>::iterator i;
	for (i = _array.begin(); i != _array.end() - 1; i++)
	{
		if (*(i + 1) - *i < min)
			min = *(i + 1) - *i;
	}
	std::cout << "shortest span is : " << min << std::endl;
	return (min);
}

int	Span::longestSpan()
{
	int max;
	std::sort(_array.begin(), _array.end());
	max = *(_array.end() - 1) - *_array.begin();
	std::cout << "longest span is : " << max << std::endl;
	return (max);
}

