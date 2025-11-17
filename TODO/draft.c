/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:35:19 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/17 21:48:52 by ahabbard         ###   ########.fr       */
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

	if (!s)
		return (NULL);
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

// git clone https://github.com/Tripouille/libftTester.git tripo
// git clone https://github.com/Tripouille/libftTester.git tripo
// git clone https://github.com/Tripouille/libftTester.git tripo
// #include <stdio.h>
// int main(void)
// {
// 	char *s;
// 	char *r;
// 	s = "Hello, world";
// 	r = ft_substr(s, 0, 5);
// 	printf("result=\"%s\"\n", r);
// 	free(r);
//
// 	r = ft_substr(s, 15, 5);
// 	printf("result=\"%s\"\n", r);
// 	free(r);
//
// 	r = ft_substr(s, 7, 100);
// 	printf("result=\"%s\"\n", r);
// 	free(r);
//
// 	r = ft_substr(NULL, 0, 5);
// 	printf("result=%p\n", (void*)r);
// 	return (0);
// }