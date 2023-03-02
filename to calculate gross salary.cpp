//to calculate gross salary of employee
#include<stdio.h>
int main()
{
    float basic,hra,da,gross_salary;
    //taking input from user
    printf("enter the salary :");
    scanf("%f" ,&basic);
    
    //calculating da and hra amount
    if(basic <= 10000){
        hra=(basic*20)/100;
        da=(basic*80)/100;
    }
    else if(basic>=10001 && basic<=20000){
        hra=(basic*25)/100;
        da=(basic*90)/100;
    }
    else if(basic >= 20001){
        hra=(basic*30)/100;
        da=(basic*95)/100;
    }
    //calculating gross salary
    gross_salary=basic+hra+da;
    //displaying output
    printf("gross salary of employee : %.2f",gross_salary);
    return 0;
}
