/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_pattern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:17 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:29:19 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	p_pattern(t_arg *ar)
{
	unsigned long	cont;
	size_t			len;
	char			*base;

	cont = (*(unsigned long *) ar->content);
	base = "0123456789abcdef";
	if (cont == 0)
	{
		ft_putstr_fd("(nil)", 1);
		len = 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_put_posnbr_base(cont, base);
		len = ft_udectohex_len(cont, base) + 2;
	}
	arg_del(ar);
	return (len);
}
