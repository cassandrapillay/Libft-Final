/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:32:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/18 11:44:53 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** i[0] is sign
** i[1] is index
** i[2] is exit
*/

int		ft_atoi(const char *str)
{
	int long			i[3];
	unsigned int long	res;

	i[0] = 1;
	res = 0;
	i[1] = 0;
	i[2] = 0;
	while (my_whitespace(str[i[1]]))
		i[1]++;
	if (str[i[1]] == '-')
		i[0] = i[0] * -1;
	if (str[i[1]] == '+' || str[i[1]] == '-')
		i[1]++;
	while ((str[i[1]] >= '0' && str[i[1]] <= '9'))
	{
		res = res * 10 + (str[i[1]] - '0');
		i[1]++;
		i[2]++;
	}
	return (res * i[0]);
}
