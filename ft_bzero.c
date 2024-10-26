/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:24:24 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 14:24:25 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
int main() {
    char str[] = "Hello, World!";
    ft_bzero(str , 3);
    for (size_t i = 0; i < 15; i++)
    {
        if(str[i] == '\0')
            printf("%c", '0');
        else
            printf("%c", str[i]);
    }
}
*/

int main()
{
    char s[] = "aymane";
    ft_bzero(s, 5);
    printf("%s\n", s);
}