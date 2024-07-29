/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:17:12 by rafaefer          #+#    #+#             */
/*   Updated: 2024/07/17 10:17:12 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *txt);
char	*ft_get_line(char *txt);
char	*ft_create_txt(char *txt);

// Utility functions
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strdup(const char *s1);

#endif
