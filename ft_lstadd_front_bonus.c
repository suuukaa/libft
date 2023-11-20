/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:59:38 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/12 21:48:05 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	char *s1 = strdup("hiyanit");
// 	char *s2 = strdup("hiyanit2");
// 	t_list *shi = ft_lstnew(s1);
// 	t_list *shi2 = ft_lstnew(s2);
// 	ft_lstadd_front(&shi, shi2);
// 	printf("%s", shi2->content);
// }