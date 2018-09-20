/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 09:01:18 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/11 18:23:26 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ADD_NULL 1
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = NULL;
	if (s != NULL)
	{
		new = (char*)malloc((ADD_NULL + len) * sizeof(char));
		if (new == NULL)
			return (NULL);
		while (i < len)
		{
			new[i] = s[start];
			i++;
			start++;
		}
		new[i] = '\0';
	}
	return (new);
}
