/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:18:19 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/09 10:41:41 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_overlap(void *dest, const void *src, size_t n);

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
		ft_memcpy(dst, s, n);
	}
	else
	{
		ft_memcpy_overlap(dst, s, n);
	}
	return (dest);
}

void	*ft_memcpy_overlap(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char		*s;

	dst = (unsigned char *) dest;
	s = (unsigned char *) src;
	s = s + n - 1;
	dst = dst + n - 1;
	if (!src && !dest)
	{
		return (dest);
	}
	while (n--)
	{
		*dst-- = *s--;
	}
	return (dest);
}
