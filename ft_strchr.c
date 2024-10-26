/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:49:11 by akahir            #+#    #+#             */
/*   Updated: 2024/10/24 22:49:12 by akahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == (char)c)
        {
            return (char *)(&s[i]);
        }
        i++;
    }
    return (NULL);
}

int main() {
    const char *str = "Hello, world!";
    char ch = 0;
    char *result = ft_strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %s\n", ch, result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
