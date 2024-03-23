cadena1 = "Agarramela que se cae"
cadena2 = "Saul roblox"

#TODO: Como escribir metodos     //   dato.metodo(parametro)   //     (el parametro es opcional)

upper = cadena1.upper() #? el metodo upper convierte toda la cadena en mayuscula

lower = cadena1.lower() #? el metodo upper convierte toda la cadena en minuscula

capitalize = cadena1.capitalize() #? Convierte la primera letra en mayuscula

find = cadena1.find("5") #? Busca el parametro indicado y muestra su posicion
#!                            en caso de no encontrar devuelve -1

index = cadena1.index("g") #? Busca el parametro indicado y muestra su posicion
#!                            en caso de no encontrar devuelve un excepcion

insnumeric = cadena1.isnumeric() #? si es numerico devuelve un true, caso contrario un false

isalpha = cadena1.isalpha() #? si es alfanumerico devuelve un true, caso contrario un false
#!                             solo caracteres de la  "A" a la "Z"

count = cadena1.count("e") #? cuenta la cantidad de coincidencias en una cadena

len = len(cadena1) #? cuenta la cantidad de caracteres en una cadena

starswitch = cadena1.startswith("A") #? verifica si la cadena inicia con el parametro dado, devuelve true o false

endswitch = cadena1.endswith("e") #? verifica si la cadena termina con el parametro dado, devuelve true o false

replace = cadena1.replace(" ","_") #? reemplaza una parte de la cadena
#!                  ("old_part","new_part")

split = replace.split("_") #? separa las cadenas
#TODO:  replace = Agarramela_que_se_cae
#*Resultado: ['Agarramela', 'que', 'se', 'cae'] (lo convierte en una lista)

dir = dir(cadena1) #! muestra los metodos

print(upper)