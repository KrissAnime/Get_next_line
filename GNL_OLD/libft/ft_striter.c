/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:32:44 by cbester           #+#    #+#             */
/*   Updated: 2018/06/08 12:33:25 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	x;

	if (!(s) || !(f))
		return ;
	x = 0;
	while (x < ft_strlen(s))
	{
		f(&s[x]);
		x++;
	}
}
