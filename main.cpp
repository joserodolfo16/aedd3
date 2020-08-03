#include <iostream>
using namespace std;

int main()
{
	float a, b, rsoma, rsub, rdiv, rmul;
	cout << "Calculadora simples em C++ " << endl;
	cout << "Digite os dois números a serem calculados:" << endl;
	cin >> a;
	cin >> b;
	rsoma = a + b;
	rsub = a - b;
	rmul = a*b;
	if (b == 0)
	{
		cout << "Soma: " << rsoma << endl << "Subtração: " <<  rsub << endl <<
		"Multiplicação: " << rmul << endl << "Divisão impossível."; 
	}
	else {
		rdiv = a/b;
		cout << "Soma: " << rsoma << endl << "Subtração: " << rsub << endl <<
		"Multiplicação: " <<  rmul << endl << "Divisão :" << rdiv; 
	}
	
	return 0;
}