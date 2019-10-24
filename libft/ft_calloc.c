/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 02:21:45 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/23 13:21:25 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (void *)malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
