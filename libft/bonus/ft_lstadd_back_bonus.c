/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:16:33 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/23 11:02:45 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->next = NULL;
	tmp->next = new;
}
