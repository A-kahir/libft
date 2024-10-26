/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:14:06 by akahir            #+#    #+#             */
/*   Updated: 2024/10/22 21:14:20 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    unsigned char ch;

    ch = (unsigned char)c;
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
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
    int c = 'a';
    int res = ft_isalpha(c);
    printf("%d\n", res);
}