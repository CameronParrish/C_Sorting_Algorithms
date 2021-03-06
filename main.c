/* main.c
 * Cameron Parrish - parr3147
 * CS270 Jillipalli
 * Sorting Algorithms - Assignment2
*/

// system includes
#include<stdio.h>

// user defined includes
#include"swap.h"
#include"bubble.h"
#include"insertion.h"
#include"mergesort.h"
#include"quicksort.h"
#include"selection.h"

int main(){



  int choice = 17; // to store user choice of sorting algorithm
                   // needs to be initialized to non 0 value so loop will execute on first iteration
                   // chose not to use values 1-5 so that it will use the dafault case if assignment fails on user input.

  while(choice != 0){  // loop while user wants to sort
      printf("%s" , "Please enter the number of integers you would like to input for processing.\n");
      printf("%s" , "Enter 0 to exit.\n");
      int array_size = 0;

      scanf("%d" , &array_size);

      int array[array_size];

      if(array_size > 1){
        printf("%s""%i""%s", "Please enter " , array_size , " numbers followed by enter\n");

        for(int i = 0 ; i < array_size ; i++){ // assigning values to array from console
          int j;
          scanf("%d" , &j);
          array[i] = j;
        }
      }
      else{
        break;
        //do nothing
      }

      printf("%s" , "Please select the sorting algorithm you would like to use\n");
      printf("%s" , "1. Bubble Sort\n");
      printf("%s" , "2. Insertion Sort\n");
      printf("%s" , "3. Mergesort\n");
      printf("%s" , "4. Quicksort Sort\n");
      printf("%s" , "5. Selection Sort\n");
      printf("%s" , "0. Quit Sorting\n");

      scanf("%d" , &choice); // if assignment fails choice = 17 and default case will be processed below.


      switch(choice){  // selects the sorting algorithm to be used

        case 0:
          return 0;
        case 1:
          Bubble(array , array_size);
          printf("%s" , "\nAfter Bubble Sort\n");
          break;
        case 2:
          Insertion(array , array_size);
          printf("%s" , "\nAfter Insertion Sort\n");
          break;
        case 3:
          merge_sort(array , 0 , array_size);
          printf("%s" , "\nAfter Merge Sort\n");
          break;
        case 4:
          Quicksort(array , 0 , array_size - 1);
          printf("%s" , "\nAfter Quick Sort\n");
          break;
        case 5:
          selection(array , array_size);
          printf("%s" , "\nAfter Selection Sort\n");
          break;
        default:
          printf("%s" , "That is not a valid choice, exiting the program\n");
          return 0;
      }

      int i = 0;                              // resets i each iteration
      for( i ; i<array_size ; i++ ){          // prints sorted array
        printf("%i""%s" ,  array[i] , "\n");
      }
      printf("%s" , "\n");                    // just for formatting output
  }

}
