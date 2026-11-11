#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements of the array
 *
 * Return: void
 */
void
cat > test-rev_array.c <<'EOF'
#include "main.h"
#include <stdio.h>

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int b[] = {1, 2, 3, 4};
	int i;

	reverse_array(a, sizeof(a) / sizeof(int));
	for (i = 0; i < 13; i++)
		printf("%d%s", a[i], i < 12 ? ", " : "\n");
	reverse_array(b, 4);
	for (i = 0; i < 4; i++)
		printf("%d%s", b[i], i < 3 ? ", " : "\n");
	return (0);
}
