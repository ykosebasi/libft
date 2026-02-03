/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:48:38 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/27 16:41:42 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>

int main()
{
	int fd;
	fd = open("deneme.txt", O_CREAT | O_WRONLY, 0777);
	ft_putchar_fd( 'a', fd);
	close(fd);
}

