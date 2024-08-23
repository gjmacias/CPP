# CPP04
El proyecto CPP04 explora conceptos avanzados en la Programación Orientada a Objetos (OOP) en C++, incluyendo el polimorfismo, clases abstractas e interfaces. Estos ejercicios están diseñados para profundizar en la implementación y uso de estos conceptos para crear un código más estructurado y modular.

## Índice

- [Exercise 00: Polymorphism](#exercise-00-polymorphism)
- [Exercise 01: I don't want to set the world on fire](#exercise-01-i-dont-want-to-set-the-world-on-fire)
- [Exercise 02: Abstract Class](#exercise-02-abstract-class)
- [Exercise 03: Interface & Recap](#exercise-03-interface--recap)
---

## Exercise 00: Polymorphism

### Descripción
En este ejercicio, implementamos una jerarquía de clases relacionada con animales. La clase base `Animal` define una interfaz común para las clases derivadas, como `Dog` y `Cat`, que implementan métodos específicos. El objetivo es demostrar el uso del polimorfismo para tratar a objetos de diferentes clases derivadas de manera uniforme.

### ¿Qué aprendemos?
- **Polimorfismo:** Aprendemos cómo el polimorfismo permite que diferentes tipos de objetos sean tratados a través de una interfaz común. Utilizamos punteros o referencias a la clase base para invocar métodos sobreescritos en las clases derivadas.
- **Funciones virtuales:** Implementamos métodos virtuales en la clase base `Animal` para que puedan ser sobreescritos por las clases derivadas, permitiendo la resolución dinámica de métodos.
- **Jerarquías de clases:** Se explora la creación y manejo de jerarquías de clases, donde la clase base define una interfaz común que las clases derivadas implementan y extienden.

---

## Exercise 01: I don't want to set the world on fire

### Descripción
Este ejercicio se centra en la clase `Brain`, que es utilizada en conjunto con otras clases (por ejemplo, `Animal`). La clase `Brain` maneja la memoria y la lógica asociada con los pensamientos de un animal. Aprendemos a gestionar la memoria de manera segura y eficiente usando técnicas de encapsulamiento y gestión de recursos.

### ¿Qué aprendemos?
- **Gestión de memoria:** Aprendemos a gestionar la memoria de manera segura en C++, utilizando técnicas como la asignación dinámica y la liberación de memoria. Implementamos correctamente los constructores, destructores y el operador de asignación para manejar la memoria de la clase `Brain`.
- **Encapsulamiento:** Se explora cómo encapsular datos en la clase `Brain` para mantener la coherencia y seguridad de la información que maneja.
- **Relaciones entre clases:** Se estudia cómo la clase `Brain` se integra con otras clases, demostrando cómo las relaciones entre objetos pueden ser modeladas y gestionadas en C++.

---

## Exercise 02: Abstract Class

### Descripción
En este ejercicio, se trabaja con clases abstractas en C++. Una clase abstracta es una clase que contiene al menos un método puro virtual y no puede ser instanciada directamente. Se define una interfaz que debe ser implementada por las clases derivadas.

### ¿Qué aprendemos?
- **Clases abstractas:** Aprendemos a definir y utilizar clases abstractas, que sirven como plantillas para otras clases. Implementamos métodos puros virtuales para establecer un contrato que las clases derivadas deben cumplir.
- **Métodos puros virtuales:** Se explora cómo declarar métodos puros virtuales en una clase abstracta y cómo las clases derivadas deben proporcionar una implementación concreta para estos métodos.
- **Diseño orientado a interfaces:** Se estudia cómo las clases abstractas permiten un diseño más flexible y modular, estableciendo interfaces que las clases concretas deben seguir.

---

## Exercise 03: Interface & Recap

### Descripción
Este ejercicio se centra en el concepto de interfaces en C++. Implementamos interfaces en la clase `Amateria` y otras clases asociadas, y revisamos los conceptos aprendidos en los ejercicios anteriores. El objetivo es consolidar el conocimiento sobre la implementación y uso de interfaces en C++.

### ¿Qué aprendemos?
- **Interfaces en C++:** Aprendemos a implementar interfaces en C++, utilizando clases abstractas con métodos puros virtuales. Las interfaces definen contratos que las clases concretas deben cumplir.
- **Recapitulación:** Se revisan y consolidan los conceptos clave aprendidos en los ejercicios anteriores, incluyendo polimorfismo, clases abstractas e interfaces.
- **Diseño y organización del código:** Se estudia cómo aplicar los conceptos de interfaces para diseñar y organizar el código de manera más eficiente y modular, facilitando la extensión y mantenimiento del sistema.

---

Este README proporciona una visión clara y detallada de cada ejercicio en el proyecto CPP04, explicando los objetivos y conceptos clave que se aprenden. Esto te ayudará a comprender mejor cómo aplicar principios avanzados de C++ en la programación orientada a objetos y en el diseño de sistemas modulares. ¡Espero que te sea útil para tu documentación!
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
