/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:54:44 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/30 09:27:22 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *new;

	new = (char*)malloc(sizeof(size));
	while (new && size <= 2147483648)
	{
		ft_memset(new, '\0', size);
		return (new);
	}
	return (NULL);
}
