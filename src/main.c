#include<stdio.h> 

double getMax(double a, double b){
 return  (a > b) ? a: b ; 
}


double getAverage(double a , double b){
 return (a + b)/2.0; 
}

void main (void)
{
  printf("%0.3f", getMax(12,4)); 
  printf("%0.3f", getAverage(12,4)); 
  
}
