#include <iostream>
#include <string>

using namespace std;

string get_mes(int mes)
{
	string aux; 
	switch(mes)
	{
		case 1: aux = "enero"; break;
		case 2: aux = "Febre"; break;
		case 3: aux = "Marzo"; break;
		case 4: aux = "Abril"; break;
		case 5: aux = "Mayoo"; break;
		case 6: aux = "Junio"; break;
		case 7: aux = "Julio"; break;
		case 8: aux = "Agost"; break;
		case 9: aux = "Septi"; break;
		case 10: aux = "Octub"; break;
		case 11: aux = "Novie"; break;
		case 12: aux = "Dicie"; break;
	}
	return aux;
}

void show_date(int date)
{
	int a = date / 10000;
	int m = (date / 100) % 100;
	int d = date % 100;

	if (m > 12 || d > 31)
		cout << "Date no valid" << endl;
	else if(d == 1)
		cout << "Primero" <<" " << "de" << " " << get_mes(m) << " " << "de" << " "<< a << endl;
    else
    	cout << d << " " << "de" << " " << get_mes(m) << " " << "de" << " " << a << endl;	
}

int main()
{
	show_date(20140126);
	show_date(20141101);
	show_date(20141206);
	show_date(20140407);
}



