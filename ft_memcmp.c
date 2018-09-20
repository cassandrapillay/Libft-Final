/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:16:36 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/12 11:52:38 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)str;
	cs2 = (unsigned char *)str2;
	while (n != 0)
	{
		while ((i < (n - 1)) && (cs1[i] == cs2[i]))
			i++;
		return (cs1[i] - cs2[i]);
	}
	return (0);
}
