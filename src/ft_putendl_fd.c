/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:52:31 by hrhirha           #+#    #+#             */
/*   Updated: 2024/03/28 13:54:56 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		ft_putchar_fd(0, fd);
	else
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
