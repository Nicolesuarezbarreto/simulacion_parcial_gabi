@echo off
setlocal

rem Compilar archivos de objeto
g++ -std=c++17 -Wall -Iinclude -c src/Article.cpp -o Article.o
g++ -std=c++17 -Wall -Iinclude -c src/Customer.cpp -o Customer.o
g++ -std=c++17 -Wall -Iinclude -c src/Order.cpp -o Order.o
g++ -std=c++17 -Wall -Iinclude -c main.cpp -o main.o

rem Enlazar y crear el ejecutable
g++ -std=c++17 -Wall Article.o Customer.o Order.o main.o -o app.exe

rem Limpiar archivos objeto
del *.o

rem Ejecutar el programa
app.exe

endlocal
