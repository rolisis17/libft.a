/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vid_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:49:46 by dcella-d          #+#    #+#             */
/*   Updated: 2022/09/14 15:42:55 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_vid_mod(int a, int b, int *div, int *mod)
{
	if (a != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
