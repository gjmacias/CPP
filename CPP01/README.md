
# CPP01

Este proyecto es la continuación del módulo CPP01 y se enfoca en conceptos más avanzados de C++. A través de varios ejercicios, se profundiza en la manipulación de punteros, referencias, clases y el uso de la memoria en C++. Además, se introducen conceptos como la manipulación de strings a nivel más bajo, el manejo de la memoria dinámica, y la implementación de algoritmos básicos.

## Índice

- [Exercise 00: BrainzzZ](#exercise-00-brainzzz)
- [Exercise 01: More brainz](#exercise-01-more-brainz)
- [Exercise 02: Hi this is brain](#exercise-02-hi-this-is-brain)
- [Exercise 03: Unnecessary violence](#exercise-03-unnecessary-violence)
- [Exercise 04: Sed is for losers](#exercise-04-sed-is-for-losers)
- [Exercise 05: Harl 2.0](#exercise-05-harl-20)
- [Exercise 06: Harl filter](#exercise-06-harl-filter)

## Exercise 00: BrainzzZ

### Descripción
En este ejercicio, se implementa un programa simple que utiliza punteros y referencias para manipular datos básicos. El objetivo es familiarizarse con estos conceptos fundamentales en C++.

### ¿Qué aprendemos?
- **Punteros y referencias:** Se aprende la diferencia entre punteros y referencias, así como cuándo y cómo utilizarlos.
- **Manipulación de memoria:** Se comienza a entender cómo los punteros permiten la manipulación directa de la memoria.
- **Sintaxis básica de punteros:** Práctica con la sintaxis de punteros, incluyendo la desreferenciación (`*`) y la obtención de direcciones (`&`).

---

## Exercise 01: More brainz

### Descripción
Este ejercicio es una extensión del anterior, donde se trabaja más a fondo con punteros y referencias, pero ahora aplicándolos en el contexto de funciones. Se realizan operaciones más complejas que involucran cambios en los valores de variables a través de punteros y referencias.

### ¿Qué aprendemos?
- **Funciones con punteros y referencias:** Aprendemos a pasar punteros y referencias a funciones, entendiendo cómo afectan a las variables originales.
- **Eficiencia en el manejo de datos:** Se destaca la eficiencia de utilizar referencias en lugar de copias de datos grandes.
- **Constantes y punteros:** Se introduce el concepto de punteros constantes y referencias constantes, aprendiendo cómo proteger los datos de modificaciones no deseadas.

---

## Exercise 02: Hi this is brain

### Descripción
En este ejercicio, se implementa un programa que manipula cadenas de caracteres (strings) utilizando punteros. Se profundiza en cómo se manejan los strings a nivel de punteros, explorando la memoria y cómo se accede a los datos.

### ¿Qué aprendemos?
- **Manipulación de strings con punteros:** Aprendemos cómo manejar strings usando punteros, incluyendo cómo iterar sobre caracteres y modificar el contenido.
- **Arrays de caracteres vs. std::string:** Entendemos las diferencias entre manipular strings como arrays de caracteres y usando la clase `std::string`.
- **Memoria dinámica:** Se introduce la idea de reservar memoria de forma dinámica para manipular strings más allá de su tamaño inicial.

---

## Exercise 03: Unnecessary violence

### Descripción
Este ejercicio nos introduce a la creación de clases y objetos en C++, en un contexto donde se modela una situación (violencia innecesaria) a través de la interacción de objetos. Aquí se implementan clases que contienen punteros a otros objetos, explorando la relación entre ellos.

### ¿Qué aprendemos?
- **Programación Orientada a Objetos (OOP):** Se afianzan los conceptos básicos de la OOP, como la creación de clases, instanciación de objetos y encapsulación.
- **Composición de clases:** Se aprende a crear clases que contienen otros objetos, manejando relaciones de "tiene un" (`has-a`).
- **Punteros a objetos:** Se profundiza en cómo manejar punteros a objetos, entendiendo cómo se interconectan las instancias de diferentes clases.

---

## Exercise 04: Sed is for losers

### Descripción
En este ejercicio, se implementa un programa que reemplaza todas las ocurrencias de una palabra en un archivo por otra, similar a la utilidad `sed` en UNIX. Esto se hace leyendo el contenido del archivo, manipulando el texto y escribiendo la salida modificada en un nuevo archivo.

### ¿Qué aprendemos?
- **Manejo de archivos en C++:** Aprendemos a leer y escribir archivos utilizando `std::ifstream` y `std::ofstream`.
- **Manipulación de strings:** Practicamos operaciones comunes sobre strings, como búsqueda y reemplazo de subcadenas.
- **Uso de streams:** Se profundiza en el uso de streams en C++ para manipular datos de entrada y salida de forma eficiente.

---

## Exercise 05: Harl 2.0

### Descripción
En este ejercicio, se expande el concepto de la clase `Harl`, implementando más métodos que simulan diferentes niveles de quejas. El ejercicio se enfoca en la organización del código y la reutilización de métodos.

### ¿Qué aprendemos?
- **Organización de clases:** Se aprende a estructurar clases de manera eficiente, manteniendo la lógica clara y separada.
- **Sobrecarga de métodos:** Se introduce la sobrecarga de métodos en C++, permitiendo múltiples versiones de un método con diferentes parámetros.
- **Modularidad:** Se practica la creación de código modular y fácil de mantener.

---

## Exercise 06: Harl filter

### Descripción
Este ejercicio es una continuación del anterior, donde se implementa un filtro que activa diferentes métodos de la clase `Harl` basado en un nivel de severidad dado. Esto introduce la lógica de control de flujo en base a condiciones.

### ¿Qué aprendemos?
- **Control de flujo:** Se practica el uso de estructuras de control como `switch` o `if-else` para manejar diferentes condiciones.
- **Filtros y condicionales:** Aprendemos a implementar filtros que determinan qué métodos se ejecutan según ciertos criterios.
- **Desarrollo de lógica compleja:** Se introduce la idea de desarrollar lógica más compleja basada en las necesidades del programa.
