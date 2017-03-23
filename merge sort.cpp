#include <iostream>

using namespace std;

void mer(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int i,j=0,k=0;

    int b[n1];
    int c[n2];

    for(i=0;i<n1;i++)
        b[i]=a[p+i];

    for(i=0;i<n2;i++)
        c[i]=a[q+i+1];

    for(i=p;i<=r;i++)               //updating main array
    {
            if((b[j]<=c[k]&&j<n1)||(k>=n2))
                a[i]=b[j++];
            else
                a[i]=c[k++];
    }
}

void merg(int a[],int p,int r)
{
    int q=(p+r)/2;
    if(p<r)
    {
        merg(a,p,q);
        merg(a,q+1,r);
        mer(a,p,q,r);
    }
}

int main()
{
    int a[]={5,0,1,22,88,3,99,45,2,6,7,44,1234};
    merg(a,0,13);
    for(int i=0;i<13;i++)
        cout<<a[i]<<endl;
    return 0;
}
