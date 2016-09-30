#include <stdio.h>

main()
{
	int c, blankBefore;
	
	blankBefore = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
			if(blankBefore == 0) {
				putchar(c);
				blankBefore = 1;
			}
		}
		
		if(c != ' '){
			putchar(c);
			blankBefore = 0;
		}
    }
}
