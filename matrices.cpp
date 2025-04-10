#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3];
    
    for(int fila=0; fila<3;fila++){
        for(int col=0;col<3;col++){
            cout<<"fila "<<fila+1<<" columna "<<col+1<<": ";
            cin>>matriz[fila][col];
        }
    }
    //visualizara la matriz
    for(int f=0;f<3;f++){
        for(int c=0;c<3;c++){
            cout<<"fila "<<f+1<<" columna "<<c+1<<"--> "<<matriz[f][c]<<"\n";
        }
    }

    return 0;
}
