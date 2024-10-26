/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:43:41 by akahir            #+#    #+#             */
/*   Updated: 2024/10/23 08:43:44 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    unsigned char ch;

    ch = (unsigned char)c;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
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
    int c = 'D';
    int res = ft_isalnum(c);
    printf("%d\n", res);
}