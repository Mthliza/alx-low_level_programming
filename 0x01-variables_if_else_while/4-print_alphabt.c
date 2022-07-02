#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Prints some letters of alphabet
 *Return: Always (Success)
 */

int main(void)

{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar(10);
}
return (0);
}

