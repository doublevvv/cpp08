/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:01:01 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/20 13:34:03 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T> class Span
{
	public:
		// Span();
		// ~Span();
		// Span(unsigned int nbrmax);
		// Span(const Span &obj);
		// Span &operator=(const Span &rhs);
		// void	addNumber(T &container, unsigned int n);
		// unsigned int	shortestSpan(std::vector<int> array);
		// unsigned int	longestSpan(std::vector<int> array);
		// void	sort_array(std::vector<int> array);
		Span()
		{
			std::cout << "Span Default Constructor called" << std::endl;
		}

		Span(unsigned int maxnbr)
		{
			(void)maxnbr;
			std::cout << "Span Default Constructor called" << std::endl;
		}

		Span(const Span &obj)
		{
			std::cout << "Span Copy Constructor called" << std::endl;
			*this = obj;
		}
		//Destructor
		~Span()
		{
			std::cout << "Span Destructor called " << std::endl;
		}

		//Operator Overload
		Span &operator=(const Span &rhs)
		{
			(void)rhs;
			std::cout <<  "Span Copy Assignment Operator called" << std::endl;
			return *this;
		}

		void	addNumber(std::vector<int> container, unsigned int n)
		{
			typename T::iterator i = container.begin();
			for (; i < container.end(); i++)
			{
				container.push_back(n);
			}
			return ;
		}

		void	sort_array(std::vector<int> array)
		{
			std::sort(array.begin(), array.end());
		}

		unsigned int	shortestSpan(std::vector<int> array)
		{
			unsigned int min;

			min = (array.begin() + 1) - (array.begin());
			std::cout << "shortest span is : " << min << std::endl;
			return (min);
		}

		unsigned int	longestSpan(std::vector<int> array)
		{
			unsigned int max;

			max = (array.end()) - (array.begin());
			std::cout << "shortest span is : " << max << std::endl;
			return (max);
		}
};
1 5 4 7 6 32
1 4 5 6 7 32
3 6 9 11 17

#endif
