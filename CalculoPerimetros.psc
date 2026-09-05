Algoritmo  CalculoPerimetros
    Definir opcion, lado, radio, perimetro Como Real
    Escribir "Seleccione una opción:"
    Escribir "1. Cuadrado"
    Escribir "2. Triángulo equilátero"
    Escribir "3. Círculo"
    Leer opcion
    Segun opcion Hacer
        1:
            Escribir "Ingrese el lado del cuadrado:"
            Leer lado
            perimetro <- 4 * lado
            Escribir "El perímetro del cuadrado es: ", perimetro
			
        2:
            Escribir "Ingrese el lado del triángulo equilátero:"
            Leer lado
            perimetro <- 3 * lado
            Escribir "El perímetro del triángulo equilátero es: ", perimetro
			
        3:
            Escribir "Ingrese el radio del círculo:"
            Leer radio
            perimetro <- 2 * 3.1416 * radio
            Escribir "El perímetro del círculo es: ", perimetro
			
        De Otro Modo:
            Escribir "error"
    FinSegun
FinProceso
