#include <stdio.h>
#define Eps 0.0000001



double square_root(int num) { 
  double x1 = (num * 1.0) / 2; 
  double x2= (x1 + (num / x1)) / 2; 
  while((x1 - x2)*(x1-x2) >= Eps*Eps) { 
    x1 = x2; 
    x2 = (x1 + (num / x1)) / 2; 
  } 
  return x2; 
} 

int main(){
    double num, x1, x2;
        
        printf("Enter your number: \n");
        scanf("%lf", &num);

        printf("Your sqrt  is: %lf\n", square_root(num));

    
}