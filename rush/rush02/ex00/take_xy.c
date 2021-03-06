/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_xy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:21:17 by augay             #+#    #+#             */
/*   Updated: 2018/07/22 15:21:18 by augay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	take_xy(int *x, int *y, char *str)
{
	int cnt;
	int cntx;
	int cnty;

	cntx = 1;
	while (str[cntx - 1] != '\n' && str[cntx - 1] != '\0')
		cntx++;
	*x = cntx - 1;
	cnt = -1;
	cnty = 1;
	while (str[++cnt] != '\0')
		if (str[cnt] == '\n')
			cnty++;
	*y = cnty - 1;
}
