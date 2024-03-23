# Datos de tipo "lista" (se puede modificar)
lista = ["aram","saul",11,True]

# Datos de tipo "tupla" (no se puede modificar)
tupla = ("aram","saul",11,True)

# Esto es valido
lista[3] = "Lescano"

# Esto no
# tupla[3] = "Lescano"

# Datos de tipo "set" (conjunto) ( no se puede llamar los datos por su indice, y no almacena datos duplicados)
conjunto = {"aram","saul",11,True}

# Datos de tipo "dict" (diccionario)
diccionario = {
    # 'Key'  : "Value",
    'nombre' : "saul",
    'canal' : "garry",
    'mono' : True,
    'porcentaje_activo' : 97
}
# Forma de llamarlo
# print(diccionario['Key'])