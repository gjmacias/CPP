# CPP06

El proyecto CPP06 se centra en conceptos avanzados de C++ como la conversión de tipos escalares, la serialización y la identificación dinámica de tipos. A continuación, se presenta un resumen de los ejercicios realizados en este proyecto.

## Índice

- [Exercise 00: Conversion of Scalar Types (scalar.cpp)](#exercise-00-conversion-of-scalar-types-scalarcpp)
- [Exercise 01: Serialization (base.cpp)](#exercise-01-serialization-basecpp)
- [Exercise 02: Identify Real Type (dynamic_cast)](#exercise-02-identify-real-type-dynamic_cast)
---

## Exercise 00: Conversion of Scalar Types (scalar.cpp)

### Descripción
Este ejercicio explora la conversión entre tipos escalares en C++. Se implementa un programa para convertir entre tipos como `int`, `float`, `double`, y `char`, analizando conversiones implícitas y explícitas.

### ¿Qué aprendemos?
- **Conversión de tipos escalares:** Cómo realizar conversiones entre tipos escalares.
- **Precisión y pérdida de datos:** Efectos de la conversión en la precisión de los datos y la posible pérdida de información.
- **Castings en C++:** Uso de `static_cast` y otras técnicas de casting.

---

## Exercise 01: Serialization (base.cpp)

### Descripción
En este ejercicio, se implementa una clase `Serializer` que proporciona métodos estáticos para serializar y deserializar punteros a objetos. El método `serialize(Data* ptr)` convierte un puntero a un entero sin signo (`uintptr_t`), y `deserialize(uintptr_t raw)` convierte el entero de vuelta a un puntero. Se prueba la funcionalidad creando una estructura `Data`, serializando su puntero, y luego deserializándolo para verificar la correcta conversión.

### ¿Qué aprendemos?
- **Serialización y deserialización:** Convertir punteros en un tipo entero (`uintptr_t`) y luego reconstruirlos a punteros.
- **Implementación de métodos estáticos:** Crear métodos estáticos para manejar conversiones entre punteros y enteros.
- **Verificación de punteros:** Asegurar que el puntero original y el puntero deserializado sean iguales.

---

## Exercise 02: Identify Real Type (dynamic_cast)

### Descripción
Este ejercicio se centra en la identificación del tipo real de un objeto en C++. Se implementan dos funciones para determinar el tipo exacto de un objeto:
- `Base* generate(void);` que crea aleatoriamente una instancia de las clases derivadas `A`, `B`, o `C` y la devuelve como un puntero a `Base`.
- `void identify(Base* p);` y `void identify(Base& p);` que imprimen el tipo real del objeto apuntado por `p`. La versión por puntero usa `dynamic_cast` para verificar el tipo, mientras que la versión por referencia utiliza una serie de `dynamic_cast` y excepciones para lograr el mismo objetivo.

### ¿Qué aprendemos?
- **Generación aleatoria de objetos:** Crear instancias aleatorias de clases derivadas y devolverlas como punteros a la clase base.
- **Identificación dinámica de tipos:** Uso de `dynamic_cast` para identificar el tipo real de un objeto en tiempo de ejecución.
- **Polimorfismo y RTTI:** Implementar funciones que usan `dynamic_cast` para verificar y manejar tipos dinámicos en un contexto polimórfico.
