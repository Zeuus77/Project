/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:29:25 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/24 21:40:17 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include<unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int main()
{
	int fd;
	
	fd = open("test1.txt", O_CREAT | O_RDWR);
	char str[] = "charafchdidjesus11";
	char str2[] = "charafchdidjesus111";
	ft_putendl_fd(str,fd);
	ft_putendl_fd(str2,fd);
	close (fd);
	
}*/