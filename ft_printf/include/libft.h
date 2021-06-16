/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:28:48 by gbethani          #+#    #+#             */
/*   Updated: 2021/06/16 20:14:42 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_isdigit (int c);
int		ft_tolower(int c);
char	*ft_strdup(const char *s);
char *ft_itoa(int n);
void ft_putchar_fd(char c, int fd);
#endif
