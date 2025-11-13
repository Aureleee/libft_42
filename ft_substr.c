/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:46:02 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:26:16 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utils(void)
{
	substr = malloc(1);
	if (!substr)
		return (NULL);
	*substr = 0;
	return (substr);
}
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*substr;
	size_t	copy_len;

	if (!str)
		return (NULL);
	len_str = ft_strlen(str);
	if (start >= len_str)
		return (ft_utils());
	copy_len = len_str - start;
	if (copy_len > len)
		len = copy_len;
	substr = malloc(copy_len + 1);
	if (!substr)
		return (NULL);
	ft_memecpy(substr, str + start, copy_len);
	substr[copy_len] = '\0';
	return (substr);
}

/*
// test main for ft_substr
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s = "Hello, world";
    char *r1 = ft_substr(s, 7, 5);
    char *exp = malloc(6);
    memcpy(exp, s + 7, 5); exp[5] = '\0';
    printf("case1: ft=\"%s\" | exp=\"%s\"\n", r1, exp);
    free(r1); free(exp);

    char *r2 = ft_substr(s, 20, 3); 
    printf("case2: ft=\"%s\" | exp=\"\"\n", r2);
    free(r2);

    char *r3 = ft_substr(s, 0, 50); 
    printf("case3: ft=\"%s\"\n", r3);
    free(r3);
    return 0;
}
*/
