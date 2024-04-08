/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 05:15:45 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:19:08 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				cur;
	unsigned char const	*data;

	cur = 0;
	data = (unsigned char const *)s;
	while (cur < n)
	{
		if (data[cur] == (unsigned char)c)
			return ((void *)(data + cur));
		cur++;
	}
	return (NULL);
}
