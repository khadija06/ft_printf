/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:02:10 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/06 18:13:29 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr((num / 16));
		ft_putptr((num % 16));
	}
	else
	{
		if (num <= 9)
			ft_print_char((num + '0'));
		else
			ft_print_char((num - 10 + 'a'));
	}
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	addres;

	addres = 0;
	addres += ft_print_string("0x");
	if (ptr == 0)
		addres += ft_print_char('0');
	else
	{
		ft_putptr (ptr);
		addres += ft_ptrlen(ptr);
	}
	return (addres);
}
/*int main (void)
{
	print_pointer(12123);
}*/