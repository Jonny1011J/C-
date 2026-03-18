#include <iostream>
using namespace std; 
int main()
{ 
    // variables
    float ice1, ice2, ice3, quant_ven1, quant_ven2, quant_ven3, total;
    
    // in 
    cout << "Quantos picole do tipo 1: ";
    cin >> ice1;
    cout << "Quantos picole do tipo 2: ";
    cin >> ice2;
    cout << "Quantos picole do tipo 3: ";
    cin >> ice3;
    
    // process
    quant_ven1 = ice1 * 0.50;
    quant_ven2 = ice2 * 0.60;
    quant_ven3 = ice3 * 0.75;
    total = quant_ven1 + quant_ven2 + quant_ven3;
    
    // out 
    cout << "O valor final ficou: R$ " << total;
}