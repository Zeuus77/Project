/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:23:58 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/08 20:04:51 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char* ft_strchr(const char *s, int c)
{
	int i = 0;
    if (c == '\0') 
	{
	 return ((char*)(s + i) + ft_strlen(s));
	}
	while (s[i]) 
	{
		if (s[i] == c)
		return (char*)(s + i);
		i++;
	}
	return (NULL);

}

/*int main()
{
	char i[] = "youssef";
	printf("%s", ft_strchr(i, '\0'));
	return (0);
}*/

