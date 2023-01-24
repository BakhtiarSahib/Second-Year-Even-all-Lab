//Linear Seearch...


#include<stdio.h>
int main()
{
    int num,i,j,temp;
    scanf("%d",&num);
    int arr[num];
    //input number
    for(i = 0;i <num ; i++)
    {
        scanf("%d",&arr[i]);
    }

    //bubble sort

 for(i = 0; i < num-1 ;i++)
    {
        for(j = 0; j < num-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
               temp = arr[j] ;
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }
     for(i = 0; i < num ;i++)
     {
         printf("%d ",arr[i]);
     }



}


