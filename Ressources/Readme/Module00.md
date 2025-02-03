# C++ Module 00 - Introduction aux bases du C++

## Objectif
Ce module introduit les bases du langage C++, en se concentrant sur des concepts fondamentaux tels que les **classes**, les **fonctions membres**, les **listes d'initialisation**, les **flux d'entrée/sortie**, les **modificateurs `static` et `const`**, et les **namespaces**. 

L'objectif est de comprendre les principes de la programmation orientée objet (OOP) en C++ et d'appliquer ces concepts à travers des exercices progressifs.

## Concepts abordés
- **Namespaces** : Organisation du code et évitement des conflits de noms.
- **Classes et objets** : Notions de base de l'OOP en C++.
- **Méthodes et fonctions membres** : Manipulation des données internes d'une classe.
- **Flux d'entrée/sortie (`std::cout`, `std::cin`)** : Gestion des entrées et sorties.
- **Modificateurs `const` et `static`** : Différences entre données et méthodes constantes et statiques.
- **Listes d'initialisation** : Initialisation efficace des attributs d'une classe.
- **Gestion de la mémoire** : Allocation statique et principes de base de la gestion mémoire en C++.

---

## Aperçu des exercices

### **Exercice 00 : Mégaphone**
📌 **Notions : Entrées/sorties (`std::cout`), manipulation de chaînes de caractères.**
- Objectif : Écrire un programme qui affiche en majuscules tout texte passé en argument.
- Permet d'apprendre l'utilisation des **flux de sortie (`std::cout`)**, des **paramètres de ligne de commande**, et des **fonctions de manipulation de texte**.

### **Exercice 01 : My Awesome PhoneBook**
📌 **Notions : Classes, encapsulation, manipulation de chaînes, flux d'entrée/sortie (`std::cin`, `std::cout`).**
- Implémentation d'un carnet d'adresses basique utilisant des **objets** et la **programmation orientée objet**.
- Introduction aux **modificateurs d'accès** (`private`, `public`).
- Utilisation des **flux d'entrée/sortie** pour récupérer et afficher des données.

### **Exercice 02 : L'emploi de vos rêves**
📌 **Notions : Fichiers `.hpp` et `.cpp`, constructeurs et destructeurs, journalisation des événements.**
- Implémentation d'une classe `Account` représentant un compte bancaire avec journalisation des transactions.
- Introduction aux **constructeurs** et **destructeurs** pour la gestion de l'initialisation et de la destruction d'objets.
- Compréhension de l'importance de **la séparation entre l'interface (`.hpp`) et l'implémentation (`.cpp`)**.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11** ou supérieur, **pas de STL avant le module 08.**

---

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- S'assurer que le code est propre, lisible et bien structuré.
- Utiliser **Makefile** pour faciliter la compilation.

Bonne chance ! 🚀
