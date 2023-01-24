//newton
#include<stdio.h>
int fact(int n){

     int i,f = 1;
     for (i = 1 ; i <= n ; i++){
        f = f*i;
     }
   return f ;
}


int main()
{
    float x[20][20],y[20][20],p,h,px =1,x1,y1;
    int i,j,n;
    printf("Enter value of N : ");
    scanf("%d",&n);
    printf("Enter value of X : ");
    for(i=0; i<n; i++)
    {
        scanf("%f",&x[i]);
    }

    printf("\nEnter value of Y : ");
    for(i=0; i<n; i++)
    {
        scanf("%f",&y[i][0]);
    }

//forward difference table
    for(i = 1 ; i <n ; i++)
    {
        for(j = 0 ; j < n-i ; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }

//for print
    printf("\n\n");
    for(i = 0 ; i <n ; i++)
    {
        printf("X = %.2f  ",x[i]);
        for(j = 0 ; j < n-i ; j++)
        {
            printf("  %.2f ",y[i][j]);
        }
        printf("\n\n");
    }




//take the value of X

printf("Enter the value of X ; F(x) : " );
scanf("%f",&x1);


 h = x[1][0]- x[0][0] ;
 p = (x1 - x[0][0]) / h;

y1 = x[0][1];

for( i = 1 ; i<n ; i++){

    px = px * (p - (i - 1 ));
     y1 = y1 + (x[0][i+1] * px)/ fact(i);

}

printf("\n The value of the function is %f",y1);


}

