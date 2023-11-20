/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:51:02 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:40:17 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	s22 = (const unsigned char *) s2;
	s11 = (const unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s22[i])
		{
			return (s11[i] - s22[i]);
		}
		i++;
	}
	return (0);
}
