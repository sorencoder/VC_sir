#include<stdio.h>
#include<time.h>
int main()
{
    clock_t begin = clock ();
    void sum(){
        int a,b;
        printf("Enter any two numbers ");
        scanf("%d%d",&a,&b);
        int sum = a+b;
        printf("Sum of %d and %d is: %d",a,b,sum);
    }
    void diff(){
        int a,b,difference;
        printf("Enter any two numbers ");
        scanf("%d%d",&a,&b);
        if(a>b)
        difference = a-b;
        else
        difference = b-a;
        printf("Difference between %d and %d is: %d",a,b,difference);
    }
    void prod(){
        int a,b;
        printf("Enter any two numbers ");
        scanf("%d%d",&a,&b);
        int product= a*b;
        printf("Product of %d and %d is: %d",a,b,product);
    }
    void mod(){
        int a,b;
        printf("Enter any two numbers ");
        scanf("%d%d",&a,&b);
        int modulus=a%b;
        printf("Quotient when %d is divided by %d is: %d",a,b,modulus);
    }
    int ch;
    printf("Enter 1 to calculate the sum \n");
    printf("Enter 2 to calculate the difference \n");
    printf("Enter 3 to calculate the product \n");
    printf("Enter 4 to calculate the quotient \n");
    printf("Enter your choice ");
    scanf("%d",&ch);
    if(ch==1)
        sum();
    else if(ch==2)   
        diff();
    else if(ch==3)
        prod();
    else if(ch==4)    
        mod();
    else{
        printf("Wrong Input!\n");
        printf("Enter the correct option and try again!!");
    }        
    clock_t end = clock ();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf ("\n");
    printf ("%f", time_spent);
    return 0;
}
