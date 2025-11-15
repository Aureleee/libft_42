/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:45 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/15 21:23:40 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// here is the correct implementation of ft_split function

#include <stdlib.h>
#include <stdio.h>


int ft_count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

char *ft_copystr(char const *s, int start, int end)
{
    char *subs;
    int n;

    n = end - start;
    subs = malloc(n + 1);
    if (!subs)
        return (NULL);
    while (n > 0 )
    {
        subs[n - 1] = s[n + start - 1];
        n--; 
    }
    subs[end - start] = '\0';
    return (subs);
}

char *ft_edge_cases(char const *s, char c)
{
    if(!s)
        return NULL;
    if(s[0]== 0)
    {
        char *str = malloc(1);
        if (!str)
            return NULL;
        str[0] = 0;
        return str; 
    }
    return NULL;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int word_count;
    int i;
    int start;
    int end;
    
    // esult = ft_edge_cases(s, c);
    if (result != NULL)
        return (result);
    word_count = ft_count_words(s, c);
    result = malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;
    i = 0;
    start = -1;
    end = 0;
    while (s[end] != '\0')
    {
        if (s[end] != c && start == -1)
            start = end;
        else if ((s[end] == c || s[end + 1] == '\0') && start != -1)
        {
            if (s[end] == c)
                result[i++] = ft_copystr(s, start, end);
            else
                result[i++] = ft_copystr(s, start, end + 1);
            start = -1;
        }
        end++;
    }
    result[i] = NULL;
    return result;
}

// test main for ft_split
#include <stdio.h>
int main(void)
{
    char **res;
    int i;

    res = ft_split("Hello,,world,this,is,a,test", ',');
    i = 0;
    while (res[i] != NULL)
    {
        printf("res[%d] = \"%s\"\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return 0;
}