/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:45:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/28 20:10:34 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int nbr, int to)
{
	unsigned int	ld;
	unsigned int	rd;
	char			*base;
	static int		res;

	res = 0;
	base = "0123456789ABCDEF";
	if (!to)
		base = "0123456789abcdef";
	ld = nbr % 16;
	rd = nbr / 16;
	if (ld < 0)
		ld = -ld;
	if (rd != 0)
		ft_putnbr_hex (rd, to);
	res += ft_putchar (base[ld]);
	return (res);
}
