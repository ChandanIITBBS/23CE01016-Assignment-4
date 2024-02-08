#include<stdio.h>
int main(){
    float num1,num2,ans=0;
    char opt;
    printf("Enter 1st number: ");
    scanf("%f",&num1);
    printf("Enter 2nf number: ");
    scanf("%f",&num2);
    printf("Enter the operator (+,-,*,/): ");
    scanf("%s",&opt);
    
    switch (opt)
    {
    case '+' :
        ans=(num1 + num2);
        printf("%f",ans);
        break;
    
    case '-' :
        ans=(num1-num2);
        printf("%f",ans);
        break;
    
    case '*' :
        ans=(num1*num2);
        printf("%f",ans);
        break;
    
    case '/' :
        ans=(num1/num2);
        printf("%f",ans);
        break;
    
    fefault:
        printf("Invalid output.");
        break;
    }
    
  
    return 0;
}