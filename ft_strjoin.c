/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:52 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:25:32 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*join_str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join_str = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!join_str)
		return (NULL);
	ft_memcpy(join_str, s1, len_s1);
	ft_memcpy(join_str + len_s1, s2, len_s2);
	return (join_str);
}


// test main for ft_strjoin
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	const char *a = "Hello";
	const char *b = "World";
	char *r = ft_strjoin(a, b);
	char *exp = malloc(strlen(a) + strlen(b) + 1);
	strcpy(exp, a); strcat(exp, b);
	printf("ft_strjoin=\"%s\" | exp=\"%s\"\n", r, exp);
	free(r); free(exp);
	return 0;
}

