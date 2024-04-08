/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:04:21 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:25:04 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*data_dst;
	char	*data_src;

	if (!src && !dst)
		return (NULL);
	if (src > dst)
		dst = ft_memcpy(dst, src, len);
	else
	{
		data_dst = (char *)dst;
		data_src = (char *)src;
		while (len--)
			data_dst[len] = data_src[len];
	}
	return (dst);
}
