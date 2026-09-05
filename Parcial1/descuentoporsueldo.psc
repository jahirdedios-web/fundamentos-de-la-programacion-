Algoritmo descuentoporsueldo
	Definir sueldo, descuento, adicional Como Real
	Escribir 'Ingrese el sueldo del trabajador:'
	Leer sueldo
	descuento <- 0
	Si sueldo<=1000 Entonces
		descuento <- sueldo*0.10
	SiNo
		// Descuento fijo de los primeros 1000
		descuento <- 1000*0.10
		Si sueldo<=2000 Entonces
			adicional <- sueldo-1000
			descuento <- descuento+adicional*0.05
		SiNo
			// Descuento de los siguientes 1000 (1000 a 2000)
			descuento <- descuento+1000*0.05
			// Descuento del adicional mayor a 2000
			adicional <- sueldo-2000
			descuento <- descuento+adicional*0.03
		FinSi
	FinSi
	Escribir 'El descuento total es: ', descuento
	Escribir 'El sueldo neto es: ', sueldo-descuento
FinAlgoritmo
