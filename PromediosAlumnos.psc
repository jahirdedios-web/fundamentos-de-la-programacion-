Función promedio <- CalcularPromedio(c1,c2,c3)
	promedio <- (c1+c2+c3)/3
FinFunción

Algoritmo PromediosAlumnos
	Definir a1c1, a1c2, a1c3 Como Real
	Definir a2c1, a2c2, a2c3 Como Real
	Definir promedio1, promedio2 Como Real
	Escribir 'Alumno 1:'
	Escribir 'Ingrese calificación 1:'
	Leer a1c1
	Escribir 'Ingrese calificación 2:'
	Leer a1c2
	Escribir 'Ingrese calificación 3:'
	Leer a1c3
	promedio1 <- CalcularPromedio(a1c1,a1c2,a1c3)
	Escribir 'Promedio del alumno 1: ', promedio1
	Escribir ''
	Escribir 'Alumno 2:'
	Escribir 'Ingrese calificación 1:'
	Leer a2c1
	Escribir 'Ingrese calificación 2:'
	Leer a2c2
	Escribir 'Ingrese calificación 3:'
	Leer a2c3
	promedio2 <- CalcularPromedio(a2c1,a2c2,a2c3)
	Escribir 'Promedio del alumno 2: ', promedio2
FinAlgoritmo
