# C++ Module 04 - Polymorphisme, Classes Abstraites et Interfaces

## Objectif
Ce module introduit des concepts avancés de la Programmation Orientée Objet (OOP) en C++, notamment le **polymorphisme par sous-typage**, les **classes abstraites** et les **interfaces**.

L’objectif est de mieux comprendre l’abstraction en C++ et d’exploiter les classes de base pour structurer le code efficacement.

## Concepts abordés
- **Polymorphisme par sous-typage** : Permet d’utiliser des objets dérivés à travers des pointeurs ou références de la classe de base.
- **Classes abstraites** : Définition de méthodes virtuelles pures (`= 0`) pour forcer l’implémentation dans les classes dérivées.
- **Héritage et virtualisation** : Importance des destructeurs virtuels.
- **Interfaces en C++** : Mise en œuvre avec des classes purement abstraites.
- **Gestion dynamique des objets** : Allocation et destruction d’objets polymorphes.

---

## Aperçu des exercices

### **Exercice 00 : Polymorphisme**
📌 **Notions : Héritage et polymorphisme de base.**
- Création de la classe `Animal` et des classes dérivées `Dog` et `Cat`.
- Définition d’une méthode virtuelle `makeSound()` redéfinie dans chaque classe dérivée.
- Introduction au **polymorphisme et à la redéfinition de méthodes**.

### **Exercice 01 : Je ne veux pas brûler le monde**
📌 **Notions : Allocation dynamique et copie profonde.**
- Ajout de la classe `Brain` gérant un tableau de 100 idées.
- Ajout d’un pointeur vers `Brain` dans `Dog` et `Cat`.
- Implémentation de **constructeurs de copie et d’opérateurs d’affectation** pour gérer correctement la mémoire.
- Suppression des objets via un tableau polymorphe (`Animal* array[]`).

### **Exercice 02 : Classe abstraite**
📌 **Notions : Abstraction et classes non instanciables.**
- Transformation de `Animal` en **classe abstraite** en ajoutant une **méthode virtuelle pure**.
- Empêcher l’instanciation directe d’`Animal`.
- Comprendre le rôle des classes abstraites dans la conception orientée objet.

### **Exercice 03 : Interface & recap**
📌 **Notions : Interfaces et polymorphisme avancé.**
- Implémentation d’une classe `AMateria` avec des méthodes virtuelles pures.
- Création de classes `Ice` et `Cure` dérivées de `AMateria`.
- Implémentation d’une interface `ICharacter` et d’une classe `Character` gérant un inventaire de `AMateria`.
- Création de `MateriaSource` permettant d’apprendre et de cloner des `AMateria`.
- Gestion correcte de la mémoire et des copies profondes.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11 ou supérieur, pas de STL avant le module 08**.

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier l’ordre des **constructeurs et destructeurs** dans l’héritage.
- Faire attention aux **fuites mémoire**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀
