/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:47:08 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/19 01:01:37 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t  i;
	size_t j;
	size_t res;
	i = 0;
	if(!dst && !dstsize)
	return(0);
	j = ft_strlen(dst);
	if(j < dstsize)
		res = j + ft_strlen(src);
	else
	{
		res = ft_strlen(src) + dstsize;
		return(res);
	}
	while (src[i] != 0 && j < (dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return(res);
}

/*int main(int ac, char **av)
{
	printf("%zu\n", ft_strlcat(av[1], av[2], atoi(av[3])));
	printf("%s\n", av[1]);
	return (0);
}*/
