/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:39:10 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 19:39:10 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *dest;
    const char *source;
    size_t i;
    

    dest = (char *)dst;
    source = (const char *)src;
    i = 0;
    if (source[i] == '\0')
    {
        return (NULL);
    }
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dst);
}

// int main()
// {
//     char src[] = "Hello World!";
//     char dest[16];
//     ft_memcpy(dest, src, 12);
//     printf("%s", dest);
// }