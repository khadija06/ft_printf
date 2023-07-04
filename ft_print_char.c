/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:49:12 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/06 17:21:57 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 1)
		return ;
	write(fd, &c, 1);
}

int	ft_print_char(char c)
{
	ft_putchar_fd (c, 1);
	return (1);
}
/*int main(void)
{
	print_char('d');
}*/
