/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:46:02 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/12 12:31:28 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	s_len;
	char	*subs;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		subs = ft_calloc(1, 1);
		if (!subs)
			return (NULL);
		return (subs);
	}
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	subs = ft_calloc(sub_len + 1, 1);
	if (!subs)
		return (NULL);
	ft_memcpy(subs, s + start, sub_len);
	return (subs);
}
