/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsignednum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:40:11 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/06 18:13:00 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_count(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	int		i;
	long	nbr;
	char	*str;

	nbr = n;
	i = find_count(nbr);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}

int	ft_print_unsignednum(unsigned int n)
{
	int		len;
	char	*digit;

	len = 0;
	if (n == 0)
	{
		len += ft_print_char('0');
		return (1);
	}
	else
	{
		digit = ft_uitoa(n);
		len += ft_print_string(digit);
		free (digit);
	}
	return (len);
}
/*int main(void)
{
	print_unsignednum(2335353524);
}*/