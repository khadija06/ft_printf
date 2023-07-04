/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:45:45 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/07 17:06:16 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hex(unsigned int num)
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

void	ft_convert_hex(unsigned int num, const char condition)
{
	if (num >= 16)
	{
		ft_convert_hex((num / 16), condition);
		ft_convert_hex((num % 16), condition);
	}
	else
	{
		if (num <= 9)
			ft_print_char (num + '0');
		else
		{
			if (condition == 'x')
				ft_print_char (num - 10 + 'a');
			else if (condition == 'X')
				ft_print_char (num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int num, const char condition)
{
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_convert_hex (num, condition);
	return (ft_count_hex(num));
}

/*int main(void)
{
	print_hex(11, %X);
}*/