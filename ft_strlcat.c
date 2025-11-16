/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:21:59 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/16 21:52:53 by ahabbard         ###   ########.fr       */
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

// test main for ft_strlcat
// #include "libft.h"
// #include <string.h>
// int main(void)
// {
//     char dest1[20] = "Hello, ";
//     char dest2[20] = "Hello, ";
//     const char *src = "World!";
//     size_t n = 6;
//     size_t r1 = ft_strlcat(dest1, src, n);
//     size_t r2 = strlcat(dest2, src, n);
//     printf("ft_strlcat: dest=\"%s\", return=%zu\n",
//            dest1, r1);
//     printf("strlcat:    dest=\"%s\", return=%zu\n",
//            dest2, r2);
//     return (0);
// }
