#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int max=0,min=0,sum=0;
    float avg=0;

    for(int i=0;i<10;i++)
    {
        printf("Enter a number ");
        scanf("%d",&a[i]);

        if(max<a[i])
        {
            max=a[i];
        }

        else if(min>a[i])
        {
            min=a[i];
        }

        sum+=a[i];

    }

    avg=(float) sum/10;

    printf("Maximum value is %d \nMinimum value is %d \nAverage value is %.2f",max,min,avg);
    printf("\n");

    for (int i=10;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
