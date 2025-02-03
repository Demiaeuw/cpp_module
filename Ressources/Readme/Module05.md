# C++ Module 05 - Exceptions et Bureaucratie

## Objectif
Ce module introduit deux concepts majeurs en C++ : **la gestion des exceptions** et **les classes hiérarchisées**. L’objectif est de comprendre comment gérer les erreurs de manière propre et comment structurer des classes avec des interactions complexes.

## Concepts abordés
- **Gestion des exceptions** : `try`, `catch`, `throw` pour gérer des erreurs de manière propre.
- **Classes hiérarchiques** : Héritage structuré avec des règles strictes.
- **Utilisation des classes abstraites** : Définition de comportements communs aux sous-classes.
- **Surcharge d’opérateurs** : Personnalisation de l’affichage (`<<`).

---

## Aperçu des exercices

### **Exercice 00 : Mommy, when I grow up, I want to be a bureaucrat!**
📌 **Notions : Exceptions et surcharge d’opérateur.**
- Implémentation de la classe `Bureaucrat` avec un **nom constant** et un **grade modifiable** (de 1 à 150).
- Si un grade invalide est donné, une **exception est levée** (`GradeTooHighException` ou `GradeTooLowException`).
- Ajout de méthodes pour **incrémenter et décrémenter le grade**.
- Surcharge de `operator<<` pour afficher le bureaucrate sous forme : `<nom>, bureaucrat grade <grade>`.

### **Exercice 01 : Form up, maggots!**
📌 **Notions : Interaction entre classes et exceptions.**
- Création d’une classe `Form` avec :
  - Un **nom constant**.
  - Un **booléen signé ou non**.
  - Deux **grades requis** (un pour signer, un pour exécuter).
- Un **bureaucrate peut signer un formulaire** si son grade est suffisant.
- En cas d’erreur, une **exception est levée** (`GradeTooLowException`).
- Ajout de `signForm()` dans `Bureaucrat` qui tente de signer un formulaire et affiche un message approprié.

### **Exercice 02 : No, you need form 28B, not 28C...**
📌 **Notions : Classes abstraites et héritage structuré.**
- Transformation de `Form` en **classe abstraite** (`AForm`).
- Création de trois classes concrètes :
  - `ShrubberyCreationForm` : Crée un fichier ASCII.
  - `RobotomyRequestForm` : Simule une robotisation aléatoire.
  - `PresidentialPardonForm` : Affiche un message de pardon.
- Ajout de `execute(Bureaucrat const & executor)` pour exécuter les actions si les conditions sont remplies.
- Ajout de `executeForm()` dans `Bureaucrat`.

### **Exercice 03 : At least this beats coffee-making**
📌 **Notions : Gestion dynamique et usines à objets.**
- Création de la classe `Intern` capable de générer dynamiquement des formulaires.
- Ajout de `makeForm(formName, target)` retournant un `Form*` correspondant au nom donné.
- Gestion d’un **mapping efficace des noms de formulaires** sans utiliser `if/else` imbriqués.
- En cas de nom inconnu, affichage d’un message d’erreur.

---

## Compilation
- Compiler le code avec :
  ```sh
  c++ -Wall -Wextra -Werror -std=c++98 fichier.cpp -o programme
  ```
- Respecter les règles du module : **pas d'utilisation de C++11 ou supérieur, pas de STL avant le module 08**.

## Notes finales
- Lire **toutes** les consignes avant de commencer.
- Vérifier que les **exceptions sont bien gérées** et affichent des messages appropriés.
- Faire attention aux **fuites mémoire**.
- S'assurer que le code est **propre, lisible et bien structuré**.
- Utiliser `Makefile` pour faciliter la compilation.

Bonne chance ! 🚀

