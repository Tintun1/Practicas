nombre = input("Ingrese un nombre y un numero: ")
nombre = nombre.split(" ")

i = 0
while int(nombre[1]) > i:
    print(nombre[0])
    i += 1