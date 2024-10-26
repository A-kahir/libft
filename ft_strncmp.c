/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:48:22 by akahir            #+#    #+#             */
/*   Updated: 2024/10/25 14:48:23 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n && j < n)
    {
        if (s1[i] != s2[j])
        {
            return (s1[i] - s2[i]);
        }
        i++;
        j++;
    }
    return (0);
}

int main()
{
    char s1[] = "aymane kahir";
    char s2[] = "aymane kehir";
    int res = ft_strncmp(s1, s2, 9);
    printf("%d", res);
}