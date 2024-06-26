/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:08:48 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:22:45 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cur;
	char	*data;

	cur = 0;
	data = (char *)s;
	while (cur < n)
	{
		data[cur] = 0;
		cur++;
	}
}
