/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:01:26 by dcella-d          #+#    #+#             */
/*   Updated: 2022/11/03 13:37:02 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int f;
    
    f = 0;
    while (s[f])
    {
        if (s[f] == c)
        {
            return (f)
        }
        f++;
    }
    return (s[f]); 
}