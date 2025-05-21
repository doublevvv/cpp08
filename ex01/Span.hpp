/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:01:01 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/21 13:20:29 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	class Arrayfull : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NotEnough : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	public:
		~Span();
		Span(unsigned int nbrmax);
		Span(const Span &obj);
		Span &operator=(const Span &rhs);
		void	addNumber(int n);
		int	shortestSpan();
		int	longestSpan();

	private:
		Span();
		std::vector<int> _array;
		int _size;
};

#endif
