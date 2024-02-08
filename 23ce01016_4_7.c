#include<stdio.h>
int main(){
    int num,age, total_fare=0;
    int num_child=0,num_teen=0,num_adult=0,num_senior=0;
    printf("Enter the number of persons: ");
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        printf("Enter the age: ");
        scanf("%d",&age);
        if(age<5){
            num_child++;
    }
    else if(age>=6 && age<=12){
            num_teen++;
    }
    else if(age>=13 && age<=59){
            num_adult++;
    }
    else{
        num_senior++;
    }
    }
    total_fare=((num_teen*20)+(num_adult*50)+(num_senior*50*80/100));
    
    printf("The number of child are %d, Children are free to enter, so no fare.\nThe number of teenager are %d, so the teenager's fare are %d.\nThe number of adult are %d, so the adult's fare are %d.\nThe number of senior citizen are %d, so the senior citizen's fare are %d.\nThe total fare are %d",num_child,num_teen,(num_teen*20),num_adult,(num_adult*50),num_senior,(num_senior*50*80/100),total_fare);

    return 0;
}