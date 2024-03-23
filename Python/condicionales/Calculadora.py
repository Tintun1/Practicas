condicion = input("Quieres comenzar? (s/n)\n")
a = int(input("ingrese primer valor: \n"))
operacion = input("ingrese la operacion: \n")
b = int(input("ingrese segundo valor: \n"))

while condicion == "s":
    if operacion == "+":
        total = a + b
        resultado = f"El resultado es igual a: {total}"
        print(resultado)
    elif operacion == "-":
        total = a - b
        resultado = f"El resultado es igual a: {total}"
        print(resultado)
    elif operacion == "/":
        total = a // b
        resultado = f"El resultado es igual a: {total}"
        print(resultado)
    elif operacion == "*":
        total = a * b
        resultado = f"El resultado es igual a: {total}"
        print(resultado)
    elif operacion == "**":
        total = a ** b
        resultado = f"El resultado es igual a: {total}"
        print(resultado)
    else:
        print("operador invalido")
    condicion = input("Quieres continuar? (s/n)\n")
