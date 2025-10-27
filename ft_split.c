/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:35:24 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/27 11:28:45 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freee(char **str, int i)
{
	i--;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

static int	count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	end;
	size_t	srt;
	int		i;
	int		word;

	word = count(s, c);
	p = malloc((word + 1) * sizeof(char *));
	if (!p || !s)
		return (NULL);
	i = 0;
	srt = 0;
	while (i < word)
	{
		while (s[srt] == c)
			srt++;
		end = srt;
		while (s[end] != c && s[end])
			end++;
		p[i] = ft_substr(s, srt, (end - srt));
		if (!p[i])
			return (freee(p, i));
		srt = end;
		i++;
	}
	p[i] = NULL;
	return (p);
}
#include <stdio.h>
int main()
{
	char **result;
    int i;

    result = ft_split("Hello,,,,,,,,,,,,,World,this,is,split", ',');
    if (!result)
    {
        printf("ft_split returned NULL\n");
        return 1;
    }

    i = 0;
    while (result[i])
    {
        printf("word[%d]: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
