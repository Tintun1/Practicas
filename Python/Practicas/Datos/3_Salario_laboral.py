horas_trabajadas = int(input("Cuantas horas trabaja?\n"))
salario_por_hora = int(input("\nCuanto es su salario por hora?\n"))

salario_total = horas_trabajadas * salario_por_hora

print("\nSe le deberia de pagar %d$ que corresponden a sus %d horas de trabajo"%(salario_total, horas_trabajadas))