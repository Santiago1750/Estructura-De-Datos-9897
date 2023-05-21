# Crear una lista vacía
mi_lista = []

# Agregar elementos a la lista
mi_lista.append("Manzana")
mi_lista.append("Banana")
mi_lista.append("Cereza")

# Acceder a un elemento de la lista por su índice
print(mi_lista[0])  # Imprime "Manzana"

# Modificar un elemento de la lista
mi_lista[1] = "Naranja"

# Recorrer la lista e imprimir cada elemento
for fruta in mi_lista:
    print(fruta)

# Obtener la longitud de la lista
longitud = len(mi_lista)
print("La longitud de la lista es:", longitud)

# Verificar si un elemento está en la lista
if "Cereza" in mi_lista:
    print("La cereza está en la lista")

# Eliminar un elemento de la lista
mi_lista.remove("Manzana")

# Ordenar la lista alfabéticamente
mi_lista.sort()

# Imprimir la lista completa
print(mi_lista)

