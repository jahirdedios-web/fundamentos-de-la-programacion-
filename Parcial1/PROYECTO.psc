Algoritmo sin_titulo
	Definir Alumno1, Alumno2, Alumno3 como caracter 
	Definir regresar como caracter
	Definir par1_1,par2_1,par3_1 como real 
	Definir par1_2,par2_2,par3_2 como real 
	Definir par1_3,par2_3,par3_3 como real 
	Definir prom1,prom2,prom3 como real 
	
	Regresar <- "a"
	Mientras Regresar = "a" Hacer
	Escribir " Menu de opciones: "
	Escribir "1.  Capturar datos: "
	Escribir "2. Mostrar promedios : " 
	Escribir "3. Mostrar el mejor promedio: "
	Escribir "4. Salir :"
	leer opcion
	Segun opcion Hacer
		1:
			Escribir " Nombre del alumno : "
			Leer Alumno1
			Escribir " Escribe tus notas : "
			Leer par1_1
			leer par1_2
			Leer par1_3
			prom1<-CalcularPromedio (par1_1, par1_2, par1_3)
			Escribir " Nombre del alumno : "
			Leer Alumno2
			Escribir " Escribe tus notas : "
			Leer par2_1
			leer par2_2
			Leer par2_3
			prom2<-CalcularPromedio (par2_1, par2_2, par2_3)
			Escribir " Nombre del alumno : "
			Leer Alumno3
			Escribir " Escribe tus notas : "
			Leer par3_1
			leer par3_2
			Leer par3_3
			prom2<-CalcularPromedio (par3_1, par3_2, par3_3)
		2:
			Escribir " El alumno ",Alumno1 " tiene promedio de : ", prom1
			Escribir " El alumno ",Alumno2 " tiene promedio de : ", prom2
			Escribir " El alumno ",Alumno3 " tiene promedio de : ", prom3
				
			
		3:
			Si prom1 = prom2 y prom1 = prom3 Entonces
				Escribir " Los alumnos : " , alumno1, alumno2 "y" alumno3, "OBTUVIERON UN PROMEDIO DE : ", prom1
			SiNo
				Si prom1 = prom2 entonces 
					Escribir " Los alumnos : " , alumno1 "y"  alumno2 , "OBTUVIERON UN PROMEDIO DE :", prom2
				Sino 
					si prom2 = prom3 entonces 
						Escribir  " Los alumnos : " , alumno2 "y"  alumno3 , "OBTUVIERON UN PROMEDIO DE :", prom3
					sino
						si Prom1 > prom2 y prom1 > prom3 entonces 
							Escribir alumno1 , "tiene el mayor promedio de los 3 ", prom1
						SiNo
							si prom2 > prom1 y prom2> prom3 entonces 
								Escribir alumno2 " Tiene el mayor promedio de los 3", prom2
							SiNo
								si prom3> prom1 y prom3> prom2 entonces 
									Escribir alumno3 " tiene el mayor promedio de los 3 ", prom3
									
									
									
									
								
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			Fin Si
		4:
			Escribir "saliendo del programa"
			Regresar = "b"
		De Otro Modo:
			Escribir "error"
	Fin Segun
	FinMientras
	
	
	
FinAlgoritmo
SubProceso promedio <- CalcularPromedio(nota1, nota2, nota3)
	Definir promedio Como Real
	promedio <- (nota1 + nota2 + nota3) / 3
FinSubProceso
 