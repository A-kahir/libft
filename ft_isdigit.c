/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:52:49 by akahir            #+#    #+#             */
/*   Updated: 2024/10/22 21:52:52 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isdigit(int c)
{
    unsigned char ch;

    ch = (unsigned char)c;
    if (ch >= '0' && ch <= '9')
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
    int c = '7';
    int res = ft_isdigit(c);
    printf("%d\n", res);
}