#include <iostream>
#include <conio>
using namespace std;
class Nodo
{
	int valor;
	Nodo *hijo_derecho;
	Nodo *hijo_izquier;
public:
	Nodo(int n);

	friend class Arbol;

};

Nodo::Nodo(int n)
{
	valor = n;
	hijo_derecho = NULL;
	hijo_izquier = NULL;


}
class Arbol
{
	Nodo *raiz;

public:
	Arbol();

	bool vacio();

	Nodo *getraiz();

	void insertar(Nodo*, int n);

	void inorden(Nodo * arbol);

	void Buscar(int n);

	

	void postorden(Nodo * arbol);

	void preorden(Nodo * arbol);

	void mostrar_arbol(Nodo * arbol, int con);

	void recorrido(int n);

	

	void eliminar(int n);




};
Arbol::Arbol()
{
	raiz = NULL;

}
bool Arbol::vacio()
{
	return(raiz == NULL);

}
Nodo *Arbol::getraiz()
{
	return raiz;
}
void Arbol::insertar(Nodo*arbol, int n)
{
	Nodo *nuevo = new Nodo(n);
	if (vacio())
	{
		
		raiz = nuevo;

	}
	else
	{
		Nodo *aux = raiz;
		Nodo *padre;
		while (true)
		{
			padre = aux;
			if (n<aux->valor)
			{
				aux = aux->hijo_izquier;
				if (aux==NULL)
				{
					padre->hijo_izquier = nuevo;
					return;
				}
			}
			else
			{
				aux = aux->hijo_derecho;
				if (aux==NULL)
				{
					padre->hijo_derecho = nuevo;
					return;
				}
			}
		}
		
	}
}

	void inorden(Nodo * arbol)
{

}

	void Buscar(int n)
{

}

	

	void postorden(Nodo * arbol)
{

}

	void preorden(Nodo * arbol)
{

}

	void mostrar_arbol(Nodo * arbol, int con)
{

}

	

	

	void eliminar(int n)
{

}



int main()
{
	


	
 } 
