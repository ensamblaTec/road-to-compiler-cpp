# 🧩 Desafío 08: Imprimir tipos con `static_cast`

## 🎯 Objetivo

Aprender a **imprimir los valores de un `enum class`** en C++ utilizando `static_cast<int>()`.  
Este es un paso esencial para entender cómo trabajar con **enumeraciones fuertemente tipadas**, como las que usaremos para representar tipos de `Token` en un compilador.

---

## 🧠 ¿Qué aprenderás?

- Qué es un `enum class` y cómo se diferencia de un `enum` clásico.
- Por qué no puedes imprimir directamente un `enum class` como número o texto.
- Cómo usar `static_cast<int>()` para convertir un `enum class` a un entero imprimible.
- Cómo organizar información de un `Token` para depuración o pruebas.

---

## 🛠️ Instrucciones

1. Define un `enum class TokenType` con algunos valores, por ejemplo:  
   `IDENTIFIER`, `NUMBER`, `PLUS`, `MINUS`.

2. Crea una `struct Token` con los siguientes campos:

   - `TokenType type`
   - `std::string value`
   - `int line`, `int column`

3. Declara 2 o 3 tokens distintos usando esa estructura.

4. Imprime los tipos de tokens usando `static_cast<int>(token.type)`  
   Esto convertirá el valor del `enum class` a un número entero para que puedas verlo por consola.

---
