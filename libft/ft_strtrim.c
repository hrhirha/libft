/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:34:25 by hrhirha           #+#    #+#             */
/*   Updated: 2019/10/15 17:49:33 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static	int		ft_trimstart(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

static	int		ft_trimend(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i--;
			j = 0;
		}
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = ft_trimstart(s1, set);
	k = ft_trimend(s1, set);
	if (!(str = (char *)malloc((ft_strlen(s1) - j - k + 1) * sizeof(char))))
		return (NULL);
	else
	{
		while (j <= k)
		{
			str[i] = s1[j];
			i++;
			j++;
		}
		str[i] = '\0';
	}
	return (str);
}
