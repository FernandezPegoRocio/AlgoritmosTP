@echo off
REM Compilación de los archivos de código fuente
g++ -std=c++17 -Wall -I.\include -c .\src\Estudiante.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\admiEstudiantes.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\main.cpp

REM Enlazado de los archivos objeto para crear el ejecutable
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I.\include Estudiante.o admiEstudiantes.o main.o -o app.exe

REM Limpio los códigos objeto
DEL .\*.o

REM Ejecuto el programa
app.exe
pause
