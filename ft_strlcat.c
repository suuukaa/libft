/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:08:41 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:41:54 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t Ndst)
{
	size_t	j;
	size_t	sized;
	size_t	sizes;

	if (!dst && Ndst == 0)
		return (ft_strlen(src));
	j = 0;
	sized = ft_strlen(dst);
	sizes = ft_strlen(src);
	if (Ndst == 0 || Ndst <= sized)
	{
		return (sizes + Ndst);
	}
	while (src[j] != '\0' && (Ndst - sized - 1) > j)
	{
		dst[sized + j] = src[j];
		j++;
	}
	dst[sized + j] = '\0';
	return (sized + sizes);
}
