#include <iostream>

using namespace std;

class FilaCircular
{
    public :
        int * array = nullptr;
        int tamanho = 0;
        int p = 0 , u = 0;

        FilaCircular ( int tamanho )
        {
            this -> tamanho = tamanho;
            array = new int [ tamanho ];
            p = u = 0;
        }

        ~ FilaCircular ( ) 
        {
            delete [ ] array;
        }

        void inserirInicio ( int valor )
        {
            if ( ( u + 1 ) % tamanho == p )
            {
                cout << "Erro Ao Inserir" << endl;
                return;
            }

            array [ u ] = valor;
            u = ( u + 1 ) % tamanho;
        }

        int removerInicio ( )
        {
            if ( p == u )
            {
                cout << "Erro Ao Remover" << endl;
                return - 1;
            }

            int valorRemovido = array [ p ];

            p = ( p + 1 ) % tamanho;

            return valorRemovido;
        }

        void print ( )
        {
            if ( p == u )
            {
                return ;
            }

            for ( int i = p; i != u; i = ( i + 1 ) % tamanho )
            {
                cout << array [ i ] << ' ';
            }

            cout << "\n";
        }
};

int main ( )
{
    FilaCircular * fila = new FilaCircular ( 6 );

    fila -> inserirInicio ( 10 );
    fila -> inserirInicio ( 10 );
    fila -> inserirInicio ( 10 );
    fila -> inserirInicio ( 10 );
    fila -> inserirInicio ( 10 );

    fila -> print ( );
    
    fila -> inserirInicio ( 10 );

    int valorRemovido = 0;

    for ( int i = 0; i < fila -> tamanho; i ++ )
    {
        valorRemovido = fila -> removerInicio ( );

        cout << "Valor Removido : " << valorRemovido << ' ';
        cout << "\n";
    }

    return 0;
}