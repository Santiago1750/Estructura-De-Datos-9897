#include <iostream>
#include <list>

int main() {
  std::list<int> numeros; // Crear una lista vacía de enteros

  // Agregar elementos a la lista
  numeros.push_back(10);
  numeros.push_back(20);
  numeros.push_back(30);
  numeros.push_front(5);

  // Mostrar los elementos de la lista
  std::cout << "Elementos de la lista: ";
  for (const auto& numero : numeros) {
    std::cout << numero << " ";
  }
  std::cout << std::endl;

  // Obtener el tamaño de la lista
  std::cout << "Tamaño de la lista: " << numeros.size() << std::endl;

  // Eliminar un elemento de la lista
  numeros.remove(20);

  // Verificar si la lista está vacía
  if (numeros.empty()) {
    std::cout << "La lista está vacía." << std::endl;
  } else {
    std::cout << "La lista no está vacía." << std::endl;
  }

  return 0;
}
