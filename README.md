# 🛡️ C++ Default Template Parameters

## 📖 About the Project
This project explores default arguments within C++ templates. It demonstrates how to establish baseline data types for generic classes, allowing the compiler to automatically infer types when instantiated with empty brackets, while preserving the flexibility to explicitly override those types at runtime.

## ✨ Features
*   **Default Parameterization:** Implements `template <class T1 = int, class T2 = string, class T3 = float>` to set a standard data configuration.
*   **Empty Bracket Instantiation:** Utilizes `HeroStats<>` to generate a class strictly using the predefined fallback types.
*   **Runtime Type Overrides:** Dynamically replaces the default template signature with custom types (e.g., `<string, int, double>`) during object creation.
