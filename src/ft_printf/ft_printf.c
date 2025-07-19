/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:23:43 by hrhirha           #+#    #+#             */
/*   Updated: 2019/12/14 12:42:02 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_form	*form;
	size_t	count;

	form = malloc(sizeof(t_form));
	form->copy = (char *)format;
	ft_init(form);
	if (format)
	{
		va_start(form->args, format);
		form->count = ft_handler(form);
		va_end(form->args);
	}
	count = form->count;
	free(form);
	return (count);
}
