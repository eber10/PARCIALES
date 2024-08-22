#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"ingrese el primer numero: "; cin>>n;
    cout<<"ingrese el segundo numero: "; cin>>m;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0 && m%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}