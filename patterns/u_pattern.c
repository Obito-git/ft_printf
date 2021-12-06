/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_pattern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:40 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:29:42 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	u_pattern(t_arg *ar)
{
	unsigned long	n;
	size_t			len;

	n = *(unsigned long *) ar->content;
	ft_putulong_fd(n, 1);
	len = ft_u_numblen(n);
	arg_del(ar);
	return (len);
}
