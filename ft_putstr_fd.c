/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:20:48 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/17 12:08:48 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;
	if(s)
	while(s[i])
	{
	write(fd,&s[i],1);
	i++;
	}
	
	
	
}
/*int main()
{
	int fd;
	fd = open("test12.txt", O_CREAT | O_RDWR);
	char str[] = "charafchdidjesus";
	ft_putstr_fd(str,fd);
	return 0;
	
}*/