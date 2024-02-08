#include<stdio.h>
#include<math.h>
int isArmstrong(int a);

int main (){
int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        if(isArmstrong(n)){
            printf("Yes, %d is a Armstrong number.",n);
            }
        else {
            printf("No, %d is not an Armstrong number.",n);
            }
    }
    else{
        printf("Incorrect Input.");
    }
    return 0;
    }
    
    
int isArmstrong(int a){
int temp2=a;
int sum=0;
    
for (int i = 1; i<=3; i++){
    int rem=temp2%10;
    int cube=pow(rem,3);
    sum+=cube;
    temp2/=10;
    }

if (sum==a){
    return 1;
    }
       
return 0;
}