/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:26:17 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/21 22:08:54 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i;
	char *st;
	i = 0;
	if (!s)
		return(NULL);
	st = malloc(len + 1);
	//if(start >= ft_strlen(s))
	//	return(st);
	if(!st)
		return(NULL);
	while( s[i + start] && i < len && start < ft_strlen(s) )
	{
		st[i] = s[start + i];
		i++;
	}
	st[i] = '\0';
	return(st);
}