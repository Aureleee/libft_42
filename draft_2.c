/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:04:11 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 11:04:12 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t size)
{
/* here size represents the size of the buffer dst (NOT the len)*/ 
/* Thus at maximum we can cat is size - len - 1 ( -1 bc we have to nul-terminate dst */ 
/* it have to return len(dest) + len(src) and copy what it cans in dst */
/* DST IS NOT A TRUE STRING (it's not necessarely nul teminated) */
	size_t len_dst;
	size_t len_src;
	size_t i; 

	len_dst = 0;
	while (len_dst < size && dst[len_dst])
		len_dst++;
	len_src = ft_strlen(src);
	if (len_dst == size)
		return size + len_src;
	i = 0;
	while (src[i] && (i + len_dst + 1 < size))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i+len_dst] = 0; 
	return len_src + len_dst;

}
