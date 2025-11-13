/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:46:02 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 11:56:20 by ahabbard         ###   ########.fr       */
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
