/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:42:43 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/18 11:44:37 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (dst == NULL || s1 == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
