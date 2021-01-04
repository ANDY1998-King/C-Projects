#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
float principal, rate, time, emi,interest,total,month;
int choice;

while(1)
{
        printf("\n1.Details\n");
        printf("2.Exit\n");

        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

switch(choice)
{


case 1:
        printf("\nEnter Loan Amount: ");
        scanf("%f",&principal);

        printf("\nEnter Loan Interest: ");
        scanf("%f",&rate);

        printf("\nEnter Loan Time In Year: ");
        scanf("%f",&time);

        interest= (principal*rate*time)/100;
        rate=rate/(12*100); /*one month interest*/
        time=time*12; /*one month period*/
        month=interest/time;

        emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);

        total = principal+interest;

        printf("\n\nMonthly EMI Is = %f\n",emi);
        printf("\nTotal Loan Interest Is = %f\n",interest);
        printf("\nMonthly Loan Interest Is = %f",month);
        printf("\n\nTotal Loan Amount Is = %f\n",total);
break;

case 2:exit(0);
       break;

default:
        printf("Invalid Choice!");
}
_getch();
}
}
