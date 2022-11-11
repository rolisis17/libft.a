/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:35:42 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/11 16:02:38 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}

/* void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	f;
	char	*d;
	char	*s;
	char	*res;

	f = 0;
	s = (char *) src;
	d = (char *) dest;
	res = NULL;
	if (!src && !dest)
		return (NULL);
	while (f < n)
	{
		res[f] = s[f];
		f++;
	}
	f = 0;
	while (f < n)
	{
		d[f] = res[f];
		f++;
	}
	d[f] = '\0';
	return (dest);
} */

/* int main()
{
	char src[] = "Fucksome";
	char *dest = src + 2;
	//char *res = memcpy(dest, src, 7);
	//printf("src : %s|\n", src);
	//printf("dest : %s|\n", dest);
	char *res2 = ft_memmove(dest, src, 7);
	//printf("The func cpy: %s\n", res); 
	printf("The func move: %s|\n", res2);
}
 */