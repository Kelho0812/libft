/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:12:54 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 10:25:44 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	int		i;

	s_copy = malloc(ft_strlen(s) + 1);
	i = 0;
	if (!s_copy)
	{
		return(NULL);
	}
	while (s[i] != '\0')
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
