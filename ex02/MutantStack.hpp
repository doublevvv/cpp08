/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doublevv <vv>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:39:17 by doublevv          #+#    #+#             */
/*   Updated: 2025/05/26 09:32:18 by doublevv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename container=std::deque<T> >
class MutantStack : public std::stack<T, container>
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
	typedef typename container::iterator it;
	typedef typename container::const_iterator const_it;

	it begin()
	{
		return (this->c.begin());
	}
	it end()
	{
		return (this->c.end());
	}
	const_it begin() const
	{
		return (this->c.begin());
	}
	const_it end() const
	{
		return (this->c.end());
	}
	private:
};

#endif
