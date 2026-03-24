/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 08:31:01 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/18 17:48:54 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
    char    ejemplo[100];
    char    ejemplo2[100];

    strcpy(ejemplo, "Hola ");
    strcpy(ejemplo2, "Mundo");
    ft_strcat(ejemplo, ejemplo2);
    printf("%s\n", ejemplo2, ejemplo);
    return (0);
}
*/
