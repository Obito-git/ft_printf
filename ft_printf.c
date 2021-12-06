/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:05:13 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:42:14 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	len;
	char	*cpy;

	cpy = ft_strdup(s);
	va_start(args, s);
	len = parse(&args, cpy);
	va_end(args);
	free(cpy);
	return (len);
}
