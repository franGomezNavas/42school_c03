/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:49:34 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/17 15:56:02 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
    char c1[6];
    char c2[10];
    unsigned int n;
    int resu;
    
    strcpy(c1, "Hola");
    strcpy(c2, "Heeeoa");
    n = 10;
    resu = ft_strncmp(c1, c2, n);
    if (resu == 0)
    {
        printf("igual\n");
    }
    else if (resu > 0)
    {
        printf("%s resultado es mayor que %s\n", c1, c2);
    }
    else 
    {
        printf("%s resultado es negativo que %s\n", c1, c2);
    }
    return (0);
}
*/
