estado_pulsador = 1
estado_potenciometro = int(input("Ingrese estado de potenciometro:"))
estado_led = 0


if estado_pulsador == 1 and estado_potenciometro < 255:
    print("Tema matematica")
elif estado_pulsador == 1 and estado_potenciometro >= 255 and estado_potenciometro < 509:
    print("Tema historia")
else:
    print("Apagado")