/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:10:18 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/17 12:05:00 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
	
}
#include <fcntl.h>
/*int	main()
{
	int fd;
	fd = open("test.txt", O_CREAT | O_RDWR);
	char c = 'c';
	ft_putchar_fd(c, fd);
	return 0;
}*/