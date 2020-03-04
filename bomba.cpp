#include<iostream>
#include<cmath>

using namespace std;

class Bomba{
	private:
		float lit,plit,cant,total;
	public:
		Bomba(){
			lit=900;
			plit=6.4;
			cant=0;
			total=0.0;
		}
		void despliega();
		float despacha(float x);
};

void Bomba::despliega(){
	cout<<"\nCantidad disponible:"<<lit<<" Lts";
	cout<<"\nPrecio por litro €:"<<plit;
}
float Bomba::despacha(float x){
	float w,v;
	if(lit<x){
		cout<<"No es posible suministrar la cantidad solicitada\n";
		cout<<"solo hay "<<lit<<" litros disponibles";
	}
	else if(lit>=x){
		lit=lit-x;
		total=plit*x;
		cout<<"\nLitros vendidos: "<<(x);
		cout<<"\Litros disponibles: "<<lit;
		cout<<"\nCantidad a pagar "<<total<<"€";
	}
	return 0;
}

int main(){
	int op;
	float ven;
	Bomba b;
	cout<<"\n\n    * B I E N V E N I D O *";
	do{
		cout<<"\n===========================\n";
		cout<<"Seleccione la opcion que desea\n";
		cout<<"=============================\n";
		cout<<"1.-Cantidad existente/Precio\n";
		cout<<"2.-Venta\n";
		cout<<"3.-Salir\n=>";
		
		cin>>op;
		switch(op){
			case 1: b.despliega();
					break;
			case 2: cout<<"\n\nCuantos litros quiere?? ";
					cin>>ven;
					b.despacha(ven);
					break;
			case 3: cout<<"\nGracias por su preferencia\n\n";
					break;
					
			default: cout<<"\nEsa opcion no se encuentra en el menu!!!";
					 break;
					 
		}
	}while(op!=3);
	return 0;
}
