/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // Para convertir cadenas a minúsculas

using namespace std;

// Definición de la estructura de un personaje
struct Character {
    string name;
    string hint;
};

// Lista de personajes de Nintendo y Super Smash Bros para adivinar
vector<Character> characters = {
    {"Mario", "El fontanero más famoso de Nintendo"},
    {"Link", "El héroe de la saga Zelda"},
    {"Samus", "La cazarrecompensas espacial"},
    {"Donkey Kong", "El gorila más fuerte"},
    {"Pikachu", "La mascota de Pokémon"},
    {"Kirby", "La bola rosa que puede copiar habilidades"},
    {"Fox", "El piloto de Arwing de Star Fox"},
    {"Luigi", "El hermano de Mario"},
    {"Captain Falcon", "El corredor de F-Zero"},
    {"Ness", "El joven con poderes psíquicos"},
    {"Jigglypuff", "El Pokémon cantante"},
    {"Peach", "La princesa del Reino Champiñón"},
    {"Yoshi", "El dinosaurio de montar"},
    {"Ice Climbers", "El dúo de escaladores de montaña"},
    {"Zelda", "La princesa de Hyrule"},
    {"Sheik", "La misteriosa ninja"},
    {"Marth", "El espadachín de Fire Emblem"},
    {"Ganondorf", "El archienemigo de Link"},
    {"Mewtwo", "El poderoso Pokémon legendario"},
    {"Falco", "El piloto de Arwing y amigo de Fox"},
    // Agrega más personajes de Super Smash Bros aquí
};

// Función para seleccionar un personaje aleatorio de la lista
Character selectRandomCharacter() {
    srand(time(NULL));
    int randomIndex = rand() % characters.size();
    return characters[randomIndex];
}

// Función para convertir una cadena a minúsculas
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Función para comparar las respuestas y actualizar la puntuación
void compareAnswers(string player1, string player2, Character targetCharacter, int& scorePlayer1, int& scorePlayer2) {
    string player1Lower = toLowerCase(player1);
    string player2Lower = toLowerCase(player2);
    string targetCharacterLower = toLowerCase(targetCharacter.name);

    if (player1Lower == targetCharacterLower) {
        scorePlayer1++;
        cout << "¡Respuesta correcta! Punto para el Jugador 1." << endl;
    } else {
        cout << "Respuesta incorrecta para el Jugador 1. El personaje era " << targetCharacter.name << "." << endl;
    }

    if (player2Lower == targetCharacterLower) {
        scorePlayer2++;
        cout << "¡Respuesta correcta! Punto para el Jugador 2." << endl;
    } else {
        cout << "Respuesta incorrecta para el Jugador 2. El personaje era " << targetCharacter.name << "." << endl;
    }
}

// Función para mostrar los resultados finales y determinar el ganador
void showFinalResults(string player1Name, string player2Name, int scorePlayer1, int scorePlayer2) {
    cout << "\n--- Resultados finales ---" << endl;
    cout << player1Name << ": " << scorePlayer1 << " puntos." << endl;
    cout << player2Name << ": " << scorePlayer2 << " puntos." << endl;

    if (scorePlayer1 > scorePlayer2) {
        cout << "¡" << player1Name << " es el ganador!" << endl;
        cout << player2Name << " ha perdido. ¡Mejor suerte la próxima vez!" << endl;
    } else if (scorePlayer2 > scorePlayer1) {
        cout << "¡" << player2Name << " es el ganador!" << endl;
        cout << player1Name << " ha perdido. ¡Mejor suerte la próxima vez!" << endl;
    } else {
        cout << "¡Es un empate! Ambos jugadores tienen la misma puntuación." << endl;
    }
}

int main() {
    cout << "¡Bienvenido a Adivina el Personaje de Nintendo y Super Smash Bros!" << endl;
    cout << "Jugador 1, introduce tu nombre: ";
    string player1Name;
    getline(cin, player1Name);

    cout << "Jugador 2, introduce tu nombre: ";
    string player2Name;
    getline(cin, player2Name);

    int scorePlayer1 = 0;
    int scorePlayer2 = 0;

    char playAgain = 's';

    while (playAgain == 's' || playAgain == 'S') {
        Character targetCharacter = selectRandomCharacter();
        string currentPlayer1Guess;
        string currentPlayer2Guess;

        cout << "\n" << player1Name << ", es tu turno." << endl;
        cout << "Adivina el personaje: " << targetCharacter.hint << endl;
        cout << "Respuesta: ";
        getline(cin, currentPlayer1Guess);

        cout << "\n" << player2Name << ", es tu turno." << endl;
        cout << "Adivina el personaje: " << targetCharacter.hint << endl;
        cout << "Respuesta: ";
        getline(cin, currentPlayer2Guess);

        compareAnswers(currentPlayer1Guess, currentPlayer2Guess, targetCharacter, scorePlayer1, scorePlayer2);

        cout << "\n¿Quieren jugar de nuevo? (s/n): ";
        cin >> playAgain;
        cin.ignore(); // Ignorar el salto de línea residual después de leer playAgain
    }

    showFinalResults(player1Name, player2Name, scorePlayer1, scorePlayer2);

    return 0;
}
