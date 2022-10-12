/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:10:12 by youel-id          #+#    #+#             */
/*   Updated: 2022/10/06 02:34:36 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
	 size_t i;
	 i = 0;
	 unsigned char *str1;
	 unsigned char *str2;
	 str1 = (unsigned char*)s1;
	 str2 = (unsigned char*)s2;
	 
	 while(i < n && (str1[i] || str2[i]))
	 {
		 if (str1[i] !=str2[i])
		 	return(str1[i] - str2[i]);
			 i++;
			 
	 }
	return(0);
	 
 }
