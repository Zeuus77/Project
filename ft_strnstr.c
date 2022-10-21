/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:34:52 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/21 21:56:10 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	i = 0;
	j = 0;
	if (!haystack && !len)
		return 0;
	if(*needle == 0)
	{
		return((char*)haystack);
	}
	while(haystack[i] && i < len )
	{
		while(needle[j] && haystack[i + j] == needle[j] && i + j < len )
		{	
			j++;
				if (j == ft_strlen(needle))
				return ((char *)&haystack[i]);			
		}
		i++;
	}
	return (NULL);
		
}
//int main()
//{
//	printf("%s",ft_strnstr("haystack","a",-1));
//}