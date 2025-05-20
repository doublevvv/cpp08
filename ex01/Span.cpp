/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:35:29 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/20 13:22:49 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
void	addNumber(T &container, unsigned int n)
{
	typename T::iterator i = container.begin();
	for (; i < container.end(); i++)
	{
		container.pushback(n);
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

