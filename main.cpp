#include <iostream>
#include <fstream>

using namespace std;

int main()
{


ifstream in ("archivo.txt");
int num;
int suma = 0;
bool no_he_terminado = true;
if (in==NULL){
cout<<"Archivo no existe"<<endl;
}
int cantidad = 0;
while(no_he_terminado){
no_he_terminado = in>>num;
cout<<num<<endl;
suma+= num;
cantidad++;
}
cout<<"Promedio: "<<suma/cantidad<<endl;

//ofstream out ("archivo.txt");
//out<<10<<endl;
//out<<45<<endl;
//out<<true<<endl;
//out<<'A'<<endl;
//out<<"HOY TE MORIS"<<endl;
//out.close();
//
//ifstream ifs ("archivo1.txt");
//int numero;
//ifs>>numero;
//cout<<ifs<<endl;
    return 0;
}
