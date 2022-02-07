// Shamelessly inspired from cs252/lab0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialize_array ();
void copy_string ();
void bubble_sort ();

/*
 * Main simply calls each of the tests in turn.
 */
int main (int argc, char *argv[])
{

  initialize_array ();
  
  char string[] = "This is a string that I will copy.";
  copy_string (string);
  
  bubble_sort ();

  return (0);
}

/*
 * This function allocates and initializes the array numbers[] to
 * contain the digits 1-4 and 0.
 */
void initialize_array ()
{
  int *numbers = NULL, i = 0;

  for (i = 0; i < 4; i++) {
    numbers[i] = i + 1;
  }
  numbers[4] = 0;

}

/*
 * This function copies a C string into an allocated buffer.
 */
void copy_string (char *string)
{
  char *copy;
  int i;
  int max_len = 15;
  
  copy = malloc (max_len);
  for (i = 0; i < strlen (string); i++) {
    copy[i] = string[i];
  }
  
  printf ("Copied string: %s\n", copy);
  
}

/*
 * This function takes an unsorted array of integers and
 * bubble sorts it.
 */
void bubble_sort ()
{
#define ARRAYSIZE 12
  int array[ARRAYSIZE] = { 5, 7, 99, 12, 42, 31, 1, 45, 9, 21, 22, 23 };
  int i, j, temp;
  
  for (i = ARRAYSIZE - 2; i > 0; i--) {
    for (j = i; j < ARRAYSIZE - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      } else {
        break;
      }
    }
  }

  printf("Sorted array:\t");
  for (int i =0; i<ARRAYSIZE-1; i++){
    printf("%d, ", array[i]);
  }
  printf("%d\n", array[ARRAYSIZE-1]);
}
