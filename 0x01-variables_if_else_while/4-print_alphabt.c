/* include libraries */
#include <stdio.h>
/*
 * main - print alphabet in lowercase ignoring 'e' and 'q'
 *
 * return - 0 (successful)
 */
int main(void)
{
	/* declared var_name for alphabet */
	char alphbt;
	/* for loop for alphbt */
	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
	{
		/* if statement negating 'e' and 'q' */
		if (alphbt != 'e' && alphbt != 'q')
		{
			putchar(alphbt);
		}
	}
	/* putchar for next or following line */
	putchar('\n');
	return(0);
}
