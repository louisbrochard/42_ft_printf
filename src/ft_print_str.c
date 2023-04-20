/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrochar <lbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:10:15 by louisbrocha       #+#    #+#             */
/*   Updated: 2023/02/12 16:51:22 by lbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_print_str (const char  *str)
{
    int i; 

    i = 0;
    if (str == NULL)
    {
        write (1, "(null)", 6);
        return (6);
    }
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
    return (i);
}