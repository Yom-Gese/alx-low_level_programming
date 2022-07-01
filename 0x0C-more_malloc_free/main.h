#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * Auth: Yom-Gese 
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0B-more_malloc_free directory.
 */
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

#endif
