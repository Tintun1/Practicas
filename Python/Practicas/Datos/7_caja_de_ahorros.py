interes_anual = 1.4
deposito = int(input("Ingrese la cantidad de su deposito: \n"))

primer_año = 1 * interes_anual
segundo_año = 2 * interes_anual
tercer_año = 3 * interes_anual

print("Ahorro ganado en el primer año: %d"%(primer_año * deposito))
print("Ahorro ganado en el segundo año: %d"%(segundo_año * deposito))
print("Ahorro ganado en el tercer año: %d"%(tercer_año * deposito))
