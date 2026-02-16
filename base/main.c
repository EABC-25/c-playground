#include <stdio.h>

void test_one();
void test_two();
void test_three();

char *str_one = "string_one";

char **test_str_arr[3];

int main (int argc, char *argv[]) {
  printf(str_one);
  return 0;
}