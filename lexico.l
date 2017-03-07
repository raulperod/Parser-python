%{
	#include <stdio.h>
	#include <conio.h>
	#include "y.tab.h"
	void yyerror(char *mensaje);		
%}
%option noyywrap
%option yylineno

DIGITO [0-9]
LETRA  [a-zA-Z]
CARACTER [a-zA-Z0-9_]
ESPACIO " "
DOSPUNTOS ":"
COMA_C ","
SALTOLINEA "\n"
INTERROGACION "?"
COMILLA_DOBLE "\""
COMILLA_SIMPLE "'"
EXCLAMACION "!"
PUNTO "."

%%
"=" 		  	 			{return(OPERADOR_IGUAL);}
"*"            				{return(OPERADOR_MULT);}
"+"            				{return(OPERADOR_SUMA);}
"-"            				{return(OPERADOR_RESTA);}
"/"            				{return(OPERADOR_DIVISION);}
"**" 		   	    		{return(OPERADOR_EXPONENCIAL);}
"//"		        		{return(OPERADOR_DIVISION_ENTERA);}
"%"			   				{return(OPERADOR_MODULO);}
"+="		       			{return(OPERADOR_MAS_IGUAL);}
"-="		       			{return(OPERADOR_MENOS_IGUAL);}
"/="		       			{return(OPERADOR_DIVISION_IGUAL);}
"//="		       			{return(OPERADOR_DIVISION_ENTERA_IGUAL);}
"*="		       			{return(OPERADOR_MULT_IGUAL);}
">"            	   			{return(COMPARADOR_MAYOR);}
"<"			   	   			{return(COMPARADOR_MENOR);}
">="		       			{return(COMPARADOR_MAYOR_IGUAL);}
"<="		       			{return(COMPARADOR_MENOR_IGUAL);}
"=="		       			{return(COMPARADOR_IGUAL);}
"!=" 			   			{return(COMPARADOR_NOT_IGUAL);}	
if	           				{return(TOKEN_IF);}
else           				{return(TOKEN_ELSE);}
elif		   				{return(TOKEN_ELIF);}
for			   				{return(TOKEN_FOR);}
while 		   				{return(TOKEN_WHILE);}
break						{return(TOKEN_BREAK);}
continue					{return(TOKEN_CONTINUE);}
"("			   				{return(PARENTESIS_INICIO);}
")"			   				{return(PARENTESIS_FINAL);}
"["   		   				{return(CORCHETE_INICIO);}
"]"			   				{return(CORCHETE_FINAL);}
"{"							{return(LLAVE_INICIAL);}
"}"							{return(LLAVE_FINAL);}
";"|"$"|"^"|"@"|"!"|"~"|"?"|"-"|"_"|"¬"|"°"	 {printf("\nerror syntax error\n");exit(-1);}
":"			   				{return(DOS_PUNTOS);}	
"\n"		   				{return(SALTO_LINEA);}
"#"			   				{return(GATO);}
","			   				{return(COMA);}
"."			   				{return(UN_PUNTO);}						
in			   				{return(IN);}
print		   				{return(TOKEN_PRINT);}
raw_input	   				{return(TOKEN_RAW_INPUT);}
input		   				{return(TOKEN_INPUT);}
{DIGITO}+  					{return(ENTERO);}
"-"({DIGITO}+)  			{return(ENTERO);}
True 						{return(BOOLEANO);}
False 						{return(BOOLEANO);}
{DIGITO}+"."{DIGITO}+ 		{return(FLOTANTE);} 
\"(({CARACTER}|{DIGITO}|{ESPACIO}|{DOSPUNTOS}|{COMA_C}|{SALTOLINEA}|{INTERROGACION}|{COMILLA_SIMPLE}|{PUNTO}|{EXCLAMACION}|"\\"n"")+)\"   {return(CADENA);}
\'(({CARACTER}|{DIGITO}|{ESPACIO}|{DOSPUNTOS}|{COMA_C}|{SALTOLINEA}|{INTERROGACION}|{COMILLA_DOBLE}|{PUNTO}|{EXCLAMACION}|"\\"n"")+)\'   {return(CADENA);}
\"\"\"(({CARACTER}|{DIGITO}|{ESPACIO}|{SALTOLINEA}|{DOSPUNTOS}|{COMA_C}|{PUNTO}|"\\"n"")+)\"\"\"   {return(TOKEN_CADENA_TRES);}
"#"({LETRA}|{CARACTER}|{DIGITO}|{ESPACIO})*{SALTOLINEA}  {return(COMENTARIO_TEXTO);}
{LETRA}({CARACTER}|{DIGITO})*  {return(IDENTIFICADOR);}


%%
int main(int argc,char *argv[]){
	
	if((yyin = fopen(argv[1], "rt")) == NULL) {
		printf("\nNo se puede abrir el archivo: %s\n", argv[1]);
	}else{
		//yylex();
		yyparse();
	}
	
	fclose(yyin);
	printf("\nSINTAXIS_EXITOSA\n");
	return 0;
}
void yyerror(char *mensaje){
	printf ("\nerror %s\n", mensaje);
	exit(-1);
}