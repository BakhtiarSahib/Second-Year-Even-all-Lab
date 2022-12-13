#include<stdio.h>
int quicksort(int arr[], int first, int last)
{
    int i,j,n,pivot,temp;

    if(first<last)
    {
        pivot = first;
        i = first;
        j = last ;

        while(i<j)
        {
            while(arr[i] <= arr[pivot] )    // while(arr[i] <= arr[pivot]&& i<last )
            {
                i++;
            }

            while(arr[j] > arr[pivot])
            {
                j--;
            }

            if(i < j)
            {
                temp   = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp   ;
            }

        }


        temp       =  arr[pivot];
        arr[pivot] =  arr[j];
        arr[j]     =  temp;



        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);



    }



}

int main()
{
    int i,n;
    printf("Enter how many numbers you want to input  : ");
    scanf("%d",&n);

    printf("\nEnter unsorted Numbers or random Numbers : ");
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }



    quicksort(arr,0,n-1);


    printf("\nsorted Numbers  : ");

    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }


}
