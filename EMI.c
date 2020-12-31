#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
float principal, rate, time, emi,interest,total,month;




    printf("\nEnter Amount: ");
        scanf("%f",&principal);

        printf("\nEnter Interest: ");
        scanf("%f",&rate);

        printf("\nEnter Time In Year: ");
        scanf("%f",&time);

        interest= (principal*rate*time)/100;
        rate=rate/(12*100); /*one month interest*/
        time=time*12; /*one month period*/
        month=interest/time;

        emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);

        total = principal+interest;

        printf("\nMonthly EMI Is = %f\n\n",emi);
        printf("\nTotal Interest Is = %f\n",interest);
        printf("\nMonthly Interest Is = %f",month);
        printf("\n\nTotal Amount Is = %f\n",total);

_getch();
}

