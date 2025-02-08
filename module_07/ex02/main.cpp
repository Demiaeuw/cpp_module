#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// Mon main de test 

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "Array.hpp"

// #define MAX_VAL 10  // On réduit pour mieux voir les résultats

// void printArray(const Array<int>& arr) {
//     std::cout << "[ ";
//     for (size_t i = 0; i < arr.getSize(); i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << "]" << std::endl;
// }

// int main() {
//     std::cout << "🔹 Initialisation des tableaux 🔹" << std::endl;
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];

//     std::cout << "✅ Génération de nombres aléatoires et remplissage des tableaux..." << std::endl;
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++) {
//         const int value = rand() % 100;  // Valeurs plus lisibles
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     std::cout << "📌 Contenu du tableau `numbers` : ";
//     printArray(numbers);

//     std::cout << "\n🔹 Test du constructeur par copie et opérateur d'affectation 🔹" << std::endl;
//     Array<int> copyConstructed(numbers);
//     Array<int> assigned;
//     assigned = numbers;

//     std::cout << "📌 Contenu du tableau `copyConstructed` (copie par constructeur) : ";
//     printArray(copyConstructed);
    
//     std::cout << "📌 Contenu du tableau `assigned` (copie par affectation) : ";
//     printArray(assigned);

//     std::cout << "\n🔹 Vérification de l'indépendance des copies 🔹" << std::endl;
//     std::cout << "✅ Modification du tableau original `numbers[0] = 999`..." << std::endl;
//     numbers[0] = 999;
    
//     std::cout << "📌 Contenu du tableau `numbers` après modification : ";
//     printArray(numbers);

//     std::cout << "📌 Contenu de `copyConstructed` (doit être inchangé) : ";
//     printArray(copyConstructed);

//     std::cout << "📌 Contenu de `assigned` (doit être inchangé) : ";
//     printArray(assigned);

//     std::cout << "\n🔹 Test des accès hors limites 🔹" << std::endl;
//     try {
//         std::cout << "🛑 Test d'accès à numbers[-1] : ";
//         numbers[-1] = 0;  // Devrait lever une exception
//     } catch(const std::exception& e) {
//         std::cerr << "❌ Exception attrapée : " << e.what() << std::endl;
//     }

//     try {
//         std::cout << "🛑 Test d'accès à numbers[MAX_VAL] : ";
//         numbers[MAX_VAL] = 0;  // Devrait lever une exception
//     } catch(const std::exception& e) {
//         std::cerr << "❌ Exception attrapée : " << e.what() << std::endl;
//     }

//     std::cout << "\n🔹 Test de modification et de lecture 🔹" << std::endl;
//     std::cout << "✅ Modification des valeurs (multiplication par 2)..." << std::endl;
//     for (size_t i = 0; i < numbers.getSize(); i++) {
//         numbers[i] *= 2;
//     }

//     std::cout << "📌 Contenu du tableau `numbers` après modification : ";
//     printArray(numbers);

//     std::cout << "\n🔹 Nettoyage de la mémoire 🔹" << std::endl;
//     delete[] mirror;  // Libération de la mémoire allouée dynamiquement
//     std::cout << "✅ Mémoire nettoyée avec succès.\n" << std::endl;

//     std::cout << "🎉 Tous les tests ont été passés avec succès ! 🎉" << std::endl;
//     return 0;
// }
