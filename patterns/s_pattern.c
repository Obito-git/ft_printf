/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_pattern.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:31 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:31:26 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	s_pattern(t_arg *ar)
{
	size_t	len;

	if ((char *)ar->content == NULL)
	{
		ft_putstr_fd("(null)", 1);
		len = 6;
	}
	else
	{
		ft_putstr_fd((char *)ar->content, 1);
		len = ft_strlen((char *)ar->content);
	}
	arg_del(ar);
	return (len);
}
