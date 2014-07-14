#include <iostream>

using namespace std;

int funcion3n1(int n)
{
	int ciclos;	
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	if (n % 2 == 0)
	{
		ciclos = 1 + funcion3n1(n / 2);	
	}

	else
	{
		ciclos = 1 + funcion3n1(3 * n + 1);
	}

	return ciclos;
}

int main()
{
	int i;
	int j;

	while(cin >> i >> j)
	{
		int limiteMin;
		int limiteMax;

		if (i < j)
		{
			limiteMin = i;
			limiteMax = j; 
		}
		else
		{
			limiteMin = j;
			limiteMax = i;
		}
              
		int maxCiclo = 0;
		for (int n = limiteMin; n <= limiteMax; n++)
		{
			int ciclosNum = funcion3n1(n);
			if (maxCiclo < ciclosNum)
			{
				maxCiclo = ciclosNum;		
			}
		}
		cout << i << " " << j << " " << maxCiclo << endl; 
	}
}
