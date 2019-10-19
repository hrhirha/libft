/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:27:11 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/19 13:33:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
