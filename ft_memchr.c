/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:04:43 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 13:25:51 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	unsigned char		to_find;
	unsigned const char	*str;

	str = s;
	to_find = c;
	i = 0;
	if (n == 0)
	{
		return ((void *)"");
	}
	while (str[i] != '\0' && i < n-1)
	{
		if (str[i] == to_find)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	if (str[i] == to_find)
	{
		return ((void *)&str[i]);
	}
	return (0);
}
