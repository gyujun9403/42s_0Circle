/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeon <gyeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:29:42 by gyeon             #+#    #+#             */
/*   Updated: 2021/05/07 18:36:52 by gyeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

void *memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *s);
int ft_isdigit(int c);
void *ft_calloc(size_t count, size_t size);

#endif
