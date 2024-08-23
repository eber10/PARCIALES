#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int arr[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            arr[i][j]=rand()%9+1;
        }
    }
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=-1; j<3; j++)
        {
            if(j==-1)
            {
                cout<<arr[i][3]<<" ";

            }
            else
            {
                cout<<arr[i][j]<<" ";

            }
            
        }
        cout<<endl;
    }
    return 0;
}