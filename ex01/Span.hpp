/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:01:01 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/26 10:08:24 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		class Empty : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};

		class NotEnough : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};

		class Full : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
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
		unsigned int _size;
};

#endif
