/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:17:32 by abosch            #+#    #+#             */
/*   Updated: 2018/07/12 18:08:03 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_tuttut(char *str)
{
	write(1, str, 18);
}

void	ft_generic(void)
{
	print_tuttut("Tut tut ; Tut tut\n");
}
