/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreule <dreule@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:15:53 by dreule            #+#    #+#             */
/*   Updated: 2024/10/25 20:20:04 by dreule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		print_char(int c);
int		print_str(char *str);
int		print_pointer(void *ptr);
int		print_inti(int n);
int		print_un_int(unsigned int n);
int		print_low(unsigned long nb);
int		print_upp(long nb);
int		print_percenti(void);
int		ft_putstr_print_itoa(char *s);

#endif