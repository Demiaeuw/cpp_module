# C++ Module 02 - Polymorphisme ad-hoc, Surcharge d'opérateurs et Forme Canonique

## Objectif
Ce module introduit des concepts avancés de la Programmation Orientée Objet (OOP) en C++, notamment la **forme canonique des classes**, la **surcharge d’opérateurs**, et le **polymorphisme ad-hoc**.

L’objectif est de structurer correctement ses classes tout en exploitant la puissance des opérateurs pour manipuler des objets de manière intuitive.

## Concepts abordés
- **Forme canonique de Coplien** : Implémentation des **constructeurs et opérateurs d'affectation**.
- **Surcharge d'opérateurs** : Personnalisation des opérateurs arithmétiques, de comparaison, et d’incrémentation.
- **Polymorphisme ad-hoc** : Redéfinition d'opérateurs pour des objets spécifiques.
- **Manipulation de nombres en virgule fixe** : Représentation optimisée des nombres à virgule flottante.
- **Gestion de la mémoire et des objets** : Importance du cycle de vie des objets.

---

## Aperçu des exercices

### **Exercice 00 : Mon premier canon**
📌 **Notions : Forme canonique, représentation en virgule fixe.**
- Création d’une classe `Fixed` respectant la **forme canonique de Coplien**.
- Introduction à la **représentation des nombres en virgule fixe**.
- Compréhension des **constructeurs et destructeurs**.

### **Exercice 01 : Premiers pas vers une classe utile**
📌 **Notions : Conversion de types, surcharge de l’opérateur d’insertion (`<<`).**
- Ajout de **constructeurs prenant des entiers et des flottants**.
- Conversion entre **virgule fixe et flottante**.
- Surcharge de `operator <<` pour afficher facilement un objet `Fixed`.

### **Exercice 02 : Maintenant, on peut parler**
📌 **Notions : Surcharge d'opérateurs arithmétiques et de comparaison.**
- Implémentation des opérateurs `+`, `-`, `*`, `/` pour manipuler `Fixed` comme un nombre.
- Ajout des opérateurs de **comparaison** (`<`, `>`, `==`, etc.).
- Gestion des opérateurs **d’incrémentation et de décrémentation** (`++`, `--`).
- Introduction aux **fonctions membres statiques** (`min` et `max`).

### **Exercice 03 : BSP**
📌 **Notions : Algorithme BSP (Binary Space Partitioning), géométrie 2D.**
- Création d’une classe `Point` respectant la **forme canonique**.
- Vérification si un **point est à l’intérieur d’un triangle** défini par trois sommets.
- Application pratique du **calcul vectoriel en géométrie 2D**.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11 ou supérieur, pas de STL avant le module 08**.

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Faire attention aux **fuites mémoire**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀
