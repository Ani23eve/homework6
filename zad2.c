#include <stdio.h>

#define COUNT 7


double powerNum(double num, int exp);
int factoriel(int num);
double mySin(int degree);


int main(){

     int deg;
    scanf ("%d", &deg);
    printf("%lf",mySin(deg));
    return 0;

    return 0;
}



double powerNum(double num, int exp){
     if(exp < 0) {
        if(num == 0)
            fprintf(stderr,"Error! Base = 0!") ;  
            return 0; 
        return 1 / (num * powerNum(num, (-exp) - 1));
    }
    if(exp == 0)
        return 1;
    if(exp == 1)
        return num;
    return num * powerNum(num, exp - 1);
}


int factoriel(int num){
    if(num==0){
        return 1;
    }
    
    return    factoriel(num-1)*num;
    
}

double mySin(int degree){
    double pi= 3.14159;
    double rad = degree * pi / 180;
    double sin = 0;

    int i;
    for(i = 0; i < COUNT; i++) { 
        sin += powerNum(-1, i) * powerNum(rad, 2 * i + 1) / factoriel(2 * i + 1);
    }
    return sin;
    
    
   
}