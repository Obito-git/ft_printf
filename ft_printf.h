/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:09:30 by amyroshn          #+#    #+#             */
/*   Updated: 2021/12/06 15:24:37 by amyroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//# define LLONG_MIN_VAL (-9223372036854775807LL - 1)
//# define LLONG_MAX_VAL (9223372036854775807LL)
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_arg
{
	int		isnull;
	char	type;
	void	*content;
}				t_arg;

int		ft_printf(const char *s, ...);
/*-----------------------------UTILS-----------------------------*/
void	ft_putchar(char c);
void	ft_putulong_fd(unsigned long n, int fd);
void	ft_put_posnbr_base(unsigned long nbr, char *base);
char	*ft_strdup_prot(const char	*src);
void	ft_putuc(unsigned char c);
int		isspecch(char c);
int		ispattern(char c);
size_t	ft_numblen(long numb);
size_t	ft_u_numblen(unsigned long n);
void	ft_putlong_fd(long n, int fd);
size_t	ft_udectohex_len(unsigned long nbr, char *base);
/*-----------------------------PATTERNS-----------------------------*/
size_t	parse(va_list	*ar, char *str);
size_t	print_pattern(char type, void *var_content);
size_t	c_pattern(t_arg *ar);
size_t	d_pattern(t_arg *ar);
size_t	s_pattern(t_arg *ar);
size_t	p_pattern(t_arg *ar);
size_t	u_pattern(t_arg *ar);
size_t	xx_pattern(t_arg *ar);
/*-----------------------------ARGS-----------------------------*/
t_arg	*get_init_arg(void);
void	arg_del(t_arg *ar);
#endif
