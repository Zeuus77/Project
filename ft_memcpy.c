/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:11:16 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/05 18:56:46 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s; 
	char *d;
	if (!dst && !src)
	return (0);
	s= (char *)src;
	d= (char *)dst;
	size_t i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
		
	}
	return(dst);
}
/*
int main()
{
	char src[]="abcde";
	printf("%s\n",(char *)ft_memcpy(src+2 ,src , 3));
	printf("%s",(char *)memcpy(src+2 ,src , 3));
}
*/