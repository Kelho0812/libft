/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:05:03 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/06 10:26:44 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned int	i;
	
	ptr = malloc(nmemb * size);
	i = 0;
	if (!ptr || nmemb == 0 || size == 0)
	{
		return(NULL);
	}	
	while (i < nmemb)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *) ptr);
}
