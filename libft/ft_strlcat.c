/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:18:32 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/29 14:49:53 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t count;
	size_t res;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	res = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	count = size - ft_strlen(dst) - 1;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (j < count && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
