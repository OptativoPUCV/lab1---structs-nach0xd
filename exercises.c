#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) { 
  int valorMayor = arr[0];

  for (int i = 0; i < size; i++) {
    if (arr[i] > valorMayor) {
      valorMayor = arr[i];
    }
  }
  return valorMayor;
}
/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) {
  int temporal;

  for (int i = 0; i < size / 2; i++) {
    temporal = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temporal;
  }
}
/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) { 
  int *nuevoArr = (int *) malloc(size * sizeof(int));

  int cont = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      nuevoArr[cont] = arr[i];
      cont++;
    }
  }
  *newSize = cont;
  return nuevoArr;
}
/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,
                       int result[]) {
  int i = 0, j = 0, k = 0;
  while (i < size1) {
    result[k] = arr1[i];
    i++;
    k++;
  }
  while (j < size2) {
    result[k] = arr2[j];
    j++;
    k++;
  }
  for (int i = 0; i < size1 + size2; i++) {
    for (int j = 0; j < size1 + size2 - i - 1; j++) {
      if (result[j] > result[j + 1]) {
        int temp = result[j];
        result[j] = result[j + 1];
        result[j + 1] = temp;
      }
    } 
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) {
  int cont = 1;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      cont = -1;
    }
    if (arr[i] < arr[i + 1] && cont == -1) {
      cont = 0;
      break;
    }
  }
  return cont;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {
  strcpy(libro->titulo, titulo);
  strcpy(libro->autor.nombre, nombreAutor);
  libro->autor.anioNacimiento = anioNacimiento;
  libro->anioPublicacion = anioPublicacion;
  
                      }

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { 
  return NULL;
}
