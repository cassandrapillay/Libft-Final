/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:36:59 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/30 13:21:26 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				new[i] = f(i, (char)s[i]);
				i++;
			}
			new[i] = '\0';
		}
	}
	return (new);
}
