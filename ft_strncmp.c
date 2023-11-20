/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:04:41 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:27:08 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*test;
	unsigned char	*test2;

	test = (unsigned char *)str1;
	test2 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*test != *test2)
		{
			return (*test - *test2);
		}
		if (*test == '\0' || *test2 == '\0')
		{
			return (0);
		}
		test++;
		test2++;
		n--;
	}
	return (0);
}
