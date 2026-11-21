# 0x0B. C - More malloc, free

## 0-malloc_checked.c
Function `malloc_checked` allocates memory using `malloc`.
If `malloc` fails, the process terminates with exit status 98.
Prototype: `void *malloc_checked(unsigned int b);`

## 1-string_nconcat.c
Function `string_nconcat` concatenates `s1` with the first `n` bytes of `s2`
into newly allocated memory. Returns `NULL` on failure.
Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`

## 2-calloc.c
Function `_calloc` allocates memory for an array of `nmemb` elements of `size` bytes
each and sets it to zero. Returns `NULL` if `nmemb` or `size` is 0, or if `malloc` fails.
Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
