/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:53:46 by sel-bouy          #+#    #+#             */
/*   Updated: 2023/11/15 18:04:23 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
