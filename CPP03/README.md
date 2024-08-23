
# CPP03

Este proyecto continúa desarrollando nuestras habilidades en C++, enfocándose en conceptos avanzados de la Programación Orientada a Objetos (OOP), el uso de memoria, y la sobrecarga de operadores. A través de estos ejercicios, aprenderemos a manejar mejor la eficiencia del código y la implementación de comportamientos personalizados para nuestras clases.

## Índice

- [Exercise 00: And... OPEN!](#exercise-00-and-open)
- [Exercise 01: Serena, my love!](#exercise-01-serena-my-love)
- [Exercise 02: Repetitive work](#exercise-02-repetitive-work)
- [Exercise 03: Now it's weird!](#exercise-03-now-its-weird)

---

## Exercise 00: And... OPEN!

### Descripción
En este primer ejercicio, se introduce la creación de clases que simulan la apertura de una caja fuerte. Se implementa una clase `Fixed` que sigue la "Orthodox Canonical Form" (OCF) y se explora cómo operar con números en un formato de punto fijo.

### ¿Qué aprendemos?
- **Orthodox Canonical Form (OCF):** Reforzamos la estructura de clases en C++, asegurándonos de implementar constructor por defecto, constructor de copia, operador de asignación y destructor.
- **Números de punto fijo:** Aprendemos a manejar una representación numérica de punto fijo, comprendiendo cómo esta representación permite realizar cálculos con números decimales de forma eficiente.
- **Sobrecarga de operadores:** Iniciamos la sobrecarga de operadores en la clase `Fixed`, lo que permite realizar operaciones aritméticas con objetos de esta clase como si fueran tipos de datos primitivos.

---

## Exercise 01: Serena, my love!

### Descripción
En este ejercicio, se profundiza en la implementación de la clase `Fixed`, extendiendo su funcionalidad para incluir comparaciones y operaciones aritméticas adicionales. Se trabaja en hacer que los objetos `Fixed` sean más útiles y comparables entre sí.

### ¿Qué aprendemos?
- **Operadores de comparación:** Implementamos la sobrecarga de operadores de comparación (>, <, >=, <=, ==, !=) para la clase `Fixed`, permitiendo que los objetos puedan ser comparados directamente.
- **Operadores aritméticos adicionales:** Añadimos soporte para más operadores aritméticos como suma, resta, multiplicación y división, permitiendo operaciones matemáticas completas con objetos `Fixed`.
- **Precisión y rendimiento:** Exploramos cómo se manejan las operaciones aritméticas en un entorno de punto fijo, asegurando que se mantenga la precisión necesaria para cálculos delicados.

---

## Exercise 02: Repetitive work

### Descripción
En este ejercicio, nos centramos en la implementación de operadores de incremento y decremento para la clase `Fixed`. También se introducen funciones para encontrar el valor mínimo y máximo entre dos objetos `Fixed`.

### ¿Qué aprendemos?
- **Operadores de incremento y decremento:** Sobrecargamos los operadores de incremento (`++`) y decremento (`--`), tanto en su versión prefija como postfija, para manipular los valores de `Fixed` de manera más intuitiva.
- **Funciones `min` y `max`:** Implementamos funciones que permiten encontrar el mínimo y máximo entre dos objetos `Fixed`, introduciendo así el concepto de métodos estáticos en C++.
- **Eficiencia del código:** Mejoramos la eficiencia del código al evitar repeticiones y utilizando sobrecarga de operadores para simplificar las operaciones repetitivas.

---

## Exercise 03: Now it's weird!

### Descripción
Este ejercicio introduce la conversión implícita y explícita entre tipos de datos en C++. Se trabaja en permitir que la clase `Fixed` se convierta de manera automática a otros tipos numéricos, y viceversa.

### ¿Qué aprendemos?
- **Conversiones implícitas y explícitas:** Aprendemos a implementar conversiones entre tipos, permitiendo que objetos de `Fixed` se conviertan automáticamente a tipos primitivos como `int` y `float`, y viceversa.
- **Constructores y operadores de conversión:** Implementamos constructores de conversión y operadores para gestionar las conversiones entre `Fixed` y otros tipos de datos.
- **Flexibilidad en el uso de clases:** Esta práctica permite que los objetos de la clase `Fixed` sean utilizados en contextos donde se espera un tipo primitivo, lo que mejora la flexibilidad y reutilización de la clase en diferentes situaciones.
