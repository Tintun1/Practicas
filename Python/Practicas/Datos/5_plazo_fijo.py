dinero = float(input("Ingrese el dinero que quiere ingresar a plazo fijo: "))
interes_anual = input("\nIngrese cual es su interes anual: ")
tiempo = int(input("\nPor cuantos años va a tener el dinero en plazo fijo: "))
interes_anual_finddot = interes_anual.find(".")
interes_anual_findcom = interes_anual.find(",")
if interes_anual_finddot != -1:
    interes_anual = interes_anual.replace(".","")
elif interes_anual_findcom != -1:
    interes_anual = interes_anual.replace(",","")

interes_anual = int(interes_anual)
interes_anual = interes_anual * tiempo
interes_anual = str(interes_anual)
porcentaje = "1." + interes_anual
porcentaje = float(porcentaje)


total = porcentaje * dinero

print(total)
