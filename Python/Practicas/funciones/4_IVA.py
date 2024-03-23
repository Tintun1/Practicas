plata = int(input("Ingrese la cantidad a pagar:"))
iva_quest = input("Quiere agregar un IVA personalisado? (s/n):")

if iva_quest.lower() == "s":
    iva_bool = True
if iva_quest.lower() == "n":
    iva_bool = False


def factura_iva(plata,iva=21):
    iva = iva / 100
    factura = plata + (plata * iva)
    print("Factura sin iva: %d"%(plata))
    print("Factura con iva: %d"%(factura))

if iva_bool == True:
    iva = int(input("Ingrese porcentaje de iva sin %:"))
    factura_iva(plata,iva=iva)
elif iva_bool == False:
    factura_iva(plata)
