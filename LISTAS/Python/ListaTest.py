#Sumar elementos de una lista
#Eliminar un valor en especifico
#Invertir lista
#Contar ocurrencias

lista = [1,2,3,4,5,6,7,9,10]
dic = {}
sum = 0

for x in lista:
    sum = sum + x

print(lista)
print(f"El resultado es: {sum}")
lista2 = lista.pop(2)
print(f"Se elimina el valor 3 de la lista {lista}")

lista.reverse()
print(lista)

print(f"El numero 5 aparce {lista.count(5)} veces")

    