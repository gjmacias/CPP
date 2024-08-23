
# CPP04

En este proyecto, profundizaremos en el uso avanzado de la Programación Orientada a Objetos (OOP) en C++, explorando temas como el polimorfismo, las clases abstractas, y las interfaces. A través de ejercicios prácticos, aprenderemos cómo aplicar estos conceptos para crear programas más flexibles y extensibles.

## Índice

- [Exercise 00: Polymorphism](#exercise-00-polymorphism)
- [Exercise 01: I don't want to set the world on fire](#exercise-01-i-dont-want-to-set-the-world-on-fire)
- [Exercise 02: Abstract Class](#exercise-02-abstract-class)
- [Exercise 03: Interface & Recap](#exercise-03-interface--recap)

---

## Exercise 00: Polymorphism

### Descripción
En este ejercicio, exploramos el concepto de polimorfismo en C++. Implementamos una jerarquía de clases que demuestra cómo diferentes tipos de objetos pueden ser tratados de manera uniforme a través de una interfaz común. Usamos punteros y referencias a clases base para invocar métodos sobreescritos en clases derivadas.

### ¿Qué aprendemos?
- **Polimorfismo:** Aprendemos a utilizar el polimorfismo, que permite a una interfaz común manejar diferentes tipos de objetos a través de punteros o referencias a la clase base.
- **Sobreescritura de métodos:** Se profundiza en la sobreescritura de métodos en clases derivadas y cómo se puede invocar el método adecuado dependiendo del tipo real del objeto.
- **Virtual Functions:** Implementamos funciones virtuales en la clase base para permitir la resolución dinámica de métodos en tiempo de ejecución, lo que habilita el comportamiento polimórfico.

---

## Exercise 01: I don't want to set the world on fire

### Descripción
Este ejercicio se centra en el uso de polimorfismo avanzado y la implementación de patrones de diseño. Creamos una jerarquía de clases que demuestra cómo aplicar conceptos de diseño orientado a objetos para resolver problemas complejos de manera elegante y extensible.

### ¿Qué aprendemos?
- **Patrones de diseño:** Se exploran patrones de diseño que utilizan polimorfismo para resolver problemas comunes de manera eficiente y escalable.
- **Composición y delegación:** Aprendemos a usar la composición y la delegación para construir sistemas modulares donde las clases pueden colaborar sin depender directamente unas de otras.
- **Flexibilidad y extensibilidad:** Se demuestra cómo diseñar sistemas flexibles y extensibles utilizando polimorfismo, permitiendo que el código se adapte a nuevos requisitos sin modificar el código existente.

---

## Exercise 02: Abstract Class

### Descripción
En este ejercicio, trabajamos con clases abstractas, que son clases que no pueden ser instanciadas directamente y se utilizan como base para otras clases. Implementamos métodos abstractos que deben ser definidos en las clases derivadas, y aprendemos cómo utilizar estas clases para definir interfaces comunes.

### ¿Qué aprendemos?
- **Clases abstractas:** Aprendemos a definir y utilizar clases abstractas que contienen al menos un método puro virtual (`pure virtual`), lo que obliga a las clases derivadas a implementar estos métodos.
- **Métodos puros virtuales:** Se profundiza en cómo declarar métodos puros virtuales en la clase base para establecer una interfaz que las clases derivadas deben cumplir.
- **Interfaz común:** Utilizamos clases abstractas para definir una interfaz común para diferentes tipos de objetos, promoviendo una arquitectura más limpia y organizada.

---

## Exercise 03: Interface & Recap

### Descripción
Este ejercicio se centra en el concepto de interfaces en C++. Implementamos interfaces para definir contratos que las clases deben cumplir y recapitulamos los conceptos aprendidos en los ejercicios anteriores. Se exploran diferentes formas de usar interfaces y se revisan los conceptos clave del proyecto.

### ¿Qué aprendemos?
- **Interfaces en C++:** Aprendemos a implementar y utilizar interfaces, que son clases abstractas que solo definen métodos puros virtuales. Estas interfaces se utilizan para garantizar que las clases implementen un conjunto específico de métodos.
- **Recapitulación de conceptos:** Se revisan y consolidan los conceptos clave aprendidos a lo largo del proyecto, incluyendo polimorfismo, clases abstractas e interfaces.
- **Diseño y organización del código:** Se practica la creación de sistemas que utilizan interfaces para definir contratos claros entre diferentes componentes del software, facilitando la colaboración y la extensibilidad.
