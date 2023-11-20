/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:54:46 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:30:15 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_while(char const *set, int i, char const *s1)
{
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	return (i);
}

static int	ft_while2(char const *set, int j, char const *s1)
{
	while (ft_strchr(set, s1[j - 1]) && j > 0)
	{
		j--;
	}
	return (j);
}

static char	*ft_25(void)
{
	char	*noha;

	noha = malloc (1);
	if (noha == 0)
		return (0);
	noha[0] = '\0';
	return (noha);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	t;
	char	*buff;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	i = ft_while(set, i, s1);
	j = ft_strlen(s1);
	if (i == j)
		return (ft_25());
	j = ft_while2(set, j, s1);
	buff = malloc(j - i + 1);
	if (buff == 0)
		return (0);
	t = 0;
	while (i < j)
	{
		buff[t] = s1[i];
		i++;
		t++; 
	}
	buff[t] = '\0';
	return (buff);
}
// int main()
// {
// 	char *s = " lorem ipsum dolor sit amet";
// 	printf("%s",ft_strtrim(s, " lorem"));
// }
