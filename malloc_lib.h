#ifndef CUSTOM_MALLOC
# define CUSTOM_MALLOC
# include <stdio.h>
# include <stdlib.h>
# include <dlfcn.h>
void	*ft_malloc(size_t size);
# define malloc(X) ft_malloc(X)
# ifndef MALLOC_FAIL
#  define MALLOC_FAIL 0
# endif
#endif
