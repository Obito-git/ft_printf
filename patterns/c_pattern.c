/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_pattern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:28:58 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:29:05 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	c_pattern(t_arg *ar)
{
	ft_putuc((unsigned char) *(int *)ar->content);
	arg_del(ar);
	return (1);
}
