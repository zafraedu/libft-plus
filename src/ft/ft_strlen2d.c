/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:28 by ezafra-r          #+#    #+#             */
/*   Updated: 2024/01/29 13:04:30 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Calcula la longitud de un array de elementos.
 *
 * Esta función recibe un array de elementos 'arr' y devuelve la cantidad
 * de elementos en el array, excluyendo el carácter nulo ('\0') al final.
 *
 * @param arr  El array de elementos cuya longitud se desea calcular.
 * @return     La cantidad de elementos en el array `arr`.
 */
size_t	ft_strlen2d(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
