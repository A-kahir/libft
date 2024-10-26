/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:49:35 by akahir            #+#    #+#             */
/*   Updated: 2024/10/24 13:49:35 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (i < dstsize && dst[i])
    {
        i++;
    }
    while (src[j] && (dstsize > (i + j)))
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i != dstsize)
    {
        dst[i + j] = '\0';
    }
    return (i + ft_strlen(src));
    
}

int main() {
    char src[] = "Hello HWR!";
    char dest[20] = "Aymane ";
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Resulting string: '%s'\n", dest);
    printf("Length that would have been created: %zu\n", result);
}