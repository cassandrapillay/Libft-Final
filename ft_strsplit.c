/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:07:57 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/06 08:48:23 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(const char *str, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && str[i] != '\0')
		{
			ret++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (ret);
}

static char	**string_split(char **ret, const char *str, char c)
{
	int i;
	int end;
	int start;

	i = 0;
	end = 0;
	while (str[end] != '\0')
	{
		while (str[end] == c && str[end] != '\0')
			end++;
		start = end;
		while (str[end] != c && str[end] != '\0')
		{
			end++;
		}
		if (end > start)
		{
			ret[i] = ft_strsub(str, start, (end - start));
			i++;
		}
	}
	ret[i] = NULL;
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**ret;

	if (s)
	{
		count = count_split(s, c);
		ret = NULL;
		if (!(ret = (char**)malloc((1 + count) * sizeof(char*))))
			return (NULL);
		else
			string_split(ret, s, c);
		return (ret);
	}
	return (NULL);
}
