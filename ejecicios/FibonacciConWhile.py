#Sucesion de numeros Fibonacci

a, b = 0, 1 
# a igual 0 y b igual 1
while b < 100:
    print b + " "
    a, b = b, a + b 
	# a igual b 
	# b igual a mas b
