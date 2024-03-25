/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 03:50:58 by smagenes          #+#    #+#             */
/*   Updated: 2024/03/25 04:24:21 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dlen < size - 1 && size > 0)
	{
		while (src[j] && dlen + i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[j] = 0;
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
