#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ingrese la altura: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}