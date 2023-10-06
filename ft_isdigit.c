/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:56:40 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/04 15:01:15 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if 'n' is a number
int	ft_isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}