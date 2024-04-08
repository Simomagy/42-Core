/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 05:10:19 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:25:44 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cur;

	if (n == 0)
		return (0);
	cur = 0;
	while (s1[cur] && s2[cur])
	{
		if (s1[cur] != s2[cur] || cur >= n - 1)
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}
