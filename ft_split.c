/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:19:05 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/16 10:17:43 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			r++;
		while (s[i] != c && s[i])
			i++;
	}
	return (r);
}

static int	count_ch(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word++;
			i++;
		}
		if (s[i - 1] != c)
			return (word);
	}
	return (0);
}

static char	**ft_free(char **res)
{
	int	i;

	i = 0;
	if (res)
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		j;

	j = 0;
	if (s == 0)
		return (0);
	res = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (res == 0)
		return (free(res), NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[j] = ft_substr(s, 0, count_ch(s, c));
			if (!res[j])
				return (ft_free(res));
			s += count_ch(s, c);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
// int main()
// {
// 	char nouha[] = "soukiana nouhayla nihal tolati jamil ra2i3 wa3er";
// 	int i = 0;
// 	char **jj= ft_split(nouha, ' ');
// 	while (jj[i])
// 	{
// 		printf("%s\n", jj[i]);
// 		i++;
// 	}
// 	free(jj);
// 	return 0;
// }
