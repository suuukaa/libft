/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:55:39 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/14 12:13:34 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*this;
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	this = *lst;
	while (this)
	{
		next = this->next;
		del(this->content);
		free(this);
		this = next;
	}
	*lst = NULL;
}
