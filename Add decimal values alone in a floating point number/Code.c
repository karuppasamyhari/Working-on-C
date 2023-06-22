/*
First_Number = 12.56 
Second_Number = 34.57
Decimal values of First_Number = 0.56
Decimal values of Second_Number = 0.57
Result = 0.56 + 0.57 = 1.13
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    double number1;
    double number2;
    int  copy1;
    int  copy2;
    double result;
    double result1;
    double result2;
    scanf("%lf %lf",&number1,&number2);
    copy1 = (number1 * 100) / 100;
    copy2 = (number2 * 100) / 100;
    result1 = number1 - copy1;
    result2 = number2 - copy2;
    result = result1 + result2;
    printf("%.2lf + %.2lf = %.2lf",result1,result2,result);
    return EXIT_SUCCESS;
}
