/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:08:25 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/05 17:59:00 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void* b, int c, size_t len)
{
	size_t i = 0;
	char* d = (char*)b;
	while(i < len)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
