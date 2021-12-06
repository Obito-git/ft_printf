/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pattern.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:24 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:31:04 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static size_t	find_pattern(t_arg	*ar)
{
	if (ar->type == 'd' || ar->type == 'i')
		return (d_pattern(ar));
	if (ar->type == 'c')
		return (c_pattern(ar));
	if (ar->type == 's')
		return (s_pattern(ar));
	if (ar->type == 'p')
		return (p_pattern(ar));
	if (ar->type == 'u')
		return (u_pattern(ar));
	if (ar->type == 'x' || ar->type == 'X')
		return (xx_pattern(ar));
	return (0);
}

size_t	print_pattern(char type, void *var_content)
{
	t_arg	*ar;

	ar = get_init_arg();
	if (ar == NULL)
		return (0);
	ar->type = type;
	ar->content = var_content;
	return (find_pattern(ar));
}
