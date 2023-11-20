/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:01:27 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:29:35 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	unsigned int	nh;
	size_t			i;
	char			*n9lu;

	if (!s)
		return (0);
	nh = ft_strlen(s);
	if (s == 0)
		return (0);
	if (start > nh)
		n = 0;
	if (n > nh - start)
		n = nh - start;
	n9lu = malloc (sizeof(char) * (n + 1));
	if (n9lu == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		n9lu[i] = s[start + i];
		i++;
	}
	n9lu[i] = '\0';
	return (n9lu);
}
