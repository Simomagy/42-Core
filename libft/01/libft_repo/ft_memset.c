/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:02:52 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:23:44 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cur;
	char	*data;

	cur = 0;
	data = (char *)b;
	while (cur < len)
	{
		data[cur] = c;
		cur++;
	}
	return (b);
}
