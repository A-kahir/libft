/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:09:25 by akahir            #+#    #+#             */
/*   Updated: 2024/10/26 11:09:26 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1;
    const char *str2;
    size_t  i;

    str1 = (const char *)s1;
    str2 = (const char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}

// int main()
// {
//     char s1[] = "aymane kahir";
//     char s2[] = "aymane kehir";
//     int res =ft_memcmp(s1, s2, 14);
//     printf("%d\n", res);
// }