/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:46:54 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/28 17:15:45 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ((char *)malloc(ft_strlen(s1) + 1));
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
