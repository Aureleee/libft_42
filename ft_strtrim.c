/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:35:19 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/17 21:48:17 by ahabbard         ###   ########.fr       */
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

static char	*ft_utils(char const *s1, const char *set)
{
	size_t	len_s1;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	if (len_s1 == 0)
		return (ft_edge_case());
	return (NULL);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	if (!s1 || !set || len_s1 == 0)
		return (ft_utils(s1, set));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == len_s1)
		return (ft_edge_case());
	end = len_s1 - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *r;
// 	r = ft_strtrim("  Hello world  ", " ");
// 	printf("result=\"%s\"\n", r);
// 	free(r);
// 	r = ft_strtrim("xxxHelloxxx", "x");
// 	printf("result=\"%s\"\n", r);
// 	free(r);
// 	r = ft_strtrim("", "x");
// 	printf("result=\"%s\"\n", r);
// 	free(r);
// 	r = ft_strtrim("xxxxx", "x");
// 	printf("result=\"%s\"\n", r);
// 	free(r);
// 	return (0);
// }