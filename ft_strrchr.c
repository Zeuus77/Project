/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 01:58:35 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/21 21:21:55 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
#include<stdio.h>

char* ft_strrchr( const char *s,int c)
{
    int i = ft_strlen(s);
    while(i >= 0 )
    {
        if(s[i] == c)
            return((char*)&s[i]);
        i--;
    }
    return NULL;
}

/*int main()
{
    char* i = "youssef";
    printf("%s",ft_strrchr(i,'s'));
    return(0);
}*/
