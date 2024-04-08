/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:48:26 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:23:25 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*dup;

	s1_len = ft_strlen(s1);
	dup = (char *)malloc((s1_len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dup[s1_len] = 0;
	while (--s1_len >= 0)
		dup[s1_len] = s1[s1_len];
	return (dup);
}
