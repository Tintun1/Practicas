n = input("Ingrese numero:")
aux = [1]
for i in range(1,int(n)+1,2):
    aux.append(i)
    print (aux[-i])