/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:01:34 by dcella-d          #+#    #+#             */
/*   Updated: 2022/10/24 15:58:20 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	f;
	int	l;
	int	swp;

	f = 0;
	l = (size - 1);
	while (f < (size / 2))
	{
		swp = tab[f];
		tab[f] = tab[l - f];
		tab[l - f] = swp;
		f++;
	}
	return ;
}
