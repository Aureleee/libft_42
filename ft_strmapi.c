/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:56 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:36:27 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char  const *s, char (*f)(unsigned int , char))
{
    size_t  i;
    size_t  len;
    char    *new_str;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new_str = ft_calloc(len + 1, sizeof(char));
    if (!new_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    return (new_str);
}
