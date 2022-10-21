/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:34:02 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/21 22:10:43 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
static int f_count(const char *s ,char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] == c && s[i++])
		i++;
		if(s[i] != c && s[i])
			count++;
		while(s[i] && s[i] != c)
		i++;
		}	
	return (count);
}
static size_t f_len(const char *s,char c)
{
	size_t i;
	i = 0;
	while(s[i] && s[i] != c)
	i++;
	return(i);	
}
char **ft_split(char const *s, char c)
{
	char **str;
	int i;
	int k;
	i = 0;
	k = 0;
	while(!s)
	return(NULL);
	str = (char **)malloc(sizeof(char *) *(f_count(s,c)+1));
	if(!str)
		return(NULL);
	while(s[i])
	{
		while(s[i] == c && s[i])
		i++;
		if(s[i] != '\0')
		{
			str[k] = ft_substr(s + i,0,f_len(s + i,c));
			k++;
			while(s[i] && s[i] != c)
			i++;
		}
	}
	str[k] = NULL;
	return(str);
}
/*int main()
{
	int i;
	i = 0;
	char *str = "youssef dshds smar";
	char **str2 = ft_split(str,' ');
	while(str2[i])
	{
		printf("%s\n",str2[i]);
		i++;
	}
}*/