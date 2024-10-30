#!/bin/bash

# Compilación de los archivos fuente en archivos objeto
g++ -std=c++17 -Wall -I./include -c ./src/Article.cpp 
g++ -std=c++17 -Wall -I./include -c ./src/Customer.cpp 
g++ -std=c++17 -Wall -I./include -c ./src/Order.cpp 
g++ -std=c++17 -Wall -I./include -c main.cpp 

# Enlazado de los archivos objeto en el ejecutable
g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Article.o Customer.o Order.o main.o -o app.exe

# Limpieza de archivos objeto
rm ./*.o

# Permiso de ejecución para el archivo resultante
chmod +x app.exe

# Ejecución del programa
./app.exe
