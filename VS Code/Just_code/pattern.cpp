#include<stdio.h>
#include<iostream>
using namespace std;


void pyramid(int n)
{
        for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf("  ");
        }
        for (int k=1;k<=i;k++)
        {
            printf("* ");
        }
        for (int l=1;l<=i-1;l++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void hollow_square(int n)
{
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void reverse_pyramid(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("  ");
        }
        for (int k=n;k>=i;k--)
        {
            printf("* ");
        }
        for (int l=n;l>=i+1;l--)
        {
            printf("* ");
        }
    printf("\n");
    }
} 

void hollow_pyramid(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf("  ");
        }
        for (int k=1;k<=i;k++)
        {
            if(k==1 || i==n)
                printf("* ");
            else
                printf("  ");   
        }
        for (int l=1;l<i;l++)
        {
            if(l==i-1 || i==n)
                printf("* ");
            else
                printf("  ");   
        }
    printf("\n");
    }
} 

void hollow_square_with_diagonal(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==0 || i==n-1 || j==1 || j==n || j==n-i || j==1+i)
                printf("* ");
            else
                printf("  ");    
        }        
        printf("\n");
    }
}

void left_tilt_rhombus(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<i;j++)
        {
            printf("  ");
        }
        for (int k=1;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

void right_tilt_rhombus(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf("  ");
        }
        for (int k=1;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void diamond_using_star_hyphen(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>i;j--)
        {
            printf("  ");
        }
        for (int k=1;k<=i;k++)
        {
            if (i%2==0)
                printf("- ");
            else
                printf("* ");
        }
        for (int l=1;l<i;l++)
        {
            if (i%2==0)
                printf("- ");
            else
                printf("* ");
        }
        printf("\n");
    }
    for (int m=1;m<n;m++)
    {
        for (int o=1;o<=m;o++)
        {
            printf("  ");
        }
        for (int p=n;p>m;p--)
        {
            if (m%2==1)
                printf("- ");
            else
                printf("* ");
        }
        for (int q=n-1;q>m;q--)
        {
            if (m%2==1)
                printf("- ");
            else
                printf("* ");
        }
        printf("\n");

    }
}

void floyds_triangle(int n)
{
    int ans=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<ans<<" ";
            ans++;
        }
        cout<<"\n";
    }
}

void floyds_pyramid(int n)
{
    int ans=1;
    for (int i=1;i<=n;i++)
    {
        for(int k=n;k>=i;k--)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<ans<<"  ";
            ans++;
        }
        cout<<"\n";
    }
}

void zig_zag(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(k==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int l=1;l<i;l++)
        {
            if(l==i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int m=n;m>i;m--)
        {
            cout<<" ";
        }

        for(int o=n;o>i;o--)
        {
            cout<<" ";
        }
        for(int p=1;p<=i;p++)
        {
            if(p==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int q=1;q<i;q++)
        {
            if(q==i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int r=n;r>i;r--)
        {
            cout<<" ";
        }
        for(int t=n;t>i;t--)
        {
            cout<<" ";
        }
        for(int s=1;s<=i;s++)
        {
            if(s==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";

    }
}

void letter_a(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf("  ");
        }
        for (int k=1;k<=i;k++)
        {
            if(k==1 || i==n/2)
                printf("* ");
            else
                printf("  ");   
        }
        for (int l=1;l<i;l++)
        {
            if(l==i-1 || i==n/2)
                printf("* ");
            else
                printf("  ");   
        }
    printf("\n");
    }
}

void palindrome_no_pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int l=n-1;l>=i;l--)
        {
            cout<<"  ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for (int k=i-1;k>=1;k--)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}

void pyramid2(int n)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for (int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main()
{
    int p;
    cout<<"Patterns-:\2:\n1-Pyramid\n2-Hollow Square\n3-Reverse Pyramid\n4-Hollow Pyramid\n5-Hollow Square with diagonal";
    cout<<"\n6-Left tilt Rhombus\n7-Right tilt Rhombus\n8-Diamond using Star and Hyphen";
    cout<<"\n9-Floyd's Triangle\n10-Floyd's Pyramid\n11-Zig zag\n12-Letter--A\n13-Palindrome no Pyramid";
    cout<<"\n14-Pyramid 2";
    cout<<"\nEnter any Patter no. to print-::->";
    cin>>p;
    
    int n;
    printf("Enter the no of rows to print:- ");
    scanf("%d",&n);
    
    switch (p)
    {
        case 1:
            pyramid(n);
            break;
        case 2:
            hollow_square(n);
            break;
        case 3:
            reverse_pyramid(n);
            break;
        case 4:
            hollow_pyramid(n);
            break;
        case 5:
            hollow_square_with_diagonal(n);
            break;
        case 6:
            left_tilt_rhombus(n);
            break;
        case 7:
            right_tilt_rhombus(n);
            break;
        case 8:
            diamond_using_star_hyphen(n);
            break;
        case 9:
            floyds_triangle(n);
            break;
        case 10:
            floyds_pyramid(n);
            break;
        case 11:
            zig_zag(n);
            break;
        case 12:
            letter_a(n);
            break;
        case 13:
            palindrome_no_pyramid(n);
            break;
        case 14:
            pyramid2(n);
            break;
        default:
            cout<<"Invalid Input";
    }
    
}