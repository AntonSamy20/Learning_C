#include<stdio.h>
int main(){
    int num ,pos;
    printf("Enter a num: ");
    scanf("%d",&num);
    printf("Enter the pos: ");
    scanf("%d",&pos);
    int bt = pos - 1;
    int clr  = (num & ~(1<<bt));
    int sett = (num | (1<<bt));
    int togg = (num ^ (1<<bt));
    int rd = (num & (1<<bt));
    printf("The clear of the %d pos in the %d = %d\n",pos,num,clr);
    printf("The set of the %d pos in the %d = %d\n",pos,num,sett);
    printf("The toggle of the %d pos in the %d = %d\n",pos,num,togg);
    printf("The show of the %d pos in the %d = %d",pos,num,rd);

}