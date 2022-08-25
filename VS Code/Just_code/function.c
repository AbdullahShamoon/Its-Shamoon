#include<stdio.h>

int sum_natural_no(int n)
{
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        
        sum=sum+i;
        
    }
    return sum;
}

void pythagorian_triplet()
    {
        int x,y,z,h,b,p;
        scanf("%d %d %d",&x ,&y ,&z);

        if(x>y && x>z)
        {
            h=x;
            b=y;
            p=z;
        }
        else if(y>x && y>z)
        {
            h=y;
            b=x;
            p=z;
        
        }
        else
        {
            h=z;
            b=x;
            p=y;
        
        }    

        if ((h*h)==(b*b + p*p))
        {
            printf("it is a pythogarian triplet");
        }
        else
        {
            printf("not a pythogarian triplet");           
        }

    }


int main()
{
    int n;
    // printf("Enter the no of rows to print:- ");
    // scanf("%d",&n);
    // printf("%d",sum_natural_no(n));
   
    pythagorian_triplet();

}