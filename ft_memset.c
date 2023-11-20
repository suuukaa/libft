/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:02:16 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:24:57 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int V, size_t N)
{
	unsigned char	*ss;
	size_t			i;

	i = 0;
	ss = (unsigned char *)s;
	while (i < N)
	{
		ss[i] = ((unsigned char) V);
		i++;
	}
	return (ss);
}
