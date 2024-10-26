/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:34:21 by akahir            #+#    #+#             */
/*   Updated: 2024/10/24 10:34:22 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while (i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

 int main()
 {
     char src[] = "Hello World !";
     char dest[16];
     printf("%lu", ft_strlcpy(dest, src, 5));
     printf("\n");
     printf("%lu", strlcpy(dest, src, 5));
     printf("\n");
     printf("%s\n",dest);
 
 }