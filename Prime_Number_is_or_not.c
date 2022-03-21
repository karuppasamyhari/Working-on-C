#include<stdio.h>
int main()
{
 int input1,flag=0;
 printf("Enter your input\n");
 scanf("%d",&input1);
 if(input1==0||input1==1){
     printf("Give your input number greater than 1 or 0");
 }
 if(input1>1){
    for(int a=1;a<=input1;a++){
         if(input1%a==0){
             flag=flag+1;
         }
     }
    if(flag==2){
        printf("Given number is prime");
    }
    else{
        printf("Given number is not prime");
    }
 }
 return 0;
}
