/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:36:46 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/14 13:31:22 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lines(char const *wahed, char const *joj, char *buff)
{
	size_t	wahed_len;
	size_t	i;
	size_t	joj_len;

	wahed_len = ft_strlen(wahed);
	joj_len = ft_strlen(joj);
	i = 0;
	while (i < wahed_len)
	{
		buff[i] = wahed[i];
		i++;
	}
	i = 0;
	while (i < joj_len)
	{
		buff[wahed_len + i] = joj[i];
		i++;
	}
	buff[wahed_len + i] = '\0';
	return (buff);
}

char	*ft_strjoin(char const *wahed, char const *joj)
{
	char	*buff;
	size_t	wahed_len;
	size_t	joj_len;

	if (wahed == 0 || joj == 0)
		return (0);
	wahed_len = ft_strlen(wahed);
	joj_len = ft_strlen(joj);
	buff = malloc (wahed_len + joj_len + 1);
	if (buff == 0)
		return (0);
	return (ft_lines(wahed, joj, buff));
}
