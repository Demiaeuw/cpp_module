# C++ Module 07 - Templates et Généricité

## Objectif
Ce module introduit les **templates en C++**, qui permettent de créer du code générique réutilisable pour différents types de données. L’objectif est d’explorer la programmation générique à travers des fonctions et des classes template.

## Concepts abordés
- **Fonctions template** : Création de fonctions génériques opérant sur plusieurs types.
- **Classes template** : Définition de classes paramétrables par un type générique `T`.
- **Opérateurs génériques** : Surcharge d’opérateurs pour les types génériques.
- **Gestion de la mémoire dynamique avec templates**.

---

## Aperçu des exercices

### **Exercice 00 : Start with a few functions**
📌 **Notions : Fonctions templates pour la manipulation de valeurs génériques.**
- Implémentation des fonctions template :
  - `swap(T &a, T &b)`: Échange les valeurs de `a` et `b`.
  - `min(T a, T b)`: Retourne la plus petite valeur (retourne `b` en cas d’égalité).
  - `max(T a, T b)`: Retourne la plus grande valeur (retourne `b` en cas d’égalité).
- Ces fonctions doivent être définies dans un fichier d’en-tête (`.hpp`).

### **Exercice 01 : Iter**
📌 **Notions : Fonctions templates appliquées aux tableaux.**
- Création de la fonction template `iter` prenant :
  - Un tableau de n’importe quel type.
  - La taille du tableau.
  - Une fonction appliquée à chaque élément du tableau.
- Objectif : Appliquer une **fonction générique** sur tous les éléments d’un tableau de n’importe quel type.

### **Exercice 02 : Array**
📌 **Notions : Classes templates et gestion dynamique de la mémoire.**
- Création de la classe template `Array<T>` avec :
  - Constructeur par défaut : Crée un tableau vide.
  - Constructeur prenant un `unsigned int n` : Alloue un tableau de `n` éléments.
  - Constructeur de copie et opérateur `=` : Assure que la copie est **indépendante** de l’original.
  - Surcharge de `operator[]` pour accéder aux éléments avec contrôle des indices.
  - Méthode `size()` retournant le nombre d’éléments.
- Interdiction d’utiliser la **pré-allocation de mémoire**.
- Vérification des accès mémoire avec `operator[]`, levée d’exception si hors limites.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11 ou supérieur, pas de STL avant le module 08**.

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier que les **templates sont bien utilisés** et définis dans les fichiers `.hpp`.
- Faire attention aux **fuites mémoire** dans les classes templates.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀
