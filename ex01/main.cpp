/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:00:28 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/20 13:20:06 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::vector<int> array;
	Span<int>	instance(5);
	unsigned int nbr = rand();

	instance.addNumber(array, nbr);
	instance.sort_array(array);
	instance.shortestSpan(array);
	instance.longestSpan(array);
	return (0);
}
