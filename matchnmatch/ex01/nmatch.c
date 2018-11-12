/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 22:16:56 by abosch            #+#    #+#             */
/*   Updated: 2018/07/15 22:26:34 by abosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
