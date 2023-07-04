/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:39:45 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/06 17:24:07 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (fd < 1)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_print_string(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd ("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		i++;
	}
	ft_putstr_fd(s, 1);
	return (i);
}

/*int main(void)
{
	char a[] = "dd";
	print_string (a);
}*/