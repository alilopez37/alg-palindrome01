#include <iostream>
using namespace std;
int main() {
    char palabra[20];
    char palabraInvertida[20];

    cout << "Introduce palabra: ";
    cin >> palabra;
    // Contar las letras que tiene la palabra introducida
    short indice = 0;
    while (palabra[indice] != '\0') {
        indice++;
    }

    int indiceInvertido = indice - 1;
    for (int i=0;i<indice;i++){
        palabraInvertida[indiceInvertido] = palabra[i];
        indiceInvertido--;
    }
    palabraInvertida[indice] = '\0';
    bool flag = true;
    for (int i=0;i<indice && flag==true;i++){
        if (palabra[i] != palabraInvertida[i])
            flag = false;
    }
    if (flag)
        cout << palabra <<" es palíndrome" << endl;
    else
        cout << palabra <<" no es palindrome" << endl;
    return 0;
}
