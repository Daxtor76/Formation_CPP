// Formation_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Test.hpp";

using namespace std;

int main()
{
    int tableau[5];

    AfficheMessage("Coucou");

    cout << "Nous allons additionner deux nombres ! Entrez en un premier :" << endl;
    double a(0), b(0), c(0);
    cin >> a;
    cout << "Entrez le deuxième nombre :" << endl;
    cin >> b;

    const double result = a + b;
    cout << "Le résultat de l'addition est : " << result << endl;

    cout << "Multiplions ce résultat par un nombre :" << endl;
    cin >> c;

    const double mult = result * c;
    cout << "Le résultat de la multiplication est : " << mult << endl;

    /*cout << "Hello World!\n" << endl;
    cout << "I learn C++" << endl;

    int age(32);
    cout << age << endl;

    int& ageReference (age);

    cout << ageReference << endl;
    cout << age << endl;

    ageReference = 10;

    cout << ageReference << endl;
    cout << age << endl;

    cout << "Quel est votre âge ?" << endl;
    cin >> ageReference;
    cin.ignore();
    cout << "Votre âge est : " << age << endl;

    string name("Default name");
    cout << "Quel est votre nom ?" << endl;
    getline(cin, name);

    cout << name << " est votre nom.";*/

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
