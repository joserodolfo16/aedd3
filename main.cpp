#include <iostream>
using namespace std;

int main()
{
	float a, b, rsoma, rsub, rdiv, rmul;
	cout << "Calculadora simples em C++ " << endl;
	cout << "Digite os dois n�meros a serem calculados:" << endl;
	cin >> a;
	cin >> b;
	rsoma = a + b;
	rsub = a - b;
	rmul = a*b;
	if (b == 0)
	{
		cout << "Soma: " << rsoma << endl << "Subtra��o: " <<  rsub << endl <<
		"Multiplica��o: " << rmul << endl << "Divis�o imposs�vel."; 
	}
	else {
		rdiv = a/b;
		cout << "Soma: " << rsoma << endl << "Subtra��o: " << rsub << endl <<
		"Multiplica��o: " <<  rmul << endl << "Divis�o :" << rdiv; 
	}
	
	return 0;
}