numero = int(input("Ingrese numero:"))
impar = 0
while impar <= numero:
    if impar % 2 != 0:
        print(impar, end=", ")
    impar += 1