/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:39:17 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/22 13:19:58 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, class container=std::deque<T>, typename container::iterator>
class MutantStack : public std::stack<T, it>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack (const MutantStack &obj)
		{
			(*this) = obj;
		}
		MutantStack &operator=(const MutantStack &rhs)
		{
			(void)rhs;
		}
		// typedef typename container::iterator i;
		i begin()
		{
			return (this->c.begin());
		}
		i end()
		{
			return (this->c.end());
		}
	private:
};

#endif
