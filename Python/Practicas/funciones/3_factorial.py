numero = int(input("Ingrese numero:"))

def factorial(n):
    facto_aux = 0
    for i in range(n+1):
        facto_aux = facto_aux + i
        print("%d:%d"%(i, facto_aux))
    print("Resultado = %d"%(facto_aux))

factorial(numero)