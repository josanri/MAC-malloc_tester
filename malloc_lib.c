#include "malloc_lib.h"

void *ft_malloc(size_t size) {
	static int counter = 0;
	static void *(*real_malloc)(size_t) = NULL;

	if (real_malloc == NULL)
		real_malloc = dlsym(RTLD_NEXT, "malloc");
	if (counter++ == MALLOC_FAIL)
		return (NULL);
	else
		return (real_malloc(size));
}
