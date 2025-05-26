/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:35:29 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/26 10:14:59 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _array(0), _size(0)
{
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int maxnbr) : _size(maxnbr)
{
	if (maxnbr == 0)
		throw Empty();
	std::cout << "Span Default Constructor called" << std::endl;
}

Span::Span(const Span &obj) : _array(0)
{
	std::cout << "Span Copy Constructor called" << std::endl;
	(*this) = obj;
}

Span::~Span()
{
	std::cout << "Span Destructor called " << std::endl;
}


const char *Span::Empty::what() const throw()
{
	return ("array is empty\n");
}

const char *Span::NotEnough::what() const throw()
{
	return ("not enough numbers\n");
}

const char *Span::Full::what() const throw()
{
	return ("Error : array is fulllll\n");
}

//Operator Overload
Span &Span::operator=(const Span &rhs)
{
	this->_array = rhs._array;
	this->_size = rhs._size;
	std::cout <<  "Span Copy Assignment Operator called" << std::endl;
	return (*this);
}

void	Span::addNumber(int n)
{
	_array.push_back(n);
	return ;
}

int	Span::shortestSpan()
{
	if (_array.size() < 2)
		throw NotEnough();
	else if (_array.size() > _size)
		throw std::invalid_argument("array is full\n");
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
	if (_array.size() < 2)
		throw NotEnough();
	else if (_array.size() > _size)
		throw Full();
	int max;
	std::sort(_array.begin(), _array.end());
	max = *(_array.end() - 1) - *_array.begin();
	std::cout << "longest span is : " << max << std::endl;
	return (max);
}

