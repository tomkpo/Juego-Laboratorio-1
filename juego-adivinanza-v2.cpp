/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

string characters[4][3] = {
    {"Mario", "Luigi", "Peach"},
    {"Bowser", "Wario", "Waluigi"},
    {"Pikachu", "Charmander", "Bulbasaur"},
    {"Donkey Kong", "Diddy Kong", "Dixie Kong"}
};

string viewerCharacter(int row, int column) {
    if (row >= 0 && row < 4 && column >= 0 && column < 3) {
        return characters[row][column];
    } else {
        return "Personaje no válido";
    }
}

void viewCharacter() {
    cout << "Los personajes disponibles son:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "[" << i << "][" << j << "]: " << characters[i][j] << endl;
        }
    }
}

int playGame(int& row, int& column) {
    cout << "Utiliza el número 1 para afirmar y el número 0 para negar." << endl;
    cout << "¿Estás listo para jugar?" << endl;
    cout << "¿Tu personaje es del mundo de Mario? (1 para afirmar, 0 para negar): ";
    int option;
    cin >> option;

    while (cin.fail() || (option != 0 && option != 1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opción inválida. Inténtalo de nuevo: ";
        cin >> option;
    }

    if (option == 1) {
        cout << "¿Tu personaje es uno de los buenos? (1 para afirmar, 0 para negar): ";
        cin >> option;

        while (cin.fail() || (option != 0 && option != 1)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opción inválida. Inténtalo de nuevo: ";
            cin >> option;
        }

        if (option == 1) {
            cout << "¿Tu personaje utiliza una gorra? (1 para afirmar, 0 para negar): ";
            cin >> option;

            while (cin.fail() || (option != 0 && option != 1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opción inválida. Inténtalo de nuevo: ";
                cin >> option;
            }

            if (option == 1) {
                cout << "¿Tu personaje tiene una gorra roja? (1 para afirmar, 0 para negar): ";
                cin >> option;

                while (cin.fail() || (option != 0 && option != 1)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opción inválida. Inténtalo de nuevo: ";
                    cin >> option;
                }

                if (option == 1) {
                    row = 0;
                    column = 0;
                } else {
                    cout << "¿Es el hermano verde? (1 para afirmar, 0 para negar): ";
                    cin >> option;

                    while (cin.fail() || (option != 0 && option != 1)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Opción inválida. Inténtalo de nuevo: ";
                        cin >> option;
                    }

                    if (option == 1) {
                        row = 0;
                        column = 1;
                    } else {
                        row = 0;
                        column = 2;
                    }
                }
            } else {
                cout << "¿Es la princesa? (1 para afirmar, 0 para negar): ";
                cin >> option;

                while (cin.fail() || (option != 0 && option != 1)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opción inválida. Inténtalo de nuevo: ";
                    cin >> option;
                }

                if (option == 1) {
                    row = 0;
                    column = 2;
                }
            }
        } else {
            cout << "¿Es el villano de Mario? (1 para afirmar, 0 para negar): ";
            cin >> option;

            while (cin.fail() || (option != 0 && option != 1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opción inválida. Inténtalo de nuevo: ";
                cin >> option;
            }

            if (option == 1) {
                row = 1;
                column = 0;
            } else {
                cout << "¿Escupe fuego por la boca y se deja caer en la lava? (1 para afirmar, 0 para negar): ";
                cin >> option;

                while (cin.fail() || (option != 0 && option != 1)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opción inválida. Inténtalo de nuevo: ";
                    cin >> option;
                }

                if (option == 1) {
                    cout << "¿Es el Rey Koopa? (1 para afirmar, 0 para negar): ";
                    cin >> option;

                    while (cin.fail() || (option != 0 && option != 1)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Opción inválida. Inténtalo de nuevo: ";
                        cin >> option;
                    }

                    if (option == 1) {
                        row = 1;
                        column = 0;
                    } else {
                        row = 1;
                        column = 2;
                    }
                }
            }
        }
    } else {
        cout << "¿Tu personaje se utiliza en batallas? (1 para afirmar, 0 para negar): ";
        cin >> option;

        while (cin.fail() || (option != 0 && option != 1)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opción inválida. Inténtalo de nuevo: ";
            cin >> option;
        }

        if (option == 1) {
            cout << "¿Es de color amarillo? (1 para afirmar, 0 para negar): ";
            cin >> option;

            while (cin.fail() || (option != 0 && option != 1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opción inválida. Inténtalo de nuevo: ";
                cin >> option;
            }

            if (option == 1) {
                row = 2;
                column = 0;
            } else {
                cout << "¿Puede lanzar fuego? (1 para afirmar, 0 para negar): ";
                cin >> option;

                while (cin.fail() || (option != 0 && option != 1)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opción inválida. Inténtalo de nuevo: ";
                    cin >> option;
                }

                if (option == 1) {
                    row = 2;
                    column = 1;
                } else {
                    row = 2;
                    column = 2;
                }
            }
        } else {
            cout << "¿Es un gorila que ha aparecido peleando con Mario? (1 para afirmar, 0 para negar): ";
            cin >> option;

            while (cin.fail() || (option != 0 && option != 1)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opción inválida. Inténtalo de nuevo: ";
                cin >> option;
            }

            if (option == 1) {
                row = 3;
                column = 0;
            } else {
                cout << "¿Es un simio que utiliza una gorra? (1 para afirmar, 0 para negar): ";
                cin >> option;

                while (cin.fail() || (option != 0 && option != 1)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opción inválida. Inténtalo de nuevo: ";
                    cin >> option;
                }

                if (option == 1) {
                    row = 3;
                    column = 1;
                } else {
                    row = 3;
                    column = 2;
                }
            }
        }
    }

    return 0;
}

int main() {
    srand(time(NULL));

    int option = 1;

    cout << "Bienvenido al juego de adivinanza" << endl;
    cout << "¿Podré adivinar tu personaje?" << endl;

    while (option == 1) {
        int row, column;
        viewCharacter();
        playGame(row, column);

        string selectedCharacter = viewerCharacter(row, column);
        cout << "Tu personaje es: " << selectedCharacter << endl;

        cout << "¿Te gustaría volver a intentarlo?" << endl;
        cout << "Presiona 1 para seguir o 0 para terminar el juego: ";
        cin >> option;

        while (cin.fail() || (option != 0 && option != 1)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opción inválida. Inténtalo de nuevo: ";
            cin >> option;
        }
    }

    return 0;
}
