/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 07:00:28 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/26 10:15:15 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		Span sp = Span(0);

		sp.addNumber(9);
		// sp.addNumber(8);
		// sp.addNumber(50);
		// sp.addNumber(5);


		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
}
