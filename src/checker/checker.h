#ifndef CHECKER_H
# define CHECKER_H

# include "../../includes/push_swap.h"

# define BUFFER_SIZE 100

char	*get_next_line(int fd);
size_t	ft_strlenn(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_magical_stuff(char const *storage);

#endif
