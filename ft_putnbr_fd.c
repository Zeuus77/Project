/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:30:10 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/21 23:35:51 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_putnbr_fd(int n, int fd)
{
	long int i;
	i = (long int)n;
	if(i < 0)
	{
		i *= -1;
		ft_putchar_fd('-',fd);
	}
	if(i>9)
	{
		ft_putnbr_fd(i / 10 ,fd);
		ft_putnbr_fd(i % 10,fd);
	}
	if(i >= 0 && i <= 9)
	{
		ft_putchar_fd(i + 48,fd);
	}
}