#include<stdio.h>

int main() { int f=13,i=1,a,g,c;
printf("Hello Welcome To Chocolates and Chilly Game Challenge\n Rules:\n1.There are a total of 13 Chocolates and 1 Chilly.\n2.User and computer can pick only 1/2/3 chocolates turn-wise.\n3.The player who is left with the Chilly at the end loses.\n4.The computer will play the first move\n\n");
//while(i<=f){printf("(_) "); i++;}printf("\n");
 f=12; printf("The computer picked 1 chocolate now 12 are left\n");
 while(f){ 
printf("Pick the no. of Chocolates You want to choose 1/2/3\n");
scanf("%d",&a); if(a!=1 && a!=2 && a!=3){printf("You can choose between 1/2/3 only\n"); continue;}else {f=f-a; 
printf("\nyou chose %d Chocolates now %d Chocolates and 1 Chilly is left for the computer to choose from\n",a,f);
c=4-a; f=f-c; printf("\nComputer picked %d chocolates and now %d Chocolates and 1 Chilly is left\n",c,f);
if(f<4){printf(" %d Chocolates left and one Chilly for You to pick.\n ",f); printf("You lose game over.........."); break;}
}}

}