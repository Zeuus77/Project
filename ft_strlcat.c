/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:47:08 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/12 19:00:17 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t  i;
	size_t j;
	i = 0;
	if (dstsize == 0)
		return(0);
	j = ft_strlen(dst);
	if(dstsize > j)
	{
		while(src[i] && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return(ft_strlen(dst) + ft_strlen(src + i));
	}
	return(dstsize + ft_strlen(src));
}

/*int main(int ac, char **av)
{
	printf("%zu\n", ft_strlcat(av[1], av[2], atoi(av[3])));
	printf("%s\n", av[1]);
	return (0);
}*/
