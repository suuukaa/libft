/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:02:08 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/11 13:17:35 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc (sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main () 
// {
// 	t_list *smiyA = ft_lstnew("soukaina");	
// 	// while (smiyA)
// 	// {
// 	// 	printf("%s\n", smiyA->content);
// 	// 	smiyA= smiyA->next;
// 	// }
// }