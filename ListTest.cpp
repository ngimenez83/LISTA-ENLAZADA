#include <iostream>
#include "List.cpp"
#include <cassert>


using namespace std;

int main(){	
	List l;
	AgregarOrdenado(l,3);
	AgregarOrdenado(l,4);
	AgregarOrdenado(l,5);
	AgregarOrdenado(l,6);
	ImprimirLista(l);
}
