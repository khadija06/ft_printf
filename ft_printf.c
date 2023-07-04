/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:55:34 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/07 17:58:29 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholders(va_list args, const char condition)
{
	int	char_len;

	char_len = 0;
	if (condition == 'c')
		char_len += ft_print_char(va_arg(args, int));
	else if (condition == 's')
		char_len += ft_print_string(va_arg(args, char *));
	else if (condition == 'd' || condition == 'i')
		char_len += ft_print_decnumbers(va_arg(args, int));
	else if (condition == 'u')
		char_len += ft_print_unsignednum(va_arg(args, unsigned int));
	else if (condition == 'x' || condition == 'X')
		char_len += ft_print_hex(va_arg(args, unsigned int), condition);
	else if (condition == 'p')
		char_len += ft_print_pointer(va_arg(args, unsigned long long));
	else if (condition == '%')
		char_len += ft_print_percentge();
	return (char_len);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		char_len;
	va_list	args;

	i = 0;
	char_len = 0;
	if (string == NULL)
		return (-1);
	va_start (args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			char_len += ft_placeholders(args, string[i + 1]);
			i++;
		}
		else
			char_len += ft_print_char(string[i]);
		i++;
	}
	va_end(args);
	return (char_len);
}

/*int main(void)
{

    printf("%i\n", 1223423);
    ft_printf("%i\n", 1223423);
}*/