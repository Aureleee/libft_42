/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:46:02 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/16 23:39:17 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_edge_case(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*str;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_edge_case());
	if (len + start > len_s)
		len = len_s - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

// // #include <stdio.h>
// // int main(void)
// // {
// // 	char *s;
// // 	char *r;
// // 	s = "Hello, world";
// // 	r = ft_substr(s, 0, 5);
// // 	printf("result=\"%s\"\n", r);
// // 	return (0);
// // }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*r1;
// 	char	*exp;
// 	char	*r2;
// 	char	*r3;

// 	s = "Hello, world";
// 	r1 = ft_substr(s, 7, 5);
// 	exp = malloc(6);
// 	memcpy(exp, s + 7, 5);
// 	exp[5] = '\0';
// 	printf("case1: ft=\"%s\" | exp=\"%s\"\n", r1, exp);
// 	free(r1);
// 	free(exp);
// 	r2 = ft_substr(s, 20, 3);
// 	printf("case2: ft=\"%s\" | exp=\"\"\n", r2);
// 	free(r2);
// 	r3 = ft_substr(s, 0, 50);
// 	printf("case3: ft=\"%s\"\n", r3);
// 	free(r3);
// 	return (0);
// }
