/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:45:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/28 20:10:52 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pointer(size_t nbr)
{
	size_t			ld;
	size_t			rd;
	char			*base;
	static int		res;

	res = 0;
	if (!nbr)
		return (ft_putstr("(nil)"));
	base = "0123456789abcdef";
	ld = nbr % 16;
	rd = nbr / 16;
	if (ld < 0)
		ld = -ld;
	if (rd != 0)
		ft_putnbr_pointer (rd);
	else
		res += ft_putstr("0x");
	res += ft_putchar (base[ld]);
	return (res);
}
