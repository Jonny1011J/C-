#include <iostream>
using namespace std;
int main()
{
    //variables
   float kil_start, kil_end, liters_con, con_total, kil_total;
    
    // in 
    cout << "Qual e o inicio da quilometragem: ";
    cin >> kil_start;
    cout << "Qual e o final da quilometragem: ";
    cin >> kil_end;
    cout << "Quantos litros foram consumidos: ";
    cin >> liters_con;
    
    // process
    kil_total = kil_end - kil_start;
    con_total = kil_total / liters_con;
    
    // out 
    cout << "O consumo do automovel em Km/Litros foi: " << con_total;
}