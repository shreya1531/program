#include<stdio.h>
int main(){
double a,b,ans;
int choice;
printf("Enter the value of a\n");
scanf("%lf",&a);
printf("Enter the value of b\n");
scanf("%lf",&b);
printf("1.addition 2.Subtraction 3.Multiplication 4.Division\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1 :
ans=a+b;
printf("Addition of 2 num=%f",ans);
break;
case 2 :
ans=a-b;
printf("Subtraction of 2 num=%f",ans);
break;
case 3 :
ans=a*b;
printf("Multiplication of 2 num=%f",ans);
break;
case 4 :
if(b==0){
    printf("cannot devide by 0");
}else{
ans=a/b;
printf("Division of 2 num=%f",ans);
}break;
default:
printf("enter the correct choice");
}}









