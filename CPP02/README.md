# CPP02

Este proyecto es parte del currículo de 42 y está diseñado para profundizar en conceptos avanzados de C++. En este módulo, trabajamos con la "Orthodox Canonical Form", números de punto fijo y operaciones complejas con clases, lo que nos permite consolidar nuestros conocimientos en programación orientada a objetos y manipulación de datos.

## Índice

- [Exercise 00: First Class in Orthodox Canonical Form](#exercise-00-first-class-in-orthodox-canonical-form)
- [Exercise 01: Towards a more useful fixed-point](#exercise-01-towards-a-more-useful-fixed-point)
- [Exercise 02: Now we're talking](#exercise-02-now-were-talking)
- [Exercise 03: BSP](#exercise-03-bsp)

## Exercise 00: First Class in Orthodox Canonical Form

### Descripción
En este ejercicio, se implementa una clase en su "Orthodox Canonical Form" (OCF). Esto implica crear una clase que siga todas las reglas y convenciones de la Programación Orientada a Objetos (OOP), incluyendo la definición de un constructor por defecto, un constructor de copia, un operador de asignación y un destructor.

### ¿Qué aprendemos?
- **Orthodox Canonical Form (OCF):** Aprendemos a estructurar una clase de manera correcta y completa siguiendo las convenciones de la OOP.
- **Constructor por defecto y de copia:** Se profundiza en la implementación y utilidad de los constructores por defecto y de copia, entendiendo cuándo y cómo se utilizan.
- **Operador de asignación (`=`):** Se implementa el operador de asignación, comprendiendo cómo asignar correctamente los valores de un objeto a otro.
- **Destructor:** Se trabaja en la implementación del destructor para manejar la liberación de recursos cuando un objeto es destruido, evitando fugas de memoria.

---

## Exercise 01: Towards a more useful fixed-point

### Descripción
En este ejercicio, se implementa una clase `Fixed` que representa un número de punto fijo. Esta clase incluirá operaciones básicas como asignación, comparación y aritmética. Se aprende a manejar la representación interna de un número de punto fijo y las operaciones matemáticas que se pueden realizar con él.

### ¿Qué aprendemos?
- **Números de punto fijo:** Se introduce el concepto de números de punto fijo, una representación de números reales en la cual una parte del número es fija.
- **Sobrecarga de operadores:** Se aprende a sobrecargar operadores en C++ para realizar operaciones matemáticas y comparativas con objetos de la clase `Fixed`.
- **Conversión de tipos:** Se practica la conversión entre diferentes tipos de datos, como `int` y `float`, y su representación en la clase `Fixed`.
- **Precisión y almacenamiento:** Se explora cómo manejar la precisión en cálculos numéricos y cómo se almacenan internamente los valores en punto fijo.

---

## Exercise 02: Now we're talking

### Descripción
En este ejercicio, se expande la clase `Fixed` implementando operadores adicionales, como incremento, decremento, y más operaciones aritméticas complejas. Además, se implementa una función para encontrar el mínimo y el máximo entre dos números de tipo `Fixed`.

### ¿Qué aprendemos?
- **Operadores de incremento y decremento:** Se profundiza en la implementación de los operadores de incremento (`++`) y decremento (`--`) tanto en su forma prefija como postfija.
- **Funciones estáticas:** Se aprende a implementar funciones estáticas dentro de una clase, como las funciones `min` y `max`, que operan sobre dos objetos `Fixed`.
- **Encapsulamiento y reutilización de código:** Se refuerza la idea de encapsulamiento y reutilización de código al ampliar las capacidades de la clase `Fixed` con nuevas funcionalidades.
- **Buenas prácticas en OOP:** Se consolidan buenas prácticas en la implementación de clases, asegurando que el código sea modular, mantenible y extensible.

---

## Exercise 03: BSP

### Descripción
Este ejercicio nos introduce al concepto de "Binary Space Partitioning" (BSP). Se implementa un programa que determina si un punto dado está dentro de un triángulo en un espacio 2D utilizando la técnica BSP.

### ¿Qué aprendemos?
- **Binary Space Partitioning (BSP):** Se introduce el concepto de BSP, una técnica de subdivisión de espacio que se utiliza en gráficos computacionales, juegos y simulaciones para determinar la visibilidad y la inclusión de puntos dentro de áreas geométricas.
- **Geometría en C++:** Aprendemos a manejar geometría básica en C++, trabajando con puntos y triángulos, y cómo determinar si un punto está dentro de un triángulo utilizando fórmulas matemáticas.
- **Algoritmos de clasificación espacial:** Se implementa un algoritmo para la clasificación espacial de puntos en relación con un triángulo, profundizando en la lógica matemática aplicada a la programación.
- **Aplicación de clases:** Se refuerza el uso de clases en C++ para modelar conceptos geométricos como puntos y triángulos, encapsulando la lógica de operaciones geométricas dentro de métodos específicos.
