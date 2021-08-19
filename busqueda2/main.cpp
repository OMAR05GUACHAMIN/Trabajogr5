#include <iostream>
using namespace std;

int main()
{
    int b,i,j,k,tam;

    int a[10]={15,28,37,41,55,69,77,81,99,101};

  i= 0;
  j = 10-1;
  b=101;
  do
  {
    k= (i+j)/2;

    if (a[k]<=b)
      i=k+1;
    if (a[k]>=b)
      j= k-1;
  }
  while (i<=j);

  if(a[k]==b)
  {
      cout <<"\nElemento encontrado en la posicion:"<<k<<endl;
  }
  else
  {
    cout <<"\nElemento no encontrado"<<endl;

  }
}
