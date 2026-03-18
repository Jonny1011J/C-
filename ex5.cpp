#include <iostream>
using namespace std;
int main()
{
    // variables 
    string nome;
    float sal_bruto, sal_liquido, des_previ, imp_de_renda, des_imp;
    
    // in 
    cout << "Nome do funcionario: ";
    cin >> nome;
    cout << "Qual e o salario bruto: R$ ";
    cin >> sal_bruto;
    
    // process 
    des_previ = sal_bruto * 0.10;
    imp_de_renda = sal_bruto - des_previ;
    des_imp = imp_de_renda * 0.25;
    sal_liquido = imp_de_renda - des_imp;
    
    // out 
    cout << "\nNome do funcionario: " << nome;
    cout << "\nO salario bruto: R$ " << sal_bruto;
    cout << "\nDesconto da previdencia R$ " << des_previ;
    cout << "\nImposto de renda: R$ " << des_imp;
    cout << "\nO salario liquido: R$ " << sal_liquido;
}