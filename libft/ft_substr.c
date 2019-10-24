/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:44:28 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/23 18:09:59 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (!(str = malloc(len * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && len > 0)
	{
		str[i] = s[start + i];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
