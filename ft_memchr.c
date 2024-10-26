/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:02:49 by akahir            #+#    #+#             */
/*   Updated: 2024/10/25 15:02:49 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *str;
    size_t  i;

    str = (const char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (char)c)
        {
            return (char *)(&s[i]);
        }
        i++;
    }
    return (NULL);
}

// int main() {
//     const char buffer[] = "Hello, world!";
//     char target = 'w';
//     char *result = ft_memchr(buffer, target, sizeof(buffer));

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", target, result - buffer);
//     } else {
//         printf("Character '%c' not found.\n", target);
//     }

//     return 0;
// }
