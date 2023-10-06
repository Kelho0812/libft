/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:29:43 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 11:34:43 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*give_memory_extra(char *src, unsigned int start, size_t len);

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;

	if (!s)
	{
		return (NULL);
	}
	s2 = (char *)s + start;
	if (start >= (unsigned int)ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	return (give_memory_extra(s2, start, len));
}

static char	*give_memory_extra(char *src, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	size;

	size = ft_strlen(src + start);
	if (size > len)
	{
		new_str = (char *) malloc(len + 1);
		if (!new_str)
		{
			return (NULL);
		}
		ft_strlcpy(new_str, src, (len + 1));
		return (new_str);
	}
	else
	{
		new_str = (char *) malloc(size + 1);
		if (!new_str)
		{
			return (NULL);
		}
		ft_strlcpy(new_str, src, (size + 1));
		return (new_str);
	}
}
