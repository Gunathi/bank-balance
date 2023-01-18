#include<stdio.h>

void main(){
    char name[80];
    float balance,bonus1,bonus2;
    char gender;

    printf("Enter name, gender(F/M) and account balance respectively. \n");
    scanf("%s \n %c\n %f",name,&gender,&balance);

    bonus1 = balance*0.02;

    if(gender == 'F' && balance > 5000.00)
    {
        bonus2 = balance*0.05;
        balance += bonus1 + bonus2;
     }
     else
        balance += bonus1;

     printf("\nNew balance is %.2f\n",balance);

}
