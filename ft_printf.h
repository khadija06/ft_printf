/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:18:23 by knabeel           #+#    #+#             */
/*   Updated: 2022/09/07 16:18:26 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *string, ...);
int		ft_print_char(char c);
int		ft_print_string(char *s);
int		ft_print_decnumbers(int n);
int		ft_print_hex(unsigned int num, const char condition);
int		ft_print_pointer(unsigned long long ptr);
int		ft_print_unsignednum(unsigned int n);
int		ft_print_percentge(void);

#endif