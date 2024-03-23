
#todo: El grupo A esta formado por
#? las mujeres con un nombre anterior a la M
#? los hombres con un nombre posterior a la N y el grupo B por el resto
#todo: El grupo b por el resto

nombre = input("Ingrese su nombre: ")
nombre = nombre.lower()
sexo = input("Ingrese su sexo(f/m): ")
sexo = sexo.lower()

if sexo == "f":
    if nombre[:1] < "m":
        print("Perteneces a grupo A")
    else:
        print("Perteneces a grupo B")

if sexo == "m":
    if nombre[:1] < "n" and sexo == "m":
        print("Perteneces a grupo A")
    else:
        print("Perteneces a grupo B")