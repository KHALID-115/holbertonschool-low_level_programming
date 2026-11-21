# 0x0B. C - More malloc, free

## 0-malloc_checked.c
Function `malloc_checked` allocates memory using `malloc`.
If `malloc` fails, the process terminates with exit status 98.
Prototype: `void *malloc_checked(unsigned int b);`

## 1-string_nconcat.c
Function `string_nconcat` concatenates `s1` with the first `n` bytes of `s2`
into newly allocated memory. Returns `NULL` on failure.
Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
