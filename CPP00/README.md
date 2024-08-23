# CPP00

Este proyecto es parte del currículo de 42 y tiene como objetivo introducirnos a la programación en C++. A lo largo de varios ejercicios, aprenderemos los fundamentos del lenguaje, centrándonos en aspectos esenciales como la manipulación de strings, la entrada y salida estándar, la implementación de clases, y conceptos básicos de la Programación Orientada a Objetos (OOP).

## Índice

- [Exercise 00: Megaphone](#exercise-00-megaphone)  
- [Exercise 01: PhoneBook](#exercise-01-phonebook) 
- [Exercise 02: Class Implementation](#exercise-02-class-implementation)

### Exercise 00: Megaphone

**Descripción:**  
En este primer ejercicio, implementamos un programa llamado `megaphone` que toma argumentos desde la línea de comandos y los convierte a mayúsculas, imprimiendo el resultado en la salida estándar.

**¿Qué aprendemos?**
- **Manipulación de strings:** Nos familiarizamos con las cadenas de caracteres en C++ y cómo recorrerlas y modificarlas.
- **Entrada y salida estándar:** Practicamos el uso de `std::cout` para imprimir en la consola, y aprendemos a manejar los argumentos de la línea de comandos utilizando `int argc` y `char **argv`.
- **Fundamentos del bucle:** Utilizamos bucles `for` para recorrer y transformar los caracteres en mayúsculas.
- **Funciones básicas de la biblioteca estándar:** Empleamos funciones como `std::toupper()` para manipular los caracteres.

### Exercise 01: PhoneBook

**Descripción:**  
El ejercicio `PhoneBook` nos introduce a la creación de clases en C++. Implementamos una clase `PhoneBook` que actúa como una agenda donde el usuario puede añadir, buscar y mostrar contactos.

**¿Qué aprendemos?**
- **Introducción a las clases:** Aprendemos a definir clases en C++, incluyendo atributos privados y funciones públicas.
- **Encapsulamiento:** Practicamos el principio de encapsulamiento de la OOP, manteniendo los datos privados dentro de la clase y accediendo a ellos mediante métodos públicos.
- **Uso de `getline`:** Utilizamos `std::getline` para manejar la entrada del usuario, permitiendo capturar líneas completas de texto, lo cual es esencial para trabajar con strings que contienen espacios.
- **Construcción de métodos:** Desarrollamos métodos dentro de la clase para gestionar la lógica de la agenda (añadir contactos, mostrar una lista de contactos, buscar contactos específicos, etc.).
- **Manejo de datos:** Empezamos a trabajar con arrays de objetos para almacenar múltiples entradas dentro de nuestra clase `PhoneBook`.

### Exercise 02: Class Implementation

**Descripción:**  
En este ejercicio, expandimos nuestro conocimiento sobre clases en C++ implementando una clase `Contact` que será utilizada por la clase `PhoneBook`. Este ejercicio se enfoca en profundizar en la sintaxis y el manejo de clases.

**¿Qué aprendemos?**
- **Declaración y definición de clases:** Aprendemos a dividir la declaración de una clase en un archivo de cabecera (`.hpp`) y su definición en un archivo de implementación (`.cpp`).
- **Constructores y destructores:** Nos introducimos en el uso de constructores para inicializar objetos y destructores para limpiar recursos cuando los objetos dejan de ser necesarios.
- **Acceso a miembros de la clase:** Practicamos cómo manipular los atributos privados de una clase a través de funciones `setter` y `getter`.
- **Manejo de errores:** Implementamos validaciones básicas dentro de nuestros métodos para asegurar que los datos ingresados sean consistentes y válidos.
