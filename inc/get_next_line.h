#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/*---------------------------  Macros  ---------------------------------------*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*---------------------------  Funciones  ------------------------------------*/
char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char *s1, char *s2);

#endif
