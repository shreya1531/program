#include<stdio.h>
int main(){
    double a,b,ans; // Declare variables for the two numbers (a and b) and the result (ans)
    int choice; // Declare variable for the user's choice
    printf("Enter the value of a\n");
    scanf("%lf",&a); // Read first number
    printf("Enter the value of b\n");
    scanf("%lf",&b); // Read second number
    printf("1.addition 2.Subtraction 3.Multiplication 4.Division\n");
    printf("enter your choice:");
    scanf("%d",&choice); // Get user choice for the operation
    switch(choice){ // Perform action based on the user's choice
        case 1 :
            ans=a+b; // Addition
            printf("Addition of 2 num=%f",ans);
            break;
        case 2 :
            ans=a-b; // Subtraction
            printf("Subtraction of 2 num=%f",ans);
            break;
        case 3 :
            ans=a*b; // Multiplication
            printf("Multiplication of 2 num=%f",ans);
            break;
        case 4 :
            if(b==0){ // Check for division by zero
                printf("cannot divide by 0");
            }else{
                ans=a/b; // Division
                printf("Division of 2 num=%f",ans);
            }
            break;
        default:
            printf("enter the correct choice"); // Invalid choice
    }
}




#include<stdio.h>
int main(){
    int a, odd = 1; // Declare variable a and initialize odd number to 1
    printf("Enter the value of a\n");
    scanf("%d",&a); // Read the number of odd numbers to print
    for(int i = 1; i <= a; i++){ // Loop through and print odd numbers
        printf("%d\t", odd); // Print odd number
        odd += 2; // Move to the next odd number
    }
}



#include<stdio.h>
int main(){
    int a, odd = 1; // Declare variable a and initialize odd to 1
    printf("Enter the value of a\n");
    scanf("%d",&a); // Read the number to determine how many odd numbers to print
    if(a % 2 != 0){ // If 'a' is odd
        for(int i = 1; i <= a; i++){ // Loop and print odd numbers
            printf("%d\t", odd);
            odd += 2; // Move to the next odd number
        }
    }else{ // If 'a' is even
        for(int i = 1; i <= a - 1; i++){ // Print a-1 odd numbers
            printf("%d\t", odd);
            odd += 2;
        }
    }
}



I have written three out of the four logics on my own, but I was unable to understand the fourth one fully. Therefore, I haven't written it yet. I will search and learn that logic on my own.
