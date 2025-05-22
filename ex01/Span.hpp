/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:01:01 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/22 09:21:04 by doublevv         ###   ########.fr       */
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
