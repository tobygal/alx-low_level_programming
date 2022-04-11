#include <stdio.h>

/**
 * main - entry point
 */

void main(void)
{
	printf("%s\n", &__FILE__[get_file_name_offse(__FILE__)]);
}
