#include<stdio.h>
int main(){
    int num,Rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    Rem = (num%2);
    switch (Rem)
    {
    case 0:
        printf("%d is an even number.\n",num);
        break;
    case 1:
        printf("%d is an odd number.\n",num);
    default:
        break;
    }




    return 0;
}