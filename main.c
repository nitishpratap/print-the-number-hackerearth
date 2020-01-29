#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,num;
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("The array are :\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);

    }

    return 0;
}
