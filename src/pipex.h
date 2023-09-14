/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximelavail <maximelavail@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:51:26 by maximelavai       #+#    #+#             */
/*   Updated: 2023/09/06 18:51:38 by maximelavai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>  
# include <stdlib.h>

int		open_file(char *file, int index_of_fd);
char	*ft_getenv(char *name, char **env);
char	*ft_getpath(char *cmd, char **env);
void	exec(char *cmd, char **env);
void	ft_free(char **tab);

#endif