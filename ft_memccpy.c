/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:13:52 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/13 09:41:16 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;
	unsigned char	c1;

	c1 = (unsigned char)c;
	index = 0;
	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (index < n)
	{
		dest[index] = src[index];
		if (src[index] == c1)
			return (&dest[1 + index]);
		index++;
	}
	return (NULL);
}
