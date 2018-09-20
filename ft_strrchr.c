/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:55:46 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/11 17:26:16 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	ft_putchar(str[i]);
	while (str[i] != (char)c)
	{
		if (str[i] == str[0])
		{
			return (NULL);
		}
		i--;
	}
	return ((char*)&str[i]);
}
