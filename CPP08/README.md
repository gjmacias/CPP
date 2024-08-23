
# CPP08

El proyecto CPP08 explora técnicas avanzadas en C++ relacionadas con la manipulación de contenedores y algoritmos, con un enfoque en la eficiencia y flexibilidad del código. A continuación, se describen los ejercicios incluidos en este proyecto y los conceptos clave que se aprenden.

## Índice

- [Exercise 00: Easy Find](#exercise-00-easy-find)
- [Exercise 01: Span](#exercise-01-span)
- [Exercise 02: Mutated Abomination](#exercise-02-mutated-abomination)

---

## Exercise 00: Easy Find

### Descripción
En este ejercicio, se implementa una función plantilla llamada `easyfind` que busca un elemento en un contenedor estándar de C++ (como `std::vector`, `std::list`, etc.). La función devuelve un iterador al elemento si se encuentra, o un iterador al final del contenedor si el elemento no está presente.

### ¿Qué aprendemos?
- **Búsqueda en contenedores:** Aprendemos a implementar una función genérica para buscar elementos en contenedores utilizando iteradores.
- **Uso de iteradores:** Cómo utilizar iteradores para navegar y buscar en diferentes tipos de contenedores estándar de C++.
- **Plantillas de funciones:** La capacidad de escribir una función que opera con diversos tipos de contenedores sin necesidad de sobrecargar o duplicar código.

---

## Exercise 01: Span

### Descripción
Este ejercicio se centra en la implementación de una clase `Span` que gestiona un rango de números enteros. La clase debe permitir agregar números a un contenedor y encontrar el rango (diferencia entre el valor máximo y mínimo) de los números almacenados. Se exploran las técnicas para manejar el almacenamiento dinámico y la eficiencia en la búsqueda de valores extremos.

### ¿Qué aprendemos?
- **Gestión de contenedores dinámicos:** Aprendemos a implementar una clase que maneja un contenedor interno de números enteros, permitiendo la adición de nuevos elementos.
- **Cálculo de rango:** Cómo calcular el rango de los números almacenados en la clase, es decir, la diferencia entre el valor máximo y mínimo.
- **Excepciones y validación:** Implementar manejo de excepciones y validación para asegurar que la clase maneje correctamente los errores, como intentar calcular el rango con menos de dos elementos.

---

## Exercise 02: Mutated Abomination

### Descripción
En este ejercicio, se implementa una clase `MutantStack` que extiende la funcionalidad de `std::stack` para proporcionar operaciones adicionales. La clase debe ser capaz de realizar operaciones como encontrar el valor mínimo en el stack y proporcionar iteradores para iterar sobre sus elementos. Este ejercicio explora la herencia y la extensión de clases estándar en C++.

### ¿Qué aprendemos?
- **Extensión de clases estándar:** Aprendemos a extender la funcionalidad de una clase estándar (`std::stack`) para añadir nuevas capacidades.
- **Iteradores personalizados:** Implementar iteradores personalizados para permitir la iteración sobre los elementos de la clase `MutantStack`.
- **Manejo de valores extremos:** Cómo añadir funcionalidades adicionales para encontrar valores extremos, como el mínimo, en una estructura de datos personalizada.
