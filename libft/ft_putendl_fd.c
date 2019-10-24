/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:52:31 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/23 18:34:33 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s == NULL)
		ft_putchar_fd(0, fd);
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
	ft_putchar_fd('\n', fd);
}
