#include<stdio.h>
    int main(){
        float Basic_Salary,TA,DA,HRA,Tax,PF,Gross_Salary,Net_Salary;
        printf("Enter Your Basic Salary:-");
        scanf("%f",&Basic_Salary);
        TA =0.05 * Basic_Salary ;
        DA = 0.64 * Basic_Salary ;
        HRA = 0.12 * Basic_Salary ;
        Gross_Salary = Basic_Salary + TA + DA + HRA ; 
        printf("Your Gross Salary is %f\n",Gross_Salary);
        Tax = 0.03 * Gross_Salary ;
        PF = 0.12 * Gross_Salary ;
        Net_Salary = Gross_Salary - Tax - PF ;
        printf("Your Net Salary is %f\n",Net_Salary);
        return 0;
    }