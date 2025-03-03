#include<stdio.h>
int main(){
    int n1, result;
    printf("Enter the digit: ");
    scanf("%d",&n1);
    result = ~n1;
    printf("The Result of ~ %d = %d" ,n1 ,result);
}