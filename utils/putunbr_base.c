/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:20:51 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:37:52 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

size_t	ft_udectohex_len(unsigned long nbr, char *base)
{
	size_t	hex_len;

	hex_len = 1;
	while (nbr % (long) ft_strlen(base) != nbr)
	{
		nbr /= (long) ft_strlen(base);
		hex_len++;
	}
	return (hex_len);
}

static size_t	ft_base_check(char	*base)
{
	size_t	i;
	size_t	z;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		z = i + 1;
		while (base[z] != '\0')
		{	
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

static void	ft_print_base_numb(unsigned long nbr, char *base)
{
	if ((unsigned long)(nbr % ft_strlen(base)) != nbr)
		ft_print_base_numb(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}

void	ft_put_posnbr_base(unsigned long nbr, char *base)
{
	if (!base || !ft_base_check(base))
		return ;
	ft_print_base_numb(nbr, base);
}
