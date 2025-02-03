# C++ Module 06 - Casts et Manipulation de Types

## Objectif
Ce module introduit les **casts en C++**, qui permettent de convertir un type en un autre de manière contrôlée. L’objectif est d’explorer différentes façons de convertir des types et d’en comprendre les implications.

## Concepts abordés
- **Conversions de types** : Transformations explicites entre différents types de données.
- **Casts en C++** : `static_cast`, `reinterpret_cast`, `dynamic_cast`, `const_cast`.
- **Sérialisation** : Conversion de pointeurs en nombres pour les stocker et les récupérer.
- **Identification de types à l'exécution** : Détection d’un type dérivé sans utiliser `typeinfo`.

---

## Aperçu des exercices

### **Exercice 00 : Conversion de types scalaires**
📌 **Notions : Détection et conversion explicite de types.**
- Création de la classe `ScalarConverter` avec une méthode statique `convert()`.
- Détection du type de l’entrée (`char`, `int`, `float`, `double`).
- Conversion explicite vers les autres types.
- Gestion des cas spéciaux (`nan`, `inf`, `-inf`).
- Affichage formaté du résultat et gestion des erreurs de conversion.

### **Exercice 01 : Sérialisation**
📌 **Notions : Conversion entre pointeurs et entiers.**
- Création d’une classe `Serializer` avec deux méthodes statiques :
  - `serialize(Data* ptr)`: Convertit un pointeur en `uintptr_t`.
  - `deserialize(uintptr_t raw)`: Convertit un `uintptr_t` en pointeur `Data*`.
- Test de la cohérence de la conversion (`ptr -> serialize() -> deserialize() -> ptr`).
- Comprendre comment manipuler des **adresses mémoire en tant que valeurs numériques**.

### **Exercice 02 : Identifier le type réel**
📌 **Notions : Casts et identification dynamique de type.**
- Création d’une classe `Base` avec un **destructeur virtuel**.
- Création de trois classes vides `A`, `B`, `C` héritant de `Base`.
- Implémentation de :
  - `Base* generate()`: Génère aléatoirement un objet `A`, `B` ou `C`.
  - `void identify(Base* p)`: Identifie le type réel à partir d’un pointeur.
  - `void identify(Base& p)`: Identifie le type réel à partir d’une référence.
- Interdiction d’utiliser `typeinfo`, utilisation de **dynamic_cast**.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11 ou supérieur, pas de STL avant le module 08**.

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier que les **casts utilisés sont corrects** et adaptés à chaque situation.
- Faire attention aux **fuites mémoire**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀