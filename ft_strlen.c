/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:30:22 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 10:30:23 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        i++;
        count++;
    }
    return (count);
}

// int main()
// {
//     char *str = "aymane";
//     int res = ft_strlen(str);
//     printf("%d\n", res);
// }