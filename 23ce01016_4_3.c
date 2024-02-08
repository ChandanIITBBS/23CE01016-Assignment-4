#include<stdio.h>
int main(){
    int credit_score, current_balance;
    float interest;
    printf("Enter your credit score: ");
    scanf("%d",&credit_score);
    printf("Enter current balance: ");
    scanf("%d",&current_balance);

    if (credit_score<600){
        interest=((float)current_balance*15)/100;
        printf("Current balance: %d, Credit score: %d, Interest: %.2f",current_balance,credit_score,interest);
    }
    else if(credit_score>=600 && credit_score<=750){
        interest=((float)current_balance*12)/100;
        printf("Current balance: %d, Credit score: %d, Interest: %.2f",current_balance,credit_score,interest);
    }
    else{
        interest=((float)current_balance*10)/100;
        printf("Current balance: %d, Credit score: %d, Interest: %.2f",current_balance,credit_score,interest);

    }
       
    
    
    
    return 0;
}