lista = list(["saul","nivel",34])

len = len(lista) #? Imprime la cantidad de elementos de una lista

lista.append("arriba") #? Añade un elemento a la lista

lista.insert(1,"queso") #? añade un elemento a la lista indicando un indice
#!      ( indice , elemento )

lista.extend(["ñeri",False,56]) #? agrega varios elementos a una lista

lista.pop(5) #? Elimina elementos de una lista indicando su indice
#! Se puede eliminar desde atras tambien usando -(numero) por ejemplo el "-1" (elimina el ultimo elemento)

lista.remove(34) #? Elimina elemento por su nombre o valor
#! En caso de que no exista lanza una excepcion

lista.clear() #? Elimina todos los elementos de la lista


print(len)