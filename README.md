# Equipo-Maravilla-
Evaluacion:
Monica Betsabe Mejia Escutia.
Jose Alberto Posadas Gudiño.
Mariana Rangel Angeles.
La calificacion asignada a mis compañeros y la mia es 6, ya que no concluimos el trabajo completo de creear las bibliotecas,solo terminamos la biblioteca estatica que si funciona,en la biblioteca dinamica hicimos lo que se pudo, pero realmente todos nos esforzamos en aprender, entender y hacer el mayor trabajo posible. 



Tutorial para usar la biblioteca estática:
1-. Clonar el repositorio 
2-. Compila el código fuente ejecutando el comando g++ main.cc -o test -I.\lib\biblioteca -L.\static -lareas 
3-. Ejecuta el programa, en el archivo main se encuentran las variables “x, y, z” que se pueden modificar con los valores que desees. 
4-. Ejecutar el comando ./text.exc



Comandos para compilar la biblioteca estatica.
Con ese comando se compilan los codigos objetos generando el ".o"
.g++ -c .\prelib\triangulo.cc -o .\libo\triangulo.o -I .\biblioteca
.g++ -c .\prelib\cuadrado.cc -o .\libo\cuadrado.o -I .\biblioteca
.g++ -c .\prelib\poligono.cc -o .\libo\poligono.o -I .\biblioteca
.g++ -c .\prelib\rombo.cc -o .\libo\rombo.o -I .\biblioteca
.g++ -c .\prelib\trapecio.cc -o .\libo\trapecio.o -I .\biblioteca

ar crs .\biblioteca\static\AREAS.lib .\libo\*.o Para crear el ".lib" donde junta todos los codigos objetos.
g++ main.cc -o test -I .\lib\biblioteca -L .\lib\static -lareas para generar el ejecutable. 




Tutorial para usar la biblioteca dinamica:
No se supo incluir el .dll en la funcion main, por lo tanto no supimos como generar el ejecutable.

Comandos para compilar la biblioteca dinamica.
Con ese comando se compilan los codigos objetos generando el ".o"
gcc -c .\funciones\triangulo.cc -o .\librerias.o\triangulo.o -I .\biblio -fPIC
gcc -c .\funciones\cuadrado.cc -o .\librerias.o\cuadrado.o -I .\biblio -fPIC
gcc -c .\funciones\rectangulo.cc -o .\librerias.o\rectangulo.o -I .\biblio -fPIC
gcc -c .\funciones\romboo.cc -o .\librerias.o\rombo.o -I .\biblio -fPIC
gcc -c .\funciones\rombo.cc -o .\librerias.o\rombo.o -I .\biblio -fPIC
gcc -c .\funciones\poligono.cc -o .\librerias.o\poligono.o -I .\biblio -fPIC
gcc -c .\funciones\trapecio.cc -o .\librerias.o\trapecio.o -I .\biblio -fPIC


 gcc -shared .\librerias.o\*.o -o areas_poligonos.dll para generar el ".dll"
