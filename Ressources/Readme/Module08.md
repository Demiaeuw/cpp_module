# C++ Module 08 - Containers, Itérateurs et Algorithmes

## Objectif
Ce module introduit les **conteneurs de la STL (Standard Template Library)**, les **itérateurs**, et l’utilisation des **algorithmes standards** en C++. L’objectif est de manipuler efficacement des collections de données tout en exploitant la puissance des outils fournis par la bibliothèque standard.

## Concepts abordés
- **STL Containers** : `vector`, `list`, `stack`, `map`, etc.
- **Itérateurs** : Navigation et manipulation des éléments d’un conteneur.
- **Algorithmes STL** : Fonctions comme `find()`, `sort()`, `for_each()`.
- **Gestion efficace des données et optimisation de la mémoire**.

---

## Aperçu des exercices

### **Exercice 00 : Easy Find**
📌 **Notions : Recherche dans les conteneurs STL.**
- Création d’une fonction template `easyfind` prenant :
  - Un conteneur de la STL (`vector`, `list`, etc.).
  - Une valeur à rechercher.
- Retourne un itérateur vers la première occurrence ou lève une exception si non trouvée.
- Utilisation des algorithmes de la STL (`find()`).

### **Exercice 01 : Span**
📌 **Notions : Manipulation de conteneurs et algorithmes STL.**
- Création d’une classe `Span` stockant `N` entiers.
- Implémentation des méthodes :
  - `addNumber(int)`: Ajoute un entier, lève une exception si plein.
  - `shortestSpan()`: Trouve la plus petite différence entre deux nombres.
  - `longestSpan()`: Trouve la plus grande différence entre deux nombres.
- Implémentation d’une fonction pour remplir `Span` avec une plage d’itérateurs.
- Gestion des erreurs (ajout de trop d’éléments, calcul de `Span` sur un ensemble vide).

### **Exercice 02 : Abomination Mutante**
📌 **Notions : Personnalisation des conteneurs STL.**
- Création de `MutantStack`, une classe dérivée de `std::stack`.
- Ajout d’**itérateurs** pour permettre l’itération sur les éléments (ce qui manque à `std::stack`).
- Vérification que `MutantStack` fonctionne comme une `std::list`.
- Comparaison des résultats entre `MutantStack` et `std::list`.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **Utilisation obligatoire de la STL (containers et algorithmes).**

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier que les **containers et algorithmes de la STL** sont bien utilisés.
- Faire attention aux **fuites mémoire**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀