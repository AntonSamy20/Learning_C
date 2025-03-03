#include<stdio.h>
int main(){
    int n1,n2, result;
    printf("Enter the first digit: ");
    scanf("%d",&n1);
    printf("Enter the second digit: ");
    scanf("%d",&n2);
    result = n1|n2;
    printf("The Result of %d / %d = %d", n1, n2, result);
}