def busqueda_lineal(lista, objetivo):
    for i in range(len(lista)):
        if lista[i] == objetivo:
            return i
    return -1

numeros = []
n = int(input("Ingrese la cantidad de números en la lista: "))
for i in range(n):
    numero = int(input(f"Ingrese el número {i+1}: "))
    numeros.append(numero)

objetivo = int(input("Ingrese el número objetivo: "))

posicion = busqueda_lineal(numeros, objetivo)

if posicion != -1:
    print(f"El número {objetivo} se encuentra en la posición {posicion}.")
else:
    print(f"El número {objetivo} no está presente en la lista.")
