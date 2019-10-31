/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:09:27 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/31 09:07:47 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*cpy;

	cpy = (char *)src;
	if (size != 0)
	{
		while (--size != 0 && *src)
		{
			*dst = *src;
			src++;
			dst++;
		}
		*dst = '\0';
	}
	if (size == 0 && *src != '\0')
	{
		while (*src)
			src++;
	}
	return (src - cpy);
}
