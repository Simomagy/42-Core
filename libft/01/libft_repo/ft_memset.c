/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:02:52 by smagenes          #+#    #+#             */
/*   Updated: 2024/03/06 02:53:33 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int in, size_t len)
{
	size_t	count;

	if (!b)
		return (NULL);
	count = 0;
	while (count < len)
	{
		*(unsigned char *)(b + count) = (unsigned char)in;
		count++;
	}
	return (b);
}
