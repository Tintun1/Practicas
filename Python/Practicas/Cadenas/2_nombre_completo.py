nombre = input("Ingrese nombre completo: ")
nombre_minuscula = nombre.lower()
print(nombre_minuscula)
nombre_mayuscula = nombre.upper()
print(nombre_mayuscula)
nombre_apellido = nombre.split(" ")
len = len(nombre_apellido)
if len == 3:
    nombre = nombre_apellido[0].capitalize()
    apellido1 = nombre_apellido[1].capitalize()
    apellido2 = nombre_apellido[2].capitalize()
    print("%s %s %s"%(nombre, apellido1, apellido2))
elif len == 2:
    nombre = nombre_apellido[0].capitalize()
    apellido1 = nombre_apellido[1].capitalize()
    print("%s %s"%(nombre, apellido1))