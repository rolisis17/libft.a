/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:42:06 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/18 17:10:59 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	f;

	f = -1;
	while (s[++f])
		return(write (fd, &s[f], 1));
}

int len;
len = 0;
int i = 0;
"Hello"
while(str[i])
{
	len += putchar(str[i]);
} 