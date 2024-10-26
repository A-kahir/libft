/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:16:17 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 11:16:18 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dest;
    const char *source;
    size_t i;

    dest = (char *)dst;
    source = (const char *)src;
    i = 0;
    if (dst == NULL || src == NULL || len == 0 || dest == source)
    {
        return (dst);
    }
    if (dest > source)
    {
        while (len > 0)
        {
            len--;
            dest[len] = source[len];
        }
    }
    else
    {
        while (i < len)
        {
            dest[i] = source[i];
            i++;
        }
    }
    return (dst);
}

int main()
{
    char src[] = "Hello World!";
    char dst[] = "aymane";
    ft_memmove(dst, src, 4);
    printf("%s\n", dst);
}