
#include <stdio.h>

int linearSearch(int arr[], int size, int value) 
{
  for (int i = 0; i < size; i++) 
   if (arr[i] == value) 
    return i; 
  return -1;
}


double getMax(double a, double b){
 return  (a > b) ? a: b ; 
}


double getAverage(double a , double b){
 return (a + b)/2.0; 
}

void main (void)
{
  int arr[5]={1,2,3,4,5};
  int searchValue = 4;
  int position = linearSearch(arr, 5, searchValue);

  if (position != -1) 
    printf("Value %d found at position %d\n", searchValue, position);
  else 
    printf("Value %d not found in the array\n", searchValue);
  printf("%0.3f", getMax(12,4)); 
  printf("%0.3f", getAverage(12,4)); 
  printf("End of programm"); 
  
}
