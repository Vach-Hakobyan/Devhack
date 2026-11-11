#include<stdio.h>

int main()
{
    int size = 5;
    int arr[size];
    printf("inqlude 5 numbers\n");
    int sum = 0;
    for(int i = 0; i < size;i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    int max = arr[0];
    for(int j = 0; j < size;j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
        }
    }
    int min = arr[0];
    for(int k = 0; k < size;k++)
    {
        if(arr[k] < min)
        {
            min = arr[k];
        }   
    }
printf("sum = %d\n", sum);
printf("max = %d\n", max);
printf("min = %d\n", min);

 return 0;   
}