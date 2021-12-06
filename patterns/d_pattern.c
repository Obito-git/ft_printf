/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_pattern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:10 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:30:20 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	d_pattern(t_arg *ar)
{
	size_t	len;

	ft_putlong_fd(*(long *)ar->content, 1);
	len = ft_numblen(*(long *)ar->content);
	arg_del(ar);
	return (len);
}
