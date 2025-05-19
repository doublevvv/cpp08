/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:51:47 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/19 13:40:16 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> array;
	array.push_back(10);
	array.push_back(5);
	array.push_back(2);
	array.push_back(1);
	easyfind(array, 2);
}

