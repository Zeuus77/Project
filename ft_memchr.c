/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 00:35:54 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/06 01:23:39 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;
	i = 0;
	unsigned char *str;
	str = (unsigned char *)s;
	while(i < n)
	{
		if(str[i]== (unsigned char) c)
			return(&str[i]);
		i++;
	}
	return(NULL);
	
	


	
}