/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:18:19 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 12:26:15 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*dst;
	unsigned const char	*s;

	dst = dest;
	s = src;
	i = 0;
	if (dst < s)
	{
		while (s[i] != '\0' && i < n)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
		return (dest);
	}
	while (n--)
	{
		dst[n] = s[n];
	}
	return (dest);
}
