/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:04:58 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/14 11:54:36 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	else
	{
		while (lst->next)
		{
			lst = lst->next;
		}
	}
	return (lst);
}
// int main()
// {
// 	t_list *h = ft_lstnew("mihal2");
//  	t_list *i = ft_lstnew("nihal");
//  	ft_lstadd_front(&h, i);
// 	printf("%s", (char *)ft_lstlast(i)->content);
// }
