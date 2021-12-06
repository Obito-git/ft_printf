/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xx_pattern.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:46 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:29:48 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	xx_pattern(t_arg *ar)
{
	unsigned long	cont;
	size_t			len;
	char			*base;

	cont = (*(unsigned long *) ar->content);
	if (ar->type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_put_posnbr_base(cont, base);
	len = ft_udectohex_len(cont, base);
	arg_del(ar);
	return (len);
}
