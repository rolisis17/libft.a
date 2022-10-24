/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:52:08 by dcella-d          #+#    #+#             */
/*   Updated: 2022/10/24 15:58:40 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sorte_int_tab(int *tab, int size)
{
	int	first;
	int	sec;
	int	swp;

	first = 0;
	while (first <= ((size - 1) - 1))//size - 1 because 'sec' = first + 1 & -1 to be <=.
	{
		sec = (first + 1);//next value of 'first'.
		if (tab[sec] < tab[first])//if the value of 'sec' is greater than the value of 'first'.
		{
			swp = tab[first];//they swap.
			tab[first] = tab[sec];
			tab[sec] = swp;
			ft_sorte_int_tab(tab, size);//and call the function again to see if the value before that is greater than the value that was changed.
		}
		else
		first++;//first plus one to go to the next value.
	}
	return ;
}

