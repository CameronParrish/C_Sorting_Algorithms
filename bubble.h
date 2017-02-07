//Bubble sort:

typedef int bool;
# define true 1
# define false 0

   void Bubble(int array[], int array_size) {
   int temp;
   int i = 0,j = 0;

   bool swapped = false;

   // loop through all numbers
   for(i; i < array_size-1; i++) {
      swapped = false;

      // loop through numbers falling ahead
      j = 0;
      for(j; j < array_size-1-i; j++) {
         // check if next number is lesser than current no
         //   swap the numbers.
         //  (Bubble up the highest number)

         if(array[j] > array[j+1]) {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;

            swapped = true;
         }

      }

      // if no number was swapped that means
      //   array is sorted now, break the loop.
      if(!swapped) {
         break;
      }
   }

  }
