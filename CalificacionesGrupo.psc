algoritmo CalificacionesGrupo
    Definir c1, c2, c3, promedioAlumno Como Real
    Definir sumaGeneral Como Real
    Definir contadorAlumnos Como Entero
    Definir continuar Como Caracter
    sumaGeneral <- 0
    contadorAlumnos <- 0
    continuar <- "S"
    Mientras continuar = "S" Hacer
        Escribir "Ingrese la calificación del parcial 1:"
        Leer c1
        Escribir "Ingrese la calificación del parcial 2:"
        Leer c2
        Escribir "Ingrese la calificación del parcial 3:"
        Leer c3
        promedioAlumno <- (c1 + c2 + c3) / 3
        Escribir "Promedio del alumno: ", promedioAlumno
        sumaGeneral <- sumaGeneral + promedioAlumno
        contadorAlumnos <- contadorAlumnos + 1
        Escribir "¿Desea capturar otro alumno? (S/N)"
        Leer continuar
        continuar <- Mayusculas(continuar)
    FinMientras
    Si contadorAlumnos > 0 Entonces
        Escribir "Promedio general del grupo: ", sumaGeneral / contadorAlumnos
    Sino
        Escribir "No se capturaron alumnos."
    FinSi
FinAlgoritmo

