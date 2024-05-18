#include <vector>
#include <iostream>
#include <initializer_list>

int main() {
	// Utilizando `n` y `val`
	std::vector<int> vec1(5, 10); // Crea un vector con 5 elementos, todos inicializados a 10
	
	// Iteradores `first` y `last`
	int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> vec2(arr, arr + 5); // Crea un vector a partir del arreglo
	
	// Utilizando otro vector `x`
	std::vector<int> vec3(vec2); // Crea un vector copiando `vec2`
	
	// Utilizando `initializer_list`
	std::vector<int> vec4 = {1, 2, 3, 4, 5}; // Crea un vector usando lista de inicialización
	
	// Imprimir los vectores
	for (int val : vec1) std::cout << val << " ";
	std::cout << std::endl;
	
	for (int val : vec2) std::cout << val << " ";
	std::cout << std::endl;
	
	for (int val : vec3) std::cout << val << " ";
	std::cout << std::endl;
	
	for (int val : vec4) std::cout << val << " ";
	std::cout << std::endl;
	
	return 0;
}
