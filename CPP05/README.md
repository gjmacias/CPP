
# CPP05

El proyecto CPP05 explora conceptos avanzados en la programación orientada a objetos en C++, centrándose en la implementación de sistemas de formularios y la gestión de objetos complejos. A través de estos ejercicios, aprenderás a diseñar y gestionar objetos y formularios en un contexto más estructurado y dinámico.

## Índice

- [Exercise 00: I want to be a bureaucrat!](#exercise-00-i-want-to-be-a-bureaucrat)
- [Exercise 01: Form up, maggots!](#exercise-01-form-up-maggots)
- [Exercise 02: You need form is 28B, not 28C](#exercise-02-you-need-form-is-28b-not-28c)
- [Exercise 03: Coffee-making](#exercise-03-coffee-making)
---

## Exercise 00: I want to be a bureaucrat!

### Descripción
En este ejercicio, implementamos la clase `Bureaucrat`, que representa a un burócrata con un rango específico y una capacidad para manejar formularios. La clase `Bureaucrat` debe gestionar su propio rango y validar la capacidad para firmar o ejecutar formularios.

### ¿Qué aprendemos?
- **Clases y atributos:** Aprendemos a implementar una clase `Bureaucrat` con atributos que representan el rango del burócrata y métodos para modificar y consultar estos atributos.
- **Validación de datos:** Se explora cómo validar el rango del burócrata para asegurar que esté dentro de los límites permitidos.
- **Gestión de excepciones:** Se estudia cómo manejar excepciones relacionadas con la validación de datos y el control de errores en la manipulación de atributos de la clase.

---

## Exercise 01: Form up, maggots!

### Descripción
En este ejercicio, implementamos la clase `Form`, que representa un formulario que puede ser firmado o ejecutado por un `Bureaucrat`. La clase `Form` define los requisitos para ser firmado y ejecutado, así como los métodos para gestionar estos estados.

### ¿Qué aprendemos?
- **Definición de formularios:** Aprendemos a implementar la clase `Form` con atributos y métodos que definen el estado y los requisitos de un formulario.
- **Relación con otras clases:** Se explora cómo la clase `Form` interactúa con la clase `Bureaucrat`, requiriendo un rango específico para firmar o ejecutar el formulario.
- **Control de acceso y métodos:** Se estudia cómo controlar el acceso a los métodos de firma y ejecución, asegurando que solo los burócratas con el rango adecuado puedan realizar estas acciones.

---

## Exercise 02: You need form is 28B, not 28C

### Descripción
Este ejercicio expande el concepto de formularios y burócratas, introduciendo formularios específicos que deben ser correctamente identificados y utilizados. Se implementan diferentes tipos de formularios y se gestionan los requisitos específicos para cada tipo.

### ¿Qué aprendemos?
- **Gestión de múltiples tipos de formularios:** Aprendemos a manejar diferentes tipos de formularios, cada uno con requisitos específicos y condiciones de firma o ejecución.
- **Identificación de formularios:** Se explora cómo identificar y gestionar formularios mediante su número o tipo, y cómo asegurar que los formularios correctos sean utilizados.
- **Interacción entre formularios y burócratas:** Se estudia cómo los burócratas deben cumplir con requisitos específicos para manejar ciertos tipos de formularios, gestionando las interacciones entre formularios y burócratas de manera eficiente.

---

## Exercise 03: Coffee-making

### Descripción
En este ejercicio, implementamos la clase `Intern`, que puede crear diferentes tipos de formularios a petición. La clase `Intern` actúa como un generador de formularios y debe gestionar la creación de formularios específicos según las solicitudes.

### ¿Qué aprendemos?
- **Creación de objetos dinámicos:** Aprendemos a crear y gestionar objetos dinámicos mediante la implementación de la clase `Intern`, que genera formularios según las solicitudes.
- **Patrón de fábrica:** Se explora cómo utilizar un patrón de fábrica para crear instancias de diferentes tipos de formularios en función de las solicitudes.
- **Manejo de memoria y recursos:** Se estudia cómo manejar la memoria y los recursos asociados con la creación de objetos dinámicos, asegurando una gestión eficiente y segura.
