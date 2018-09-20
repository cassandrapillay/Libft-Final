/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:59:29 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/30 15:43:53 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	new = NULL;
	if (s != NULL)
	{
		new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		i = 0;
		if (new == NULL)
			return (NULL);
		else
		{
			while (s[i] != '\0')
			{
				new[i] = f((char)s[i]);
				i++;
			}
			new[i] = '\0';
		}
	}
	return (new);
}
