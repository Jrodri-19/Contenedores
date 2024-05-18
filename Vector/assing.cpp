// asignación de vector
#include <iostream>
#include <vector>

int main ()
{
	std::vector<int> primero;
	std::vector<int> segundo;
	std::vector<int> tercero;
	
	primero.assign(7, 100);           // 7 enteros con un valor de 100
	
	std::vector<int>::iterator it;
	it = primero.begin() + 1;
	
	segundo.assign(it, primero.end() - 1); // los 5 valores centrales de primero
	
	int misenteros[] = {1776, 7, 4};
	tercero.assign(misenteros, misenteros + 3); // asignando desde el arreglo.
	
	std::cout << "Tamaño de primero: " << int(primero.size()) << '\n';
	std::cout << "Tamaño de segundo: " << int(segundo.size()) << '\n';
	std::cout << "Tamaño de tercero: " << int(tercero.size()) << '\n';
	return 0;
}
