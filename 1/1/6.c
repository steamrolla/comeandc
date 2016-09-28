#include <stdio.h>

main(){  
  printf("Enter a character: ");
  char c = getchar();
  printf("%c != EOF\n", c);
  printf("Evaluates to: %d", c != EOF);
}