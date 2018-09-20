/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:57:58 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/06 09:18:54 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * (size + 1));
	while (new && size <= 2147483648)
	{
		ft_memset(new, '\0', size + 1);
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
