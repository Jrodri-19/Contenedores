// vector::at
#include <iostream>
#include <vector>

int main ()
{
	std::vector<int> miVector (10);   // 10 enteros inicializados a cero
	
	// asignar algunos valores:
	for (unsigned i = 0; i < miVector.size(); i++)
		miVector.at(i) = i;
	
	std::cout << "miVector contiene:";
	for (unsigned i = 0; i < miVector.size(); i++)
		std::cout << ' ' << miVector.at(i);
	std::cout << '\n';
	// Intentar acceder a un elemento fuera de rango
	try {
		std::cout << "Intentando acceder a miVector.at(20): ";
		std::cout << miVector.at(20) << '\n'; // Esto lanzará una excepción
	} catch (const std::out_of_range& e) {
		std::cerr << "Excepción capturada: " << e.what() << '\n';
	}
	
	return 0;

}
