/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:39:16 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/15 18:41:29 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_split_part2(char *trim, char **tot, char c)
{
	size_t	f;
	size_t	words;
	size_t	len;

	len = 0;
	f = -1;
	words = 0;
	while ((trim[len] != c) && (trim[len]))
		len++;
	while (trim[++f])
	{
		if (((trim[f] != c) && (trim[f - 1] == c)) && trim[f])
			while ((trim[f + len] != c) && (trim[f + len]))
				len++;
		if (len > 0)
		{
			tot[words] = ft_substr(trim, f, len);
			if (!tot[words])
				return ;
			words++;
		}
		len = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	f;
	size_t	words;
	char	**tot;
	char	*trim;

	f = -1;
	words = 0;
	trim = ft_strtrim(s, &c);
	if (!trim)
		return (NULL);
	if ((trim[0] != c) && (ft_strlen(trim) > 0))
		words++;
	while (trim[++f])
	{
		if ((words > 0) && ((trim[f] != c) && (trim[f - 1] == c)))
			words++;
	}
	tot = ft_calloc (words + 1, sizeof(char *));
	if (!tot)
		return (NULL);
	ft_split_part2(trim, tot, c);
	free(trim);
	return (tot);
}

/* int	main()
{
	size_t	f = 0;
	char	*s = "      split       this for   me  !       ";
	char	c = 32;
	char	**res = ft_split(s, c);
	printf("$%s$\n", res[0]);
	printf("$%s$\n", res[1]);
	printf("$%s$\n", res[2]);
	printf("$%s$\n", res[3]);
	printf("$%s$\n", res[4]);
	printf("$%s$\n", res[5]);
} */