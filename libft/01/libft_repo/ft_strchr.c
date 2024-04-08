/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagenes <smagenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 04:04:07 by smagenes          #+#    #+#             */
/*   Updated: 2024/04/08 09:18:14 by smagenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		cur;

	cur = 0;
	while (s[cur])
	{
		if (s[cur] == (unsigned char)c)
			return ((char *)(s + cur));
		cur++;
	}
	if (s[cur] == (unsigned char)c)
		return ((char *)(s + cur));
	return (0);
}
