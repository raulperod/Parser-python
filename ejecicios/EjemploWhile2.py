print "\nWhile controlado con Evento"

print "Un ejemplo es calcular el promedio de grado, \ncomo se muestra a continuacion:\n"

promedio = 0.0
total = 0
contar = 0

print "Introduzca valor numerico de un grado: utilizar menos 1 para salir: "
grado = input()	
while grado != -1:
    total += grado
    contar += 1
    print "Introduzca valor numerico de un grado: utilizar menos 1 para salir: "
    grado = input()
promedio = total / contar
print "Promedio de grado: " + str(promedio)
