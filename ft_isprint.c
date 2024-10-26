/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:15:16 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 09:15:20 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    unsigned char ch;

    ch = (unsigned char)c;
    if (ch >= 32 && ch <= 126)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main()
{
    int c = -1;
    int res = ft_isprint(c);
    printf("%d\n", res);
}
