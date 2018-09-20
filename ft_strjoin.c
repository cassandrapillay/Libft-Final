/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:11:14 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/04 10:13:41 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (0);
	else
	{
		new = NULL;
		len = ft_strlen(s1) + ft_strlen(s2);
		new = (char *)malloc(sizeof(char) * (len + 1));
		if (!(new))
			return (NULL);
		if (s1 != NULL || s2 != NULL)
		{
			new = ft_strcpy(new, s1);
			new = ft_strcat(new, s2);
		}
	}
	return (new);
}
