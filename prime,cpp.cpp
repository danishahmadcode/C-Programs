#include<iostream>
using namespace std;
int main()
{
    int i, n=0, lmt,j;
    cout<<"Prime numbers limit:"<<"";
    cin>>lmt;
    for(i=1; i<=lmt; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               n++;
               break;
           }
        }
        if(n==0 && i!=1)
            cout<<i<<" ";
        n = 0;
    }
    cout<<endl;
    return 0;
}