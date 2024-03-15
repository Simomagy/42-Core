/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 05:10:19 by smagenes          #+#    #+#             */
/*   Updated: 2024/03/08 23:39:34 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cpm_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (cmp_char(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (cmp_char(s1[i], s2[i]));
	return (0);
}
