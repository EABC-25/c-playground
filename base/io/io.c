#include <stdio.h>

int main () {
  int b;
  int c;

  printf("Press any key to get it's ASCII value.");
  
  while(c != EOF) {
    
    if(c == 10 && b == 10) {
      printf("Enter key's ASCII equivalent is: %d\n", c);
      continue;
    }
    if((b = c) == 10) {
      continue;
    }
    // if(c == 32) {
    //   printf("Space key's ASCII equivalent is: %d\n", c);
    //   continue;
    // }
    printf("Input value's ASCII equivalent is: %d\n", c);
  }
  return 0;
}