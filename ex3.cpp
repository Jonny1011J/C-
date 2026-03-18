#include <iostream>
using namespace std;
int main()
{
    // variables 
    string nome;
    float sal_fix, com_fix, car_sold, total_sold, total_sal;
    
    // in 
    cout << "Nome do vendedor: ";
    cin >> nome;
    cout << "Quantidade de carros vendidos: ";
    cin >> car_sold;
    
    // process
    sal_fix = 350;
    com_fix = 50 * car_sold * 1.05;
    total_sal = sal_fix + com_fix;
    // out 
    cout << "O salario total ficou: R$ " << total_sal;
}