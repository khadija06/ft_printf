/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decnumbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:53:46 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/06 18:14:16 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_negative(int n)
{
	if (n <= 0)
		return (1);
	return (0);
}

int long	make_postive_or_keep_it(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	len(int n)
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

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	i;

	nbr = n;
	i = check_negative(nbr);
	nbr = make_postive_or_keep_it(nbr);
	i += len(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (i == 0 && str[1] == '\0')
		str[i] = '0';
	else if (i == 0 && str[1] != '\0')
		str[i] = '-';
	return (str);
}

int	ft_print_decnumbers(int n)
{
	int		len;
	char	*digit;

	len = 0;
	digit = ft_itoa(n);
	len += ft_print_string(digit);
	free(digit);
	return (len);
}

/*int main(void)
{
	print_decnumbers(12312);
}*/