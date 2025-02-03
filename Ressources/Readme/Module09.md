# C++ Module 09 - Standard Template Library (STL)

## Objectif
Ce module approfondit l’utilisation de la **STL (Standard Template Library)** en C++. L’objectif est d’apprendre à manipuler des **conteneurs**, **itérateurs**, et **algorithmes standards** de manière optimisée.

## Concepts abordés
- **STL Containers** : Utilisation de `vector`, `list`, `map`, `stack`, etc.
- **Itérateurs et Algorithmes** : Manipulation efficace des structures de données.
- **Gestion avancée des données** : Tri, recherche, et manipulation optimisée des séquences.
- **Gestion des erreurs et des exceptions** dans les conteneurs STL.

---

## Aperçu des exercices

### **Exercice 00 : Bitcoin Exchange**
📌 **Notions : Manipulation de fichiers et recherche dans un conteneur.**
- Création d’un programme `btc` qui affiche la valeur d’une quantité de bitcoins à une date donnée.
- Utilisation d’une **base de données CSV** contenant les prix historiques du bitcoin.
- Chargement et recherche des valeurs dans un **conteneur STL**.
- Gestion des erreurs : format incorrect, dates invalides, valeurs hors plage.

### **Exercice 01 : Reverse Polish Notation (RPN)**
📌 **Notions : Utilisation d’une pile (`stack`) pour évaluer une expression mathématique.**
- Création d’un programme `RPN` qui évalue une expression en **notation polonaise inversée**.
- Les opérateurs supportés : `+ - * /`.
- Utilisation de **`std::stack`** pour gérer l’évaluation.
- Vérification des erreurs : division par zéro, syntaxe invalide.

### **Exercice 02 : PmergeMe**
📌 **Notions : Tri avancé et comparaison de performances entre deux conteneurs.**
- Implémentation de **l’algorithme Ford-Johnson (merge-insert sort)**.
- Utilisation **obligatoire de deux conteneurs STL différents**.
- Capacité à trier **au moins 3000 nombres** efficacement.
- Affichage du **temps d’exécution** pour chaque conteneur utilisé.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **Utilisation obligatoire de la STL, interdiction des bibliothèques externes.**

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier que les **conteneurs appropriés sont utilisés** et respecter les restrictions par exercice.
- Faire attention aux **fuites mémoire et à la gestion des exceptions**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀
