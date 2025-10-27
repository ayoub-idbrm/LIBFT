/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:36:51 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/21 14:56:08 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		p[i] = f(i, *s);
		s++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*#include <stdio.h>
int main()
{
	char    str[] = "libftproject";
	char    *result;

	result = ft_strmapi(str, my_func);
	if (!result)
		return (1);
	printf("Original : %s\n", str);
	printf("Modified : %s\n", result);

	free(result);
	return (0);
}*/
