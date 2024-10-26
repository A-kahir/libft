/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:52:55 by akahir            #+#    #+#             */
/*   Updated: 2024/10/25 13:52:55 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    while (s[len] != s[0])
    {
        if (s[len] == (char)c)
        {
            return (char *)(&s[len]);
        }
        len--;
    }
    return (NULL);
}

// int main() {
//     const char *str = "Hello, world!";
//     char ch = 'l';
//     char *result = ft_strrchr(str, ch);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     } else {
//         printf("Character '%c' not found.\n", ch);
//     }
// }
