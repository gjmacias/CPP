
# CPP03

Este proyecto continúa desarrollando nuestras habilidades en C++, enfocándose en conceptos avanzados de la Programación Orientada a Objetos (OOP), el uso de memoria, y la sobrecarga de operadores. A través de estos ejercicios, aprenderemos a manejar mejor la eficiencia del código y la implementación de comportamientos personalizados para nuestras clases.


## Índice

- [Exercise 00: And... OPEN! (Claptrap)](#exercise-00-and-open-claptrap)
- [Exercise 01: Serena, my love! (Claptrap y ScavTrap)](#exercise-01-serena-my-love-claptrap-y-scavtrap)
- [Exercise 02: Repetitive work (Claptrap, ScavTrap y Fragtrap)](#exercise-02-repetitive-work-claptrap-scavtrap-y-fragtrap)
- [Exercise 03: Now it's weird! (Claptrap, ScavTrap, Fragtrap y DiamondTrap)](#exercise-03-now-its-weird-claptrap-scavtrap-fragtrap-y-diamondtrap)

---

## Exercise 00: And... OPEN! (Claptrap)

### Descripción
En este ejercicio, se implementa la clase `Claptrap`, una clase base que representa un robot básico en el contexto de un juego. La clase `Claptrap` incluye atributos y métodos para gestionar su estado y comportamiento.

### ¿Qué aprendemos?
- **Diseño de clases base:** Aprendemos a diseñar una clase base en C++, estableciendo atributos y métodos que definirán el comportamiento común para las clases derivadas.
- **Encapsulamiento:** Se implementa el encapsulamiento para proteger los datos y permitir la manipulación controlada de los atributos de la clase.
- **Métodos y atributos:** Se exploran los conceptos básicos de métodos y atributos en la clase `Claptrap`, y cómo estos se pueden utilizar para definir el comportamiento del objeto.

---

## Exercise 01: Serena, my love! (Claptrap y ScavTrap)

### Descripción
Este ejercicio extiende la clase `Claptrap` para crear una clase derivada llamada `ScavTrap`. La clase `ScavTrap` hereda de `Claptrap` y añade funcionalidades específicas, demostrando cómo se puede extender la funcionalidad de una clase base mediante la herencia.

### ¿Qué aprendemos?
- **Herencia simple:** Aprendemos a implementar la herencia en C++, donde `ScavTrap` hereda de `Claptrap`, reutilizando y extendiendo la funcionalidad de la clase base.
- **Sobreescritura de métodos:** Se explora cómo sobreescribir métodos de la clase base en `ScavTrap` para proporcionar comportamientos específicos adicionales o modificados.
- **Constructor y destructor en la herencia:** Se estudia la correcta implementación del constructor y destructor en la clase derivada, asegurando la inicialización y limpieza adecuada de los recursos.

---

## Exercise 02: Repetitive work (Claptrap, ScavTrap y Fragtrap)

### Descripción
En este ejercicio, se introduce una nueva clase derivada llamada `FragTrap`, que hereda tanto de `Claptrap` como de `ScavTrap` (herencia múltiple). Este ejercicio ilustra cómo manejar múltiples niveles de herencia y combina las características de `Claptrap` y `ScavTrap`.

### ¿Qué aprendemos?
- **Herencia múltiple:** Aprendemos a implementar la herencia múltiple en C++, donde una clase puede heredar de más de una clase base (`FragTrap` hereda de `Claptrap` y `ScavTrap`).
- **Resolución de ambigüedades:** Se explora cómo resolver ambigüedades y conflictos que pueden surgir cuando una clase derivada hereda de múltiples clases base con atributos o métodos con el mismo nombre.
- **Composición de comportamientos:** Se estudia cómo combinar y gestionar los comportamientos de las clases base para crear una clase derivada con funcionalidades ampliadas.

---

## Exercise 03: Now it's weird! (Claptrap, ScavTrap, Fragtrap y DiamondTrap)

### Descripción
Este ejercicio introduce la clase `DiamondTrap`, que hereda de `Claptrap`, `ScavTrap`, y `FragTrap`, demostrando la complejidad de la herencia múltiple en C++. El objetivo es gestionar la complejidad y el diseño de jerarquías de clases extensas y posiblemente conflictivas.

### ¿Qué aprendemos?
- **Herencia en diamante:** Aprendemos a manejar la herencia en diamante, un patrón de herencia múltiple donde una clase (`DiamondTrap`) hereda de dos clases derivadas de una misma clase base (`Claptrap`).
- **Método virtual puro y control de acceso:** Se exploran técnicas para manejar problemas como la ambigüedad en la herencia en diamante, utilizando métodos virtuales puros y controlando el acceso a los métodos y atributos de las clases base.
- **Diseño y organización de clases:** Se practica el diseño de jerarquías de clases complejas y la implementación de soluciones que eviten problemas comunes en la herencia múltiple, asegurando una arquitectura coherente y funcional.
