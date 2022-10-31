/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:52:42 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/31 17:27:59 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putchrp(int a);
int	ft_putstrp(const char *str);
int	ft_put_i(int n);
int	ft_printf(const char *str, ...);
int	ft_printp(void *p);
int	ft_print_x(unsigned int i);
int	ft_print_x_up(unsigned int i);

#endif
