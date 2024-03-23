payaso_peso_g = 112
muñeca_peso_g = 75

cantidad_vendida_payasos = int(input("Ingrese cantidad de payasos vendidos: \n"))
cantidad_vendida_muñecas = int(input("Ingrese cantidad de muñecas vendidas: \n"))

peso_total_de_payasos_vendidos = payaso_peso_g * cantidad_vendida_payasos
peso_total_de_muñecas_vendidas = muñeca_peso_g * cantidad_vendida_muñecas

peso_total_g = peso_total_de_muñecas_vendidas + peso_total_de_payasos_vendidos

if peso_total_g <= 1000:
    total = peso_total_g
    print("Se han vendido %dg en total"%total)
if peso_total_g >= 1000 and peso_total_g < 1000000:
    peso_total_kg = peso_total_g / 1000
    total = peso_total_kg
    print("Se han vendido %dKg en total"%total)
if peso_total_g >= 1000000:
    peso_total_kg = peso_total_g / 1000
    peso_total_tl = peso_total_kg / 1000
    total = peso_total_tl
    print("Se han vendido %d toneladas en total"%total)
