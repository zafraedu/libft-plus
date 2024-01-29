/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:02:51 by zafraedu          #+#    #+#             */
/*   Updated: 2024/01/29 15:39:02 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Libera la memoria asignada para un array de cadenas de caracteres y el propio
 * array.
 *
 * Esta función libera la memoria asignada para cada cadena de caracteres en el
 * array 'ptr', y luego libera la memoria utilizada por el propio array 'ptr'.
 * Finalmente, establece el puntero 'ptr' a NULL para evitar problemas de acceso
 * a memoria liberada.
 *
 * @param ptr Puntero al array de cadenas de caracteres.
 */
void	ft_free2d(char **ptr)
{
	int	i;

	if (!ptr)
		return ;
	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	ptr = NULL;
}
