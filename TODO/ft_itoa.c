/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:19 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:43:49 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 

READ THIS then try to implement ft_itoa yourself:

char	*ft_itoa(int n)
{
    char	*str;
    long	num;
    size_t	len;

    num = n;
    len = (n <= 0) ? 1 : 0;
    while (num)
    {
        num /= 10;
        len++;
    }
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    num = n;
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
        str[0] = '0';
    while (num)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
} */