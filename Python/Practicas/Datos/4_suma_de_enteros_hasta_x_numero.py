numeroAux = 0
cantidad = 1
numeroX = int(input("Ingrese numero: "))
print("----------")
while cantidad < numeroX:
    numeroAux = numeroAux + cantidad
    cantidad = cantidad + 1
    print(numeroAux)
print("----------")
resultado = numeroAux + numeroX
print("Resultado: %d"%resultado)