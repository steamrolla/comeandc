#include <stdio.h>

main()
{
	int c;
	
    while ((c = getchar()) != EOF) {
		if (c == '\b')
			printf("\\b"); 
		else if (c == '\\\\')
			printf("\\");
		else if (c == '\t')
			printf("\\t");
		else
			printf("%c", c);
    }
}
