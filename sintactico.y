%{	
	#include <stdio.h>
	int yystopparser=0;
%}

%token ENTERO
%token FLOTANTE
%token CADENA
%token BOOLEANO
%token TOKEN_CADENA_TRES
%token IDENTIFICADOR
%token TOKEN_IF
%token TOKEN_ELSE
%token TOKEN_ELIF
%token PARENTESIS_INICIO
%token PARENTESIS_FINAL
%token SALTO_LINEA
%token TOKEN_INPUT
%token TOKEN_RAW_INPUT
%token TOKEN_PRINT
%token COMA
%token IN
%token DOS_PUNTOS
%token CORCHETE_INICIO
%token CORCHETE_FINAL
%token LLAVE_INICIAL
%token LLAVE_FINAL
%token GATO
%token TOKEN_FOR
%token COMENTARIO_TEXTO
%token OPERADOR_SUMA
%token OPERADOR_MULT
%token OPERADOR_RESTA
%token OPERADOR_DIVISION
%token OPERADOR_EXPONENCIAL
%token OPERADOR_DIVISION_ENTERA
%token OPERADOR_MODULO
%token OPERADOR_IGUAL
%token OPERADOR_MAS_IGUAL
%token OPERADOR_MENOS_IGUAL 
%token OPERADOR_DIVISION_IGUAL 
%token OPERADOR_DIVISION_ENTERA_IGUAL
%token OPERADOR_MULT_IGUAL
%token UN_PUNTO
%token TOKEN_WHILE
%token COMPARADOR_MENOR_IGUAL
%token COMPARADOR_NOT_IGUAL
%token COMPARADOR_MAYOR
%token COMPARADOR_MENOR
%token COMPARADOR_IGUAL
%token COMPARADOR_MAYOR_IGUAL
%token TOKEN_BREAK
%token TOKEN_CONTINUE
%start programa

%%

programa	:	grupo_de_sentencias
			|	
			;	
				
grupo_de_sentencias		: 	sentencia
						| 	sentencia grupo_de_sentencias 			
						;
						
sentencia 				: 	asignacion 
						| 	if 			
						| 	entrada 						
						| 	salida 					
						|	comentario					
						|   ciclo						
						|   control_flujo				
						|	funcion						
						|	SALTO_LINEA
						;		
						
asignacion	:	asignacion_simple 
			| 	asignacion_multiple 
			;
			
asignacion_simple	:	IDENTIFICADOR simbolo_asignacion asignacion_simple_lado_derecho
					;
					
asignacion_simple_lado_derecho	: 	dato 
								|	IDENTIFICADOR
								|	IDENTIFICADOR UN_PUNTO funcion
								|	operacion_aritmetica
								|	condicion
								;
								
simbolo_asignacion	:	OPERADOR_IGUAL
					|	OPERADOR_MAS_IGUAL 
					|	OPERADOR_MENOS_IGUAL 
					|	OPERADOR_DIVISION_IGUAL 
					|	OPERADOR_DIVISION_ENTERA_IGUAL
					|	OPERADOR_MULT_IGUAL
					;
					
dato	:	entrada	
		|	ENTERO
		| 	FLOTANTE
		|   BOOLEANO
		|	CADENA
		|	funcion	
		|	lista	
		|	diccionario	
		| 	tupla				
		;
										
asignacion_multiple 	: 	grupo_de_identificadores OPERADOR_IGUAL grupo_de_datos
						;
						
grupo_de_identificadores 	:  IDENTIFICADOR 
						    |  IDENTIFICADOR COMA grupo_de_identificadores
							;

grupo_de_datos 	:   grupo_de_datos_lado_izquierdo
				|  	grupo_de_datos_lado_izquierdo grupo_de_datos_lado_derecho
				

grupo_de_datos_lado_izquierdo	:   IDENTIFICADOR
								|   dato
								|	operacion_aritmetica						
								;
								
grupo_de_datos_lado_derecho	:	COMA grupo_de_datos
							;			
								
operacion_aritmetica	:	operacion_aritmetica_lado_izquierdo	operacion_aritmetica_lado_derecho

operacion_aritmetica_lado_izquierdo	:	IDENTIFICADOR simbolo_operacion
									|	dato simbolo_operacion
									;
									
operacion_aritmetica_lado_derecho	:	IDENTIFICADOR	
									|	dato	
									|	operacion_aritmetica	
									;										
									
simbolo_operacion	:	OPERADOR_SUMA
					| 	OPERADOR_MULT
					| 	OPERADOR_RESTA
					|	OPERADOR_DIVISION
					| 	OPERADOR_EXPONENCIAL
					| 	OPERADOR_DIVISION_ENTERA
					| 	OPERADOR_MODULO
					;
					
diccionario	:	diccionario_lado_izquierdo diccionario_lado_derecho
			;
			
diccionario_lado_izquierdo	:	LLAVE_INICIAL
							;
							
diccionario_lado_derecho	:	LLAVE_FINAL	
							| 	SALTO_LINEA valores_diccionario LLAVE_FINAL	
							| 	valores_diccionario LLAVE_FINAL	
							;				

valores_diccionario	:	valor_diccionario valores_diccionario_derecho
					;						

valores_diccionario_derecho	:	
							|	SALTO_LINEA
							|	COMA SALTO_LINEA valores_diccionario
							|	COMA valores_diccionario
							;	
					
valor_diccionario	:	CADENA DOS_PUNTOS dato
					;
					
lista	:	CORCHETE_INICIO grupo_de_datos CORCHETE_FINAL
        ;			
			
entrada	:	entrada_lado_izquierdo entrada_lado_derecho 
		;
		
entrada_lado_izquierdo	:	TOKEN_INPUT	PARENTESIS_INICIO 
						|	TOKEN_RAW_INPUT PARENTESIS_INICIO
						;

entrada_lado_derecho	:	PARENTESIS_FINAL 
						| 	CADENA PARENTESIS_FINAL 
						;					
		
if	:	TOKEN_IF condicion DOS_PUNTOS
	|	TOKEN_IF IDENTIFICADOR	IN tupla DOS_PUNTOS	
	|	if grupo_de_sentencias		
	|	if grupo_de_sentencias elif
	|	if grupo_de_sentencias elif else
	;
	
funcion	:	funcion_lado_izquierdo funcion_lado_derecho;
		
funcion_lado_izquierdo	:	IDENTIFICADOR PARENTESIS_INICIO			
						;

funcion_lado_derecho	:	grupo_de_datos PARENTESIS_FINAL 
						| 	PARENTESIS_FINAL 
						;						
						
tupla	:	PARENTESIS_INICIO grupo_de_datos PARENTESIS_FINAL
		;		
		
condicion	:	condicion_lado_izquierdo condicion_lado_derecho
			
condicion_lado_izquierdo	:	IDENTIFICADOR 
							| 	dato 
							;			

condicion_lado_derecho	:	
						|	simbolo_comparador IDENTIFICADOR
						|	simbolo_comparador dato
						;		
							
simbolo_comparador	:	COMPARADOR_MENOR 
					| 	COMPARADOR_IGUAL 
					| 	COMPARADOR_MENOR_IGUAL 
					| 	COMPARADOR_NOT_IGUAL 
					| 	COMPARADOR_MAYOR
					|	COMPARADOR_MAYOR_IGUAL
					;
	
elif	:	elif_lado_izquierdo elif_lado_derecho;

elif_lado_izquierdo	: 	TOKEN_ELIF
					;
					
elif_lado_derecho	:	condicion DOS_PUNTOS grupo_de_sentencias					
					|	IDENTIFICADOR IN tupla DOS_PUNTOS grupo_de_sentencias
					|	condicion DOS_PUNTOS grupo_de_sentencias elif
					;
		
else	:	TOKEN_ELSE DOS_PUNTOS grupo_de_sentencias
		;
				
salida	:	salida_lado_izquierdo salida_lado_derecho;

salida_lado_izquierdo	:	TOKEN_PRINT	CADENA
						|	TOKEN_PRINT	IDENTIFICADOR
						|	TOKEN_PRINT funcion
						;		
		
salida_lado_derecho	:	
					|	salida_lado_derecho_1 salida_lado_derecho
					|	salida_lado_derecho_2 salida_lado_derecho
					;

salida_lado_derecho_1	:	COMA	IDENTIFICADOR
						|	COMA	dato
						|   COMA    identificador_array
						;
						
salida_lado_derecho_2	: 	OPERADOR_SUMA IDENTIFICADOR
						|	OPERADOR_SUMA funcion
						|   OPERADOR_SUMA CADENA
						;
						
identificador_array	:	IDENTIFICADOR CORCHETE_INICIO IDENTIFICADOR CORCHETE_FINAL
					;
					
comentario	:	comentario_linea
			|	comentario_multilinea						
			;
			
comentario_linea	:	COMENTARIO_TEXTO	
					;
comentario_multilinea	:	TOKEN_CADENA_TRES
						;

ciclo	:	for 
		| 	while 
		;

for	:	for_lado_izquierdo for_lado_derecho
	|	for grupo_de_sentencias
	;

for_lado_izquierdo	: 	TOKEN_FOR IDENTIFICADOR			
					;
					
for_lado_derecho	:	IN IDENTIFICADOR DOS_PUNTOS 
					| 	IN funcion DOS_PUNTOS 
					| 	COMA IDENTIFICADOR IN IDENTIFICADOR DOS_PUNTOS 
					;					
					
while	:	TOKEN_WHILE condicion DOS_PUNTOS
		|	while grupo_de_sentencias
		;		
		
control_flujo	:	break								
				|   continue					
				;		
						
break	:	TOKEN_BREAK
		|	TOKEN_BREAK SALTO_LINEA
		;

continue	:	TOKEN_CONTINUE
			|	TOKEN_CONTINUE SALTO_LINEA
			;

		
%%