#include <cstdlib>
#include <iostream>

using namespace std;

void numeros(int N, int R)
{
     for(int i=0;i<N;i++)
     {
      cout<<R<<endl;  
      R++;            
     }
}

int main(int argc, char *argv[])
{
    int N, R;
    cout<<"Ingrese cantidad de numeros naturales: (N)"<<endl;
    cin>>N;
    if(N>0)
    {
    cout<<"Ingrese de que numero desea arrancar: (R)"<<endl;
    cin>>R;
    }
    else
        cout<<"No es una cantidad valida"<<endl;
        
    numeros(N,R);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
