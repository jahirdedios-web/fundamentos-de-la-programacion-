Algoritmo OperacionesDosNumeros
	Definir num1, num2, resultado Como Real
	Escribir 'Ingrese el primer número:'
	Leer num1
	Escribir 'Ingrese el segundo número:'
	Leer num2
	Si num1=num2 Entonces
		resultado <- num1*num2
	SiNo
		Si num1>num2 Entonces
			resultado <- num1-num2
		SiNo
			resultado <- num1+num2
		FinSi
	FinSi
	Escribir 'El resultado es: ', resultado
FinAlgoritmo
