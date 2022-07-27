// averaging the number from a list

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10}, sum=0,avg;

    for (int i=0; i<10;i++)
    {
        sum+=a[i];
    }
    avg=sum/10;
    printf("%d",avg);
}