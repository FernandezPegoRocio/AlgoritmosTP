@echo off
g++ -std=c++17 -Wall -I.\include -c .\src\Animal.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Articulo.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\CarneFresca.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Cliente.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Empleado.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Inventario.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Orden.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Persona.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Pollo.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Vaca.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\Cerdo.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\UkeleleChicken.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\AltaMilanga.cpp
g++ -std=c++17 -Wall -I.\include -c .\src\main.cpp
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I.\include Animal.o Articulo.o CarneFresca.o Cliente.o Empleado.o Inventario.o Orden.o Persona.o Pollo.o Vaca.o Cerdo.o UkeleleChicken.o AltaMilanga.o main.o -o app.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el programa
app.exe
pause