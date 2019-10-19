/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:03:08 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/17 10:23:17 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static	void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	str1 = dest;
	str2 = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	if ((size_t)(src - dest) < n)
		ft_memcpy(dest, src, n);
	else
	{
		while (--n > 0)
			str1[n] = str2[n];
		str1[n] = str2[n];
	}
	return (dest);
}
