/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:56:25 by akahir            #+#    #+#             */
/*   Updated: 2024/10/26 11:56:28 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;

    while (haystack[i] != '\0' && 0 < len)
    {
        while (haystack[i] == needle[j] && i < len)
        {
            i++;
        }
        if (needle[j] == '\0')
        {
            return (char *)(&haystack[i]);
        }
        j--;
    }
    return (NULL);
}

int main(void)
{
    const char *haystack1 = "Hello, World! nice to meet you";
    const char *needle1 = "World";
    size_t len1 = 25;
    size_t len2 = 10;
    
    // Test case 1: Needle found within limit
    char *result1 = ft_strnstr(haystack1, needle1, len1);
    if (result1 != NULL)
        printf("Test 1 - Found: %s\n", result1);
    else
        printf("Test 1 - Not Found\n");
}

