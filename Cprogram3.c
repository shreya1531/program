#include<stdio.h>
int main(){
int a,odd=1;
printf("Enter the value of a\n");
scanf("%d",&a);
if(a%2!=0){
for(int i=1;i<=a;i++){
    printf("%d\t",odd);
        odd+=2;
    }}else{
        for(int i=1;i<=a-1;i++){
    printf("%d\t",odd);
        odd+=2;
     }
}}
