/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:18:27 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/18 19:49:20 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	i = 0;
	if(s==0)
		return NULL;
	char *str = (char*)malloc(ft_strlen(s)+1);
	if(!str)
		return NULL;
	while(s[i])
	{
		str[i] = (f(i,s[i]));
		i++;
	}
		str[i] = '\0';
		return str;
	
}