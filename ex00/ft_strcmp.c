/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:20:46 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/19 15:15:58 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
    char c1[6];
    char c2[6];
    int resu;

    strcpy(c1, "Hola");
    strcpy(c2, "Hlwwa");
    resu = ft_strcmp(c1, c2);
    if (resu == 0)
    {
        printf("resultado es igual\n");
    }
    else if (resu > 0)
    {
        printf("%d resultado es positivo\n", resu);
    }
    else 
    {
        printf("%d resultado es negativo\n", resu);
    }
    return (0);
}
*/
