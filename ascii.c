#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

/*
 * This program takes in an array of integer ascii values and converts them
 * into their corresponding characters. These characters are stored in an array
 * and printed to ensure the result is correct.
 */

char * convert_ascii_values(int * int_arr, int size);

int main(void) {

  int int_arr[] = {89, 111, 117, 32, 100, 105, 100, 32, 105, 116, 33};

  int size = sizeof(int_arr) / sizeof(int_arr[0]);

  char * char_arr = convert_ascii_values(int_arr, size);

  //print the char_arr
  for (char *c = char_arr; *c; c++) {
    printf("%c", *c);
  }
  printf("\n");

  return 0;
}


char * convert_ascii_values(int * int_arr, int size) {

  char * char_arr = malloc(sizeof(char) * size);

  for (int i = 1; i < size; i++) {
    char_arr[i] = (char) int_arr[i];
  }

  return char_arr;

} //convert_ascii_values
