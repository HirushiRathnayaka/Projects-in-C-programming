#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int s[3][3]={{3,2,4},{1,4,6},{4,3,2}};
    int t[3][3]={{2,6,3},{4,3,2},{5,1,7}};

    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            printf("Enter a number ");
            scanf("%d",&a[i][k]);
        }
    }
    printf("\n");

    for(int b=0;b<3;b++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d\t",a[b][c]);
        }
        printf("\n");
    }
    printf("\n");

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d\t",s[x][y]+t[x][y]);
        }
        printf("\n");
    }

    return 0;
}
