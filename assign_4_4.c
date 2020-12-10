#include<stdio.h>
float sum_average(int n){
    int i;
    float sum=0;
    float num;
    for(i=1;i<=n;i++){
        printf("Enter the %d number: ",i);
        scanf("%f",&num);
        sum=sum+num;
    }
    return sum;
}
void main(){
    float sum;
    int n;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum=sum_average(n);
    avg=sum/n;
    printf("sum of the number: %.2f",sum);
    printf("average: \n%.2f",avg);

}
