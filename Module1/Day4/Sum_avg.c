#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n],i,sum=0;
    float avg;
    printf("enter the elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("sum is %d\n",sum);
    printf("avg is %.2f\n",avg);
}