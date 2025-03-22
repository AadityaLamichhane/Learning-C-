#include<stdio.h>
int main()
{
    int num;
    printf("enter the number of the floating points");
    scanf("%d",&num);

    float list_of_number[num];
    for (int i=0; i<num ; i++){
        printf("Enter the number in the floating ponts");
        scanf("%f", &list_of_number[i]);
    }
    float sum=0.0;
    for ( int i = 0 ; i<num ; i++)
    {
        sum = sum + list_of_number[i];
    }
    float average  = sum / num;
    printf("%f is the average of the number ", average);

   for( int i = 0 ; i<num ; i++)   
{
    float deviation = list_of_number[i] - average;
    printf("Deviation of the number %f is %f ",list_of_number[i],deviation);
}
    
    return 0;
}