#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int op;
    float D, d, l;
    bool salir=false;
    do
    {
        cout<<"1.area de un rombo"<<endl;
        cout<<"2.area de un cuadrado"<<endl;
        cout<<"3.salir"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:
                cout<<"ingrese la diagonal mayor: "; cin>>D;
                cout<<"ingrese la diagonal menor: "; cin>>d;
                cout<<"A:"<<(D*d)/2<<endl;
                break;
            case 2:
                cout<<"ingrese un lado del cuadrado:"; cin>>l;
                cout<<"A:"<<pow(l,2)<<endl;
                break;
            case 3:
                salir=true;
                break;
            default:
                break;
        }
    }
    while(!salir);
    return 0;
}