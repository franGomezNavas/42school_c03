/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:43:10 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/19 09:30:15 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <unistd.h>
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
int main(void)
{
    char    ejemplo[20];
    char    ejemplo2[20];
    int i;
    unsigned int k;
    
    strcpy(ejemplo, "hola ");
    strcpy(ejemplo2, "Mundo");
    k = 3;
    printf("la cadena separada es %s y %s\n", ejemplo, ejemplo2);
    ft_strncat(ejemplo, ejemplo2, k);
    printf("la cadena junta es %s\n", ejemplo, ejemplo2);
    return (0);
}
*/
