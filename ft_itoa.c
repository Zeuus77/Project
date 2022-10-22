/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:43:27 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/22 23:20:47 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int digit_len(long len) {
	int ret = 0;
	if (len < 0) {
		len *= -1;
		ret++;
	}
	while (len > 0) 
	{
		ret++;
		len /= 10;
	}
	return ret;
}

char *ft_itoa(int n)
{
	long l = n;
	int len = digit_len(l) - 1 ;
	if (!n)
		return ft_strdup("0");
	char* ret = (char*)malloc(sizeof(char) * (len + 2));
	if (!ret)
		return NULL;
	ret[len + 1] = '\0';
	if (l < 0)
	{
		ret[0] = '-';
		l *= -1;	
	}
	while (l != 0)
	{
		ret[len] = (l % 10) + '0';
		len--;
		l /= 10;
	}
	return ret ;
}

//int main(int argc, char const *argv[])
//{
//	char* lolz = ft_itoa(1234);
//	printf("ret: %s\n", lolz);
//	return 0;
//}
