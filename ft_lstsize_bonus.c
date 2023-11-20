/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:31:52 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/13 11:36:25 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	else
	{
		while (lst)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}
// int main()
// {
// 	t_list *h = ft_lstnew("mihal2");
// 	t_list *i = ft_lstnew("nihal");
// 	ft_lstadd_front(&h, i);
// 	printf("%d", ft_lstsize(h));
// }