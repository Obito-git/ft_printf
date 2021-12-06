/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:32:22 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:39:03 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	ft_putlong_fd(long n, int fd)
{
	unsigned long	ext_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ext_n = n * -1;
	}
	else
		ext_n = n;
	if (ext_n > 9)
		ft_putlong_fd(ext_n / 10, fd);
	ft_putchar_fd(ext_n % 10 + '0', fd);
}

void	ft_putulong_fd(unsigned long n, int fd)
{
	if (n > 9)
		ft_putulong_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

size_t	ft_numblen(long numb)
{
	size_t	i;

	i = 0;
	if (numb <= 0)
	{
		numb *= -1;
		i++;
	}
	while (numb > 0)
	{
		numb /= 10;
		i++;
	}
	return (i);
}

size_t	ft_u_numblen(unsigned long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_strdup_prot(const char	*src)
{
	char	*dest;

	if (!src)
		return (NULL);
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = 0;
	ft_strlcat(dest, src, ft_strlen(src) + 1);
	return (dest);
}
