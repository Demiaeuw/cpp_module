# C++ Module 03 - Héritage en Programmation Orientée Objet

## Objectif
Ce module introduit un concept fondamental de la Programmation Orientée Objet (OOP) en C++ : **l’héritage**. Il permet de créer des classes dérivées à partir de classes existantes, favorisant la réutilisation et la structuration du code.

L’objectif est d’explorer l’héritage en C++, ainsi que la manière dont les **constructeurs, destructeurs et méthodes** sont transmis aux classes dérivées.

## Concepts abordés
- **Héritage simple et multiple** : Réutilisation du code à travers l’héritage.
- **Chaînage des constructeurs et destructeurs** : Ordre d’appel et impact sur la mémoire.
- **Surcharge et redéfinition de méthodes** : Modifier le comportement hérité.
- **Attributs protégés (`protected`)** : Différence entre `private` et `protected`.
- **Ambiguïtés dans l’héritage multiple** : Gestion des conflits de noms et résolution avec `scope resolution`.

---

## Aperçu des exercices

### **Exercice 00 : Aaaaand... OPEN!**
📌 **Notions : Introduction aux classes et méthodes.**
- Implémentation de la classe `ClapTrap` avec des points de vie, énergie et attaque.
- Ajout de méthodes pour attaquer, subir des dégâts et se réparer.
- Gestion des ressources et affichage des actions réalisées.

### **Exercice 01 : Serena, my love!**
📌 **Notions : Héritage et spécialisation des classes.**
- Création de la classe `ScavTrap` dérivée de `ClapTrap`.
- Modification des valeurs de base (HP, énergie, attaque).
- Ajout de la méthode spéciale `guardGate()`.
- Compréhension de **l’ordre des constructeurs/destructeurs** lors de l’héritage.

### **Exercice 02 : Repetitive work**
📌 **Notions : Extension de l’héritage et spécialisation avancée.**
- Création de `FragTrap`, une autre variante de `ClapTrap`.
- Modification des attributs initiaux et ajout de la méthode `highFivesGuys()`.
- Expérimentation avec **l’héritage et la personnalisation des classes dérivées**.

### **Exercice 03 : Now it's weird!**
📌 **Notions : Héritage multiple et conflits de noms.**
- Création de `DiamondTrap`, héritant à la fois de `FragTrap` et `ScavTrap`.
- Gestion des conflits d’héritage et appel aux bonnes méthodes des classes parentes.
- Ajout de la méthode `whoAmI()` pour afficher l’identité multiple du robot.
- Introduction aux **ambiguïtés de l’héritage multiple et leur résolution**.

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
