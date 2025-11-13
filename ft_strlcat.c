/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:21:59 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:20:17 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	while (len_dst < dstsize && dst[len_dst])
		len_dst++;
	len_src = ft_strlen(src);
	if (len_dst == dstsize)
		return (dstsize + len_src);
	i = 0;
	while (src[i] && (i + len_dst + 1 < dstsize))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i + len_dst] = 0;
	return (len_src + len_dst);
}

/* // test main for ft_strlcat
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int main(void)
{
    char a1[16] = "Hello";
    char b1[16] = "Hello";
    size_t r1 = ft_strlcat(a1, "World", 16);
    size_t r2 = strlcat(b1, "World", 16);
    printf("case1: ft dst=\"%s\" ret=%zu | libc dst=\"%s\" ret=%zu\n", a1, r1, b1, r2);

    char a2[6] = "ABCDE"; char b2[6] = "ABCDE";
    r1 = ft_strlcat(a2, "XYZ", 0);
    r2 = strlcat(b2, "XYZ", 0);
    printf("case2: ft dst=\"%s\" ret=%zu | libc dst=\"%s\" ret=%zu\n", a2, r1, b2, r2);

    char a3[8] = ""; char b3[8] = "";
    r1 = ft_strlcat(a3, "123456789", 4);
    r2 = strlcat(b3, "123456789", 4);
    printf("case3: ft dst=\"%s\" ret=%zu | libc dst=\"%s\" ret=%zu\n", a3, r1, b3, r2);
    return 0;
}
 */
