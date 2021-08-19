#include <iostream>
using namespace std;
#include <fstream>

void Busqueda (int a[],int n,int dato);
void Burbuja (int a[],int n);
void leerArchivo();

int main()
{

 int a[10]={99,15,77,37,41,55,101,28,69,81};
 Burbuja(a,10);
 Busqueda(a,10,28);
 leerArchivo();


 return 0;
}

void Burbuja (int a[],int n)
{
   int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }
}



void Busqueda(int a[],int n,int dato)
{
  ofstream Binario;
  int i,j,k;
  Binario.open("BDD/Binario.txt",ios::app);
  i=0;
  j=n-1;

  do
  {
      k=(i+j)/2;
      if(a[k]<=dato)
        {
          i=k+1;
        }
      if (a[k]>=dato)
        {
          j=k-1;
        }
  }while (i<=j);

  if(a[k]==dato)
  {
      cout <<"\nElemento encontrado en la posicion:"<<k<<endl;
      Binario<<"\nElemento encontrado en la posicion:"<<k<<endl;
  }
  else
  {
      cout <<"\nElemento no encontrado"<<endl;
       Binario <<"\nElemento no encontrado :"<<endl;
  }

}



void leerArchivo()
{
   ifstream archivolectura;
      string texto;
      archivolectura.open("BDD/Binario.txt",ios::in);
      if (archivolectura.fail() )
      {
        cout<<"EL ARCHIVO NO SE PUDO LEER, O EL MISMO NO SE ENCUENTRA CREADO";
      }
      else
      {
        cout<<"La información del archivo es: \n";
        while(!archivolectura.eof())
        {
          getline(archivolectura,texto);
          cout<<texto<<endl;
        }
      }
      archivolectura.close();

}
