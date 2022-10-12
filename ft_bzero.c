/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:16:18 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/05 18:00:14 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<string.h>
void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *b = (char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = '\0';
		i++;
		}

		
}
/*int main()
{
char s[3] = "111";
int i = 0;
ft_bzero(s,3);
while ( i < 3)
printf("%d",s[i++]);

}*/