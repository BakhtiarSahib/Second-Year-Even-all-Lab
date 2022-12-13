#include<stdio.h>
#include<math.h>
#define F(x) (x*x*x -(2*x) - 5)

/*float F( float x )
{
   // return (x*x*x + (x*x) + x + 7 );
    return ((3*x) - cos(x)  -1 );
}*/

int main()
{
    int i = 1;
    float a,b,c,fa,fb,fc;
    a = 2;
    b = 3;

    do
    {
        fa = F(a);
        fb = F(b);
        c  = (a+b) / 2 ;
        fc = F(c);
        printf("i = %d  a = %.2f  b = %.2f  fa =%.2f   fb =%.2f  c = %.2f  fc = %.2f \n",i,a,b,fa,fb,c,fc );



        if(fa*fc < 0 )
        {
            b = c ;
        }

        else
        {
            a = c ;
        }


        i++;
    }
    while(fabs(F(c)) > 0.001);


    printf("\n\napproximate root = %f\n",c);





}
