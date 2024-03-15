/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:44:48 by smagenes          #+#    #+#             */
/*   Updated: 2024/03/15 13:50:30 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_ind;
	size_t	s2_ind;

	str = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	s1_ind = 0;
	s2_ind = 0;
	while (s1[s1_ind])
	{
		str[s2_ind++] = s1[s1_ind];
		s1_ind++;
	}
	s1_ind = 0;
	while (s2[s1_ind])
	{
		str[s2_ind++] = s2[s1_ind];
		s1_ind++;
	}
	str[s2_ind] = 0;
	return (str);
}
