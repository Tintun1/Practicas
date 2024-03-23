contraseña = "silhuanterin2135"
intentos = 4
while intentos > 0:
    contraseña_introducida = input("Ingrese contraseña\n")
    if contraseña_introducida.lower() == contraseña:
        print("Contraseña correcta!")
        intentos = 0
    else:
        print("Contraseña incorrecta!")
        intentos -= 1
        if intentos == 1:
            print("Te queda %d intento"%intentos)
        else:
            print("Te quedan %d intentos" %intentos)
        print("---------------------")