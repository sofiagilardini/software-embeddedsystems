#include <stdio.h>


int main() {
  
  //define amps and length
  int amps[8];
  int length;
  length = sizeof(amps)/sizeof(int);
  // debug printf("The length is %i\n\n", length);
  

  //begin number counters
  int num = 0;
  int current = 0;
  int sum = 0; 
  double average = 0;


  //input integers into array

  for (int i = 0; i < length; i++ ) {
    amps[i] = num;
    sum += num;
    num ++;
 //debug printf("The position %i number in the array is is %i\n", i, amps[i]);
 //debug printf("The sum is %i\n\n", sum);
   }

//display the numbers
 for (int i = 0; i < length; i++ ) {
    printf("%i\n", amps[i]);
 }  

// calcualte the average
printf("\nThe final sum is %i\n", sum);
printf("The length is %i\n\n", length);

average = double(sum) / double(length);
  printf("The average is %f\n", average);

}
