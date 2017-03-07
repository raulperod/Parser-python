# Bucles for con Diccionarios

print "Itera un diccionario datos basicos"

datos_basicos = { 
	"nombres":"Leonardo Jose",
    "apellidos": "Caballero Garcia",
    "cedula":    "14522590",
    "fecha_nacimiento":  "03121980",
    "lugar_nacimiento":  "Maracaibo, Zulia, Venezuela",
    "nacionalidad":  "Venezolana",
    "estado_civil":  "Complicado" 
}

dato = datos_basicos.keys()
valor = datos_basicos.values()
cantidad_datos = datos_basicos.items()

for dato, valor in cantidad_datos:
    print dato + ": " + valor
