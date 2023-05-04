#include <stdio.h>

int main() {
   int n, i;
   float arr[100];

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d numbers:\n", n);
   for(i = 0; i < n; ++i) {
      scanf("%f", &arr[i]);
   }

   // Assume the first number to be the largest
   float max = arr[0];

   // Check for the largest number in the array
   for(i = 1; i < n; ++i) {
      if(arr[i] > max) {
         max = arr[i];
      }
   }

   printf("The largest number is %.2f", max);
   return 0;
