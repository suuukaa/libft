/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:47:30 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/16 11:31:14 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
// int main ()
// {
// 	t_list *h = ft_lstnew("mihal2");
//  	t_list *i = ft_lstnew("nihal");
// 	ft_lstadd_back(&h, i);
// 	printf("%s", (char *)i->content);
// }
