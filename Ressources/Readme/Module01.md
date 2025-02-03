# C++ Module 01 - Allocation mémoire, Pointeurs et Références

## Objectif
Ce module approfondit les concepts de gestion de la mémoire en C++, notamment l’utilisation des **allocations dynamiques**, des **pointeurs vers membres**, des **références** et des **instructions `switch`**.

L’objectif est d’acquérir une meilleure compréhension des pointeurs et des références, qui sont des notions essentielles en programmation C++.

## Concepts abordés
- **Allocation dynamique** : Utilisation de `new` et `delete` pour gérer la mémoire.
- **Pointeurs et références** : Différences et bonnes pratiques d'utilisation.
- **Pointeurs vers fonctions membres** : Invocation de méthodes via des pointeurs.
- **Structures de contrôle (`switch`)** : Alternative aux `if/else` multiples.
- **Gestion de la mémoire** : Vérification des fuites mémoire.

---

## Aperçu des exercices

### **Exercice 00 : BraiiiiiiinnnzzzZ**
📌 **Notions : Allocation dynamique, destructeurs, pointeurs.**
- Implémentation d'une classe `Zombie` avec une fonction `announce()`.
- Création et destruction d'objets `Zombie` via **allocation dynamique et statique**.
- Différences entre **allocation sur la pile (stack) et le tas (heap)**.

### **Exercice 01 : Moar brainz!**
📌 **Notions : Allocation de tableaux dynamiques.**
- Création d'une horde de zombies en une seule allocation (`new[]`).
- Gestion correcte de la mémoire avec `delete[]`.
- Introduction à la manipulation de **tableaux d'objets dynamiques**.

### **Exercice 02 : HI THIS IS BRAIN**
📌 **Notions : Différence entre pointeurs et références.**
- Déclaration et manipulation d’une **référence (`&`) et d’un pointeur (`*`)**.
- Affichage des **adresses mémoire** et des **valeurs pointées**.
- Compréhension des **différences entre pointeurs et références**.

### **Exercice 03 : Unnecessary violence**
📌 **Notions : Références vs Pointeurs.**
- Création d'une classe `Weapon` et manipulation d'attributs par **référence**.
- Différences entre les objets `HumanA` (utilisation de références) et `HumanB` (utilisation de pointeurs).
- Comprendre **quand utiliser une référence et quand utiliser un pointeur**.

### **Exercice 04 : Sed is for losers**
📌 **Notions : Manipulation de fichiers en C++.**
- Lecture et écriture de fichiers avec `std::ifstream` et `std::ofstream`.
- Remplacement de texte dans un fichier sans utiliser `std::string::replace()`.
- Introduction à la **gestion des flux de fichiers**.

### **Exercice 05 : Harl 2.0**
📌 **Notions : Pointeurs vers fonctions membres.**
- Création d'une classe `Harl` qui affiche des messages en fonction d'un niveau (`DEBUG`, `INFO`, `WARNING`, `ERROR`).
- Utilisation de **pointeurs vers fonctions membres** pour éviter une cascade de `if/else`.
- Compréhension de l'appel de méthodes via des pointeurs.

### **Exercice 06 : Harl filter**
📌 **Notions : Instruction `switch`, filtrage de messages.**
- Étendre `Harl` pour filtrer les niveaux de message affichés.
- Utilisation du **`switch`** pour gérer les niveaux de log.
- Réduction de la complexité des conditions imbriquées (`if/else`).

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