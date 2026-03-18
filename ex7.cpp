#include <iostream>
using namespace std;
int main()
{
	//variables
	float bdays, bmonth, byear, t_day, t_month, t_year, btotal, t_total, total;

	// in
		cout << "Informe sua data de nascimento (MM DD AAAA): ";
	cin >> bmonth >> bdays >> byear;
	cout << "Informe a data de hoje (MM DD AAAA): ";
	cin >> t_month >> t_day >> t_year;

	// process
	btotal = bdays + (bmonth * 30) + (byear * 360);
	t_total = t_day + (t_month * 30) + (t_year * 360);
	total = t_total - btotal;
	// out
	cout << "O total de dias que voce ja viveu aproximadamente: " << total << " dias." ;
}
