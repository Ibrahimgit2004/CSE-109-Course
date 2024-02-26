#include<stdio.h>
int main()
{
    int i,arr[5];
    printf("write the numbers \n");

    for(i=0; i<=4; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the reverse array is ");

    for(i=4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

}

