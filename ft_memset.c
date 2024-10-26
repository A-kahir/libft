/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:40:36 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 10:40:36 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    unsigned char ch;
    size_t i;

    str = (unsigned char *)b; 
    ch = (unsigned char)c;
    i = 0;
    while (i < len)
    {
        str[i] = ch;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "Hello World!"; //*****e kahir
    ft_memset(str, '*', 5);
    printf("%s\n", str);
}