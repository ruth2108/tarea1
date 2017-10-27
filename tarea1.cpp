#include <iostream>
#include <conio.h>
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
	//Isai//

		if (vacio())
	{
		cout << "Arbol vacio";

	}
	else
	{
		if (arbol!=nullptr)
		{
			inorden(arbol->hijo_izquier);
			cout << arbol->valor << " ";
			inorden(arbol->hijo_derecho);

		}

		else
		{
			return;
		}


	}
}

	void Buscar(int n)
{
	//Isai//
		if (vacio())
	{
		cout << "Arbol vacio";

	}
	else
	{
		Nodo *aux = raiz;
		Nodo *padre = NULL;
		while (aux->valor!=n)
		{
			padre = aux;


				if (n < aux->valor)
				{
					aux = aux->hijo_izquier;


				}
				else if (n>aux->valor)
				{
					aux = aux->hijo_derecho;

				}
			if (aux != nullptr)
			{

			}

			else
			{
				cout << "Ese elemento no es parte del arbol";
				return;
			}
		}

		if (padre==NULL)
		{
			cout << "El elemto->" << aux->valor << "y es la raiz del arbol";
		}
		else
		{
			cout << "El elemto->" << aux->valor << "y es hijo de->" << padre->valor;

		}


	}
}


//Angel
	void postorden(Nodo * arbol)
{
	if (vacio())
	{
		cout << "Arbol vacio";

	}
	else
	{
		if (arbol != nullptr)
		{
			postorden(arbol->hijo_izquier);
			postorden(arbol->hijo_derecho);
			cout << arbol->valor << " ";
		}

		else
		{
			return;
		}


	}
}

//Angel
	void preorden(Nodo * arbol)
{
	if (vacio())
	{
		cout << "Arbol vacio";

	}
	else
	{

		if (arbol != nullptr)
		{
			cout << arbol->valor << " ";
			preorden(arbol->hijo_izquier);

			preorden(arbol->hijo_derecho);

		}

		else
		{
			return;
		}


	}

}

	void mostrar_arbol(Nodo * arbol, int con)
{
    (Nodo* a, int n){
    if(a != NULL){ // Si el árbol no está vacío
        Alola(a->Derecha, n+1);
        for(int i = 0; i < n; i++)
            cout << " ";
        cout << a->dato << endl;
        Alola(a->Izquierda, n+1);
    }
}
}





	void eliminar(int n)
{
 NodoAB aux = null, aux1 = null, otro = null;
            if (dato < r.Dato)
            {
                Eliminar(r.Izq, dato);
            }
            else
            {
                if (dato > r.Dato)
                {
                    Eliminar(r.Der, dato);
                }
                else
                {
                    otro = r;


                    if (otro != null)
                    {
                        if ((otro.Der == null) && (otro.Izq == null))
                        {
                            otro = null;
                        }
                        else
                        {
                            if (otro.Der == null)
                            {
                                r = otro.Izq;

                            }
                            else
                                if (otro.Izq == null)
                                {
                                    r= otro.Der;

                                }
                                else
                                {
                                    aux = otro.Izq;
                                    aux1 = aux;
                                    while (aux.Der != null)
                                    {
                                        aux1 = aux;
                                        aux = aux.Der;
                                    }
                                    otro.Dato = aux.Dato;
                                    otro = aux;
                                    aux1.Der = aux.Izq;
                                    aux = null;

                                }
                        }
                    }
                    else
                        System.Windows.Forms.MessageBox.Show("Dato no encontrado en el arbol");
                }
            }
}



int main()
{
Arbol *op = new Arbol();
	int menu, repmenu;
	do {
		system("cls");
		cout << "Elija una opcion:\n1:Insertar un elemneto en el arbol\n2:Recorrer el arbol\n3:Mostrar el arbol\n4:Eliminar un nodo\n5:Buscar" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			system("cls");
			int dato;
			cout << "Ingresa el dato: ";
			cin >> dato;
			op->insertar(op->getraiz(),dato);

			break;
		}
		case 2:
		{
			system("cls");
			int menu_re;
			cout << "Elija una opcion de recorrido:\n1:InOrden\n2:PostOrden\n3:PreOrden\n: ";
			cin >> menu_re;
			cout << "Arbol:\n";
			switch (menu_re)
			{
			case 1:
			{
				op->inorden(op->getraiz());
				break;
			
			}
			case 2:
			{
				op->postorden(op->getraiz());
				break;

			}
			case 3:
			{
				op->preorden(op->getraiz());
				break;

			}
			default:
				break;
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Diseño del arbol: \n";
			op->mostrar_arbol(op->getraiz(), 0);
			cout << "\n\nNota: Se debe mirar el arbol horizontalmente,empezando por la izquierda \n este algoritmo es totalmente sacado de internet\nFuente: Programacion ATS";
			break;
		}
		case 4:
		{
			system("cls");
			int n;
			cout << "Introduce el numero a eliminar: ";
			cin >> n;
			op->eliminar(n);
			break;
		}
		case 5:
		{
			int num;
			cout << "Introduce el numero a buscar: ";
			cin >> num;
			op->Buscar(num);
			break;
		}
	
		default:
			break;
		}
		cout << "\nDEsea realizar Otra operacion 1:si\n";
		cin >> repmenu;
	} while (repmenu == 1);



	system("pause");
    return 0;

 }
