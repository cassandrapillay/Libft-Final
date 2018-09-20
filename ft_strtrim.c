/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 09:37:08 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/12 15:27:17 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	str = "";
	while (ft_whitespace(s[i]) && (i < j))
		i++;
	while (ft_whitespace(s[j]) && j != 0)
		j--;
	if (j == 0)
		return (ft_strdup(str));
	str = ft_strsub(s, i, (j - i + 1));
	return (str);
}
