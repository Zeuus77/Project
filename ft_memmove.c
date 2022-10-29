/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:25:03 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/29 18:40:03 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = len;
	s = src;
	d = dst;
	if (s == NULL && d == NULL)
		return (d);
	if (s > d)
		ft_memcpy(d, s, len);
	if (s < d)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (d);
}
/*int main()
{
	char src[]="abcde";
	char src2[]="abcde";
	printf("%s\n",ft_memmove(src+2 ,src , 3));
	printf("%s\n",memmove(src2 +2,src2, 3));
	return (0);
}*/
