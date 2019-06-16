# Practica Uso de Punteros
Práctica sobre el uso de punteros en C para la materia Programación de Sistemas (CCPG1008) P1 de la ESPOL.

## Instrucciones
El código en *main.c* copia el contenido de `argv` a `buffer` y muestra este contenido en consola. Ejemplo de salida:

```
$ ./sort pedro juan zambrano alicia
./sort
pedro
juan
zambrano
alicia
```

En esta práctica, el objetivo es modificar el código de *main.c* para que el contenido de `buffer` sea una copia de `argv` pero en orden alfabético ascendente e ignorando el primer elemento de `argv`. Es decir, el ejecutable *sort* debe ordenar alfabéticamente los argumentos proporcionados desde consola.

Ejemplo de comportamiento deseado:

```
$ ./sort pedro juan zambrano alicia
alicia
juan
pedro
zambrano
```

## Entregable
Completar está practica con un mínimo de dos commits, un commit por cada miembro del equipo.
