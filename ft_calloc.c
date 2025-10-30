/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:41:20 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/29 15:59:43 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	a;

	if (n && size > SIZE_MAX / n)
		return (NULL);
	a = (n * size);
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, a);
	return (ptr);
}
