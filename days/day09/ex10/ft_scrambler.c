/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:58:13 by abosch            #+#    #+#             */
/*   Updated: 2018/07/13 16:12:17 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmpa;
	int tmpb;
	int tmpc;
	int tmpd;

	tmpa = ***a;
	tmpb = *b;
	tmpc = *******c;
	tmpd = ****d;
	***a = tmpb;
	*b = tmpd;
	*******c = tmpa;
	****d = tmpc;
}
