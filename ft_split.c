/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:45 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/18 16:48:09 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_tab(char **str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(str[i++]);
	free(str);
}

static size_t	ft_countwords(const char *src, char c)
{
	size_t	i;
	size_t	number;
	int		in_word;

	in_word = 0;
	i = 0;
	number = 0;
	while (src[i])
	{
		if (src[i] != c && !in_word)
		{
			in_word = 1;
			number++;
		}
		if (src[i] == c)
			in_word = 0;
		i++;
	}
	return (number);
}

static char	*ft_cpy_index_word(const char *src, char c, size_t *index)
{
	size_t	start;
	size_t	end;
	char	*subs;

	while (src[*index] && src[*index] == c)
		(*index)++;
	start = *index;
	while (src[*index] && src[*index] != c)
		(*index)++;
	end = *index;
	subs = malloc(end - start + 1);
	if (!subs)
		return (NULL);
	subs[end - start] = 0;
	while (end - start > 0)
	{
		subs[end - start - 1] = src[end - 1];
		end--;
	}
	return (subs);
}

static char	**ft_init(char const *s, char c, size_t *nwords)
{
	char	**str;

	*nwords = ft_countwords(s, c);
	str = malloc(sizeof(char *) * (*nwords + 1));
	if (!str)
		return (NULL);
	str[*nwords] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	nwords;
	char	**str;
	size_t	i;
	size_t	index;

	if (!s)
		return (NULL);
	str = ft_init(s, c, &nwords);
	if (!str)
		return (NULL);
	i = 0;
	index = 0;
	while (i < nwords)
	{
		str[i] = ft_cpy_index_word(s, c, &index);
		if (!str[i])
		{
			ft_free_tab(str, i);
			return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// void ft_display_tab(const char **src)
// {
//     size_t index = 0;

//     while (*src)
//     {
//         printf("word nb %zu:\t%s\n-------------\n", index, *src);
//         index++;
//         src++;
//     }
// }
// // a mettre dans le split (pour lisibilité quand test)
// // //printf("start:\t%ld\tend:\t%ld\n", start, end);
// // //printf("malloced:\t%ld\n", end - start + 1);
// // // printf("%c\n",src[end -1]);   tripouille  42  ", ' '
// //
// int main(int ac, char **av)
// {
// 	char *word = "   tripouille  42  ";
// 	const char *test[] = { "blaaabn lala", "erdeded", "pleasen word", NULL };
// 	char split = ' ';
// 	size_t index = 0;
// 	size_t number;
// 	ft_display_tab(test);
// 	number = ft_countwords (word, split);
// 	printf("number of words:\t%ld\n_______________\n", number);
// 	char *cpy;
// 	while (word[index])
// 	{	cpy = ft_cpy_index_word(word, split, &index);
// 		printf("word cpy:\t%s\tindex:%ld\n____________\n", cpy, index);
// 	}
// 	char **res = ft_split(word, split);
// 	ft_display_tab((const char **)res);
// 	ft_free_tab(res, number);
// 	return (0);
// }