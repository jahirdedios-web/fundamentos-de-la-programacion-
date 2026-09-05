Algoritmo NotasEstudiante
	Definir N, nota Como Real
	Definir aprobadas, desaprobadas Como Entero
	Definir sumaTotal, sumaAprobadas, sumaDesaprobadas Como Real
	aprobadas <- 0
	desaprobadas <- 0
	sumaTotal <- 0
	sumaAprobadas <- 0
	sumaDesaprobadas <- 0
	Escribir 'Ingrese la cantidad de notas:'
	Leer N
	Para i<-1 Hasta N Con Paso 1 Hacer
		Escribir 'Ingrese la nota ', i, ':'
		Leer nota
		sumaTotal <- sumaTotal+nota
		Si nota>=6 Entonces
			aprobadas <- aprobadas+1
			sumaAprobadas <- sumaAprobadas+nota
		SiNo
			desaprobadas <- desaprobadas+1
			sumaDesaprobadas <- sumaDesaprobadas+nota
		FinSi
	FinPara
	promedioGeneral <- sumaTotal/N
	Si aprobadas>0 Entonces
		promedioAprobadas <- sumaAprobadas/aprobadas
	SiNo
		promedioAprobadas <- 0
	FinSi
	Si desaprobadas>0 Entonces
		promedioDesaprobadas <- sumaDesaprobadas/desaprobadas
	SiNo
		promedioDesaprobadas <- 0
	FinSi
	Escribir '--------------------------------------'
	Escribir 'Notas aprobadas: ', aprobadas
	Escribir 'Notas desaprobadas: ', desaprobadas
	Escribir 'Promedio general: ', promedioGeneral
	Escribir 'Promedio de aprobadas: ', promedioAprobadas
	Escribir 'Promedio de desaprobadas: ', promedioDesaprobadas
	Escribir '--------------------------------------'
FinAlgoritmo
