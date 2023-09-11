#include <stdio.h>


/**
*main - Entry point
*Return:Always 0 (success)
*/

int main(void)

{
int lowCase = 'a';
while (lowCase <= 'z')
if (lowCase == 'e' || lowCase == 'q')
{
lowCase += 1;
}

else
{
putchar (lowCase);
lowCase ++
}
}
putchar('\n');
Return (0);
}

