# Equipo-Maravilla-

BIBLIOTECA ESTÁTICA
Tutorial para usar la biblioteca estática:
1-. Clonar el repositorio 
2-. Crea el ejecutable ingresando en la terminal el comando: g++ .\B_poligonos\main.cc -o .\B_poligonos\prueba.exe -I .\B_poligonos\biblioteca -L .\B_poligonos\lib\estatica -lareas
3. Compila el ejecutable usando:.\B_poligonos\prueba.exe

NOTA: "prueba.exe" es el nombre del ejecutable por lo que puede cambiar a cualquier otro nombre de su preferencia. 

Comandos utilizados para compilar la biblioteca estática:
1. Creación de archivos .o
g++ -c .\prelib\cuadrado.cc -o .\objetos_estatica\cuadrado.o -I .\biblioteca
g++ -c .\prelib\poligono.cc -o .\objetos_estatica\poligono.o -I .\biblioteca
g++ -c .\prelib\rectangulo.cc -o .\objetos_estatica\rectangulo.o -I .\biblioteca
g++ -c .\prelib\rombo.cc -o .\objetos_estatica\rombo.o -I .\biblioteca
g++ -c .\prelib\trapecio.cc -o .\objetos_estatica\trapecio.o -I .\biblioteca
g++ -c .\prelib\triangulo.cc -o .\objetos_estatica\triangulo.o -I .\biblioteca 

2. Compilación de la biblioteca con extencion .lib
ar crs areas.lib .\objetos_estatica\*.o




BIBLIOTECA DINÁMICA
Tutorial para usal la biblioteca dinámica:
1-. Clonar el repositorio 
2-. Crea el ejecutable ingresando en la terminal el comando: g++ .\B_poligonos\main.cc .\B_poligonos\lib\dinamica\areas.dll -o .\B_poligonos\lib\dinamica\prueba.exe
3. Compila el ejecutable usando:.\B_poligonos\lib\dinamica\prueba.exe

NOTA: "prueba.exe" es el nombre del ejecutable por lo que puede cambiar a cualquier otro nombre de su preferencia. 

Comandos utilizados para compilar la biblioteca dinámica:
1. Creacion archivos .o con -FPIC
g++ -c .\prelib\cuadrado.cc -o .\objetos_dinamica\cuadrado.o -I .\biblioteca -FPIC
g++ -c .\prelib\poligono.cc -o .\objetos_dinamica\poligono.o -I .\biblioteca -FPIC
g++ -c .\prelib\rectangulo.cc -o .\objetos_dinamica\rectangulo.o -I .\biblioteca -FPIC
g++ -c .\prelib\rombo.cc -o .\objetos_dinamica\rombo.o -I .\biblioteca -FPIC
g++ -c .\prelib\trapecio.cc -o .\objetos_dinamica\trapecio.o -I .\biblioteca -FPIC
g++ -c .\prelib\triangulo.cc -o .\objetos_dinamica\triangulo.o -I .\biblioteca -FPIC

2. Creación del DLL
gcc -shared .\objetos_dinamica\*.o -o areas.dll 
