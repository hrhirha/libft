/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:09:34 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/29 12:03:28 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (str);
	while (i < len && str[i] != '\0')
	{
		while (str[i] != '\0' && needle[j] != '\0' && str[i] == needle[j]
				&& i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&str[i - j]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
