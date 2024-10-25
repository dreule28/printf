/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreule <dreule@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:21:03 by dreule            #+#    #+#             */
/*   Updated: 2024/10/23 17:10:25 by dreule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	if (str != NULL)
		return (write(1, str, ft_strlen(str)));
	else if (str == NULL)
		return (write(1, "(null)", 6));
	return (-1);
}
