/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:31:58 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:39:20 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

t_arg	*get_init_arg(void)
{
	t_arg	*ar;

	ar = (t_arg *) malloc(sizeof(t_arg));
	if (ar == NULL)
		return (NULL);
	ar->type = 'c';
	ar->isnull = 0;
	ar->content = NULL;
	return (ar);
}

void	arg_del(t_arg *ar)
{
	if (ar != NULL)
	{
		free(ar->content);
		free(ar);
	}
}
