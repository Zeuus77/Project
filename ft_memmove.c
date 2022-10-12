/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:25:03 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/10 17:57:06 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *s;
	char *d;

	if (!dst && !src)
		return (0);
	s = (char *)src;
	d = (char *)dst;
	size_t i = 0;
	while( i < len)
	{
		if(d <= s)
		{
			d[i] = s[i];
			i++;
		}
		else if( d > s )
		{
			d[len - 1 - i] = s [len - 1 - i];
			i++;
		}
		
	}
	return(dst);
}


/*int main()
{
	char src[]="abcde";
	char src2[]="abcde";
	printf("%s\n",ft_memmove(src+2 ,src , 3));
	printf("%s\n",memmove(src2 +2,src2, 3));
	return (0);
}*/

