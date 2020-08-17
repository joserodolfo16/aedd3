#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	string dados;
	celula * proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n)
	{
		nome = n;
	}
	celula(string n, celula *p)
	{
		nome = n;
		proxima = p;
	}
	celula(string n, string d, celula *p){
		nome = n;
		dados = d;
		proxima = p;
	}
	string getNome()
	{
		return nome;
	}
	void setNome(string n)
	{
		nome = n;
	}

	celula * getProxima()
	{
		return proxima;
	}

	void setProxima(celula * l)
	{
		proxima = l;
	}
	string getDados(){
		return dados;
	}
	void setDados(string d){
		dados = d;
	}
};


class lista
{
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	~lista(){
		esvaziar();
	}
	lista(celula *i)
	{
		inicio = i;
	}
	celula * getInicio()
	{
		return inicio;
	}

	void inserirInicio(string n, string d)
	{
		celula *nova = new celula;
		nova->setNome(n);
		nova->setProxima(inicio);
		nova->setDados(d);
		inicio = nova;
	}

	void inserirFim(string n, string d)
	{
		if(inicio == NULL)
		{
			inserirInicio(n, d);
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			celula *nova = new celula(n, d, NULL);
			aux->setProxima(nova); 
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			while(aux != NULL)
			{
				cout << aux->getNome() << " - " << aux->getDados() << endl;
				aux = aux->getProxima();
			}
		}
	}
	
	void esvaziar(){
		celula *aux = inicio;
		while(aux != NULL){
			inicio = inicio->getProxima();
			delete aux;
			aux = inicio;
		}
		cout << "\n----Memoria liberada----\n";
	}
};

int main()
{
	lista listaAlunos;
	listaAlunos.inserirInicio("----", "Lista do churras -----");
	listaAlunos.inserirFim("Miguel", "18 anos, Masculino, bebe.");
	listaAlunos.inserirFim("Jorge", "20 anos, Masculino, bebe.");
	listaAlunos.inserirFim("Ana", "22 anos, Feminino, nao bebe.");
	listaAlunos.imprimir();
	return 0;
}