#include<stdio.h>
void merge (){



}

void mergeSort( int arr[], int low , int high ){
            int mid;
            if(low < high){
                mid = (low + high)/2;
                mergeSort(arr , low , mid);
                mergeSort(arr , mid+1 , high);
                merge(arr , mid , low , high);
            }
}



int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter array \n");

    int arrr[n];

    for(i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }


  mergeSort(arr,0,n);


}
