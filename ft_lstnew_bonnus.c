/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidbrm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:23:53 by aidbrm            #+#    #+#             */
/*   Updated: 2025/10/30 17:24:51 by aidbrm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list	*head;

    head = malloc(sizeof(t_list));
    if (!head)
        return (NULL);
	head->content=content;
    head->next=NULL;
	return (head);
}