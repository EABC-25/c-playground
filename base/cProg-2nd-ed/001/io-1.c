#include <stdio.h>

int main () {
  int b;
  int c;

  printf("Press any key to get it's ASCII value.");
  
  while((c = getchar()) != EOF) {
    
    if(c == '\n' && b == '\n') {
      printf("Enter key's ASCII equivalent is: %d\n", c);
      continue;
    }
    if((b = c) == '\n') {
      continue;
    }
    if(c == ' ') {
      printf("Space key's ASCII equivalent is: %d\n", c);
      continue;
    }
    if(c == '\t') {
      printf("Tab key's ASCII equivalent is: %d\n", c);
      continue;
    }
    printf("Input value's ASCII equivalent is: %d\n", c);
  }
  return 0;
}