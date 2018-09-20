/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:56:37 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/18 11:35:54 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static char		*shorten(const char *haystack, const char *needle, int i)
{
	int j;
	int e;

	e = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i++] == (needle[j]))
			{
				j++;
			}
			else
			{
				j = 0;
				i = e;
				e++;
				break ;
			}
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
	}
	return (NULL);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	return (shorten(haystack, needle, i));
}
