#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int casos, i = 1, numero = 1, linha, cont = 0, resposta = 1;
    cin >> casos;
    while (cont < casos){
        cin >> linha;
        for (i = 2; i <= linha; i++){
            numero = numero * 2;
            resposta = resposta + numero;
        }
        cout << resposta <<endl;
        numero = 1;
        resposta = 1;
        cont++;
    }
    return 0;
}
