"""Ilustracion de ingreso interactivo en Python.
Simula a sala de chat.
Validando datos de entradas numerico y tipo cadena.
E interactua con el usuario y en base a condicionales
muestra un mensaje."""

print "Simulando una Chat"

print "Chat De 20 a 30 anos"

print 'Raul: '
nombre = raw_input('Como te llamas?: ')
print 'Raul: Hola', nombre, ', encantado de conocerte'

print 'Raul: '
edad = input('Cual es tu edad?: ')
print 'Tu tienes', edad, 'y yo no tengo soy un programa xD'

print 'Raul: '
tiene_WebCam = raw_input('Te gusta el cafe?, ingrese "si" o "no", por favor!: ')

if tiene_WebCam in ('s', 'S', 'si', 'Si', 'SI'):
	print "Vamos a tomarnos uno"
elif tiene_WebCam in ('n', 'no', 'No', 'NO'):
	print "Lastima por ti, Adios"
