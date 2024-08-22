#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct producto
{
	string nombre;
	string codigo;
	float precio;
	string categoria;
	int cantidad;
};

int main()
{
	const int tam=4;
	producto artefactos[tam]={
		{"laptop", "A123", 1500.00, "electronica", 10},
	    {"telefono", "B456", 800.00, "electronica", 20},
	    {"televisor", "C789", 1200.00, "electrodomesticos", 5},
	    {"refrigeradora", "D012", 1000.00, "electrodomesticos", 8}
	};
	const int tam2=4;
	producto artefactos2[tam2]={
		{"laptop", "A123", 1500.00, "electronica", 10},
	    {"telefono", "B456", 800.00, "electronica", 20},
	    {"televisor", "C789", 1200.00, "electrodomesticos", 5},
	    {"refrigeradora", "D012", 1000.00, "electrodomesticos", 8}
	};
	char op;
	bool salir=false;
	do
	{
		cout<<"a.mostrar listado de productos"<<endl;
		cout<<"b.mostrar listado ordenado"<<endl;
		cout<<"c.salir"<<endl;
		cin>>op;
		switch(op)
		{
			case 'a': 
				cout<<"N°"<<setw(16)<<"nombre"<<setw(20)<<"codigo"<<setw(20)<<"precio"<<setw(20)<<"categoria"<<setw(20)<<"cantidad"<<endl;
				for(int i=0; i<tam; i++)
				{
					cout<<i+1<<setw(16)<<artefactos[i].nombre<<setw(20)<<\
					artefactos[i].codigo<<setw(20)<<\
					artefactos[i].precio<<setw(20)<<\
					artefactos[i].categoria<<setw(20)<<\
					artefactos[i].cantidad<<endl;
				}
				cout<<endl;
				break;
			case 'b':
				for(int i=0; i<tam2-1; i++)
				{
					for(int j=i+1; j<tam2; j++)
					{
						if(artefactos2[i].precio>artefactos2[j].precio)
						{
							string aux1;
							aux1=artefactos2[i].nombre;
							artefactos2[i].nombre=artefactos2[j].nombre;
							artefactos2[j].nombre=aux1;
							
							string aux2;
							aux2=artefactos2[i].codigo;
							artefactos2[i].codigo=artefactos2[j].codigo;
							artefactos2[j].codigo=aux2;
							
							float aux3;
							aux3=artefactos2[i].precio;
							artefactos2[i].precio=artefactos2[j].precio;
							artefactos2[j].precio=aux3;
							
							string aux4;
							aux4=artefactos2[i].categoria;
							artefactos2[i].categoria=artefactos2[j].categoria;
							artefactos2[j].categoria=aux4;
							
							int  aux5;
							aux5=artefactos2[i].cantidad;
							artefactos2[i].cantidad=artefactos2[j].cantidad;
							artefactos2[j].cantidad=aux5;
						}
					}
				}
				cout<<"N°"<<setw(16)<<"nombre"<<setw(20)<<"codigo"<<setw(20)<<"precio"<<setw(20)<<"categoria"<<setw(20)<<"cantidad"<<endl;
				for(int i=0; i<tam; i++)
				{
					cout<<i+1<<setw(16)<<artefactos2[i].nombre<<setw(20)<<\
					artefactos2[i].codigo<<setw(20)<<\
					artefactos2[i].precio<<setw(20)<<\
					artefactos2[i].categoria<<setw(20)<<\
					artefactos2[i].cantidad<<endl;
				}
				break;
			case 'c':
				salir=true;
				break;
			default:
				break;
		}
	}
	while(!salir);
	return 0;
}