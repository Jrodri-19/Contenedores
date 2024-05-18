// construyendo vectores
#include <iostream>
#include <vector>

int main ()
{
	// constructores usados en el mismo orden que se describen arriba:
	std::vector<int> primero;                              // vector vacío de enteros
	std::vector<int> segundo (4, 100);                     // cuatro enteros con valor 100
	std::vector<int> tercero (segundo.begin(), segundo.end()); // iterando a través de segundo
	std::vector<int> cuarto (tercero);                     // una copia de tercero
	
	// el constructor con iteradores también se puede usar para construir a partir de arreglos:
	int misenteros[] = {16, 2, 77, 29};
	std::vector<int> quinto (misenteros, misenteros + sizeof(misenteros) / sizeof(int) );
	
	std::cout << "El contenido de quinto es:";
	for (std::vector<int>::iterator it = quinto.begin(); it != quinto.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	
	return 0;
}
