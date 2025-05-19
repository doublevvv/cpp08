/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:43:49 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/19 13:42:24 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void	easyfind(T &container, int nbr)
{
	typename T::iterator i = container.begin();
	for (; i < container.end(); i++)
	{
		if (nbr == *i)
			std::cout << "ok" << std::endl;
		else
			std::cout << "ko" << std::endl;
	}
	return ;
}

#endif
