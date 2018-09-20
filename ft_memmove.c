/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:46:37 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/11 16:22:59 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*newdest;

	i = 0;
	temp = (char *)src;
	newdest = (char *)dest;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			newdest[i] = temp[i];
		}
	}
	else
	{
		while (i < n)
		{
			newdest[i] = temp[i];
			i++;
		}
	}
	return (newdest);
}
