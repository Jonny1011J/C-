#include <iostream>
using namespace std;
int main()
   {
    // variables 
    float cotacao, v_dolar, v_real;
    
    // in
    cout << "Informe o valor da cotaçao: ";
    cin >> cotacao;
    cout << "Informe o valor do dolar: ";
    cin >> v_dolar;
    
    // process
    v_real = cotacao * v_dolar;
    
    //out 
    cout << "O valor em real fica: R$ " << v_real;
   }