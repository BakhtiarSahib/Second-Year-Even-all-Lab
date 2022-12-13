#include<stdio.h>

int insertionsort(int arr[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp = arr[i];
        j = i-1;

        while(arr[j] > temp )
        {
            arr[j+1] = arr[j];
            --j;

        }
        arr[j+1] = temp ;
    }
}


int main()
{
    int i,n,temp,j;
    printf("Enter how many numbers you want to input  : ");
    scanf("%d",&n);

    printf("\nEnter unsorted Numbers or random Numbers : ");
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    insertionsort(arr,n);




    printf("\n Ascending : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


     printf("\n Dcending : ");

    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }



    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


}
