/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezafra-r <ezafra-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:06 by zafraedu          #+#    #+#             */
/*   Updated: 2024/01/29 15:38:53 by ezafra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Libera la memoria asignada a un puntero y establece el puntero a NULL.
 *
 * Esta función libera la memoria asignada al puntero 'ptr' utilizando la
 * función 'free', y luego establece el puntero 'ptr' a NULL para evitar
 * problemas de acceso a memoria liberada.
 *
 * @param ptr   Puntero cuya memoria se va a liberar y establecer a NULL.
 */
void	ft_free(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
	ptr = NULL;
}
