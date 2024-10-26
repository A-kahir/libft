/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:28:17 by akahir            #+#    #+#             */
/*   Updated: 2024/10/24 22:28:18 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    char ch;

    ch = (char)c;
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
    }
    return (ch);
}

// int main()
// {
//     int c = 'a';
//     printf("%c\n", ft_toupper(c));
// }