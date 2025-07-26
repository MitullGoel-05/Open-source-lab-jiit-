#include<stdio.h>

int main()
{
    int arr[100];
    int s;
    printf("enter size of array: ");

    scanf("%d",&s);

    printf("size of array = %d",s);
    printf("\n\n");
    for(int i=0; i<s; i++)
    {
        printf("enter element: ");
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    int sum=0;
    for(int i=0; i<s; i++)
    {
        sum  = sum + arr[i];
    }
    int avg;
    avg = sum/s;
    printf("avg = %d",avg);
}
