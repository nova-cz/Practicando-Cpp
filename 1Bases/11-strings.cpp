#include <iostream>
#include <string>
#include <algorithm> // Para std::transform

int main() {
    // Creación de una cadena
    std::string texto = "Hola Mundo C++";

    // 1. length() / size()
    // Devuelve la longitud de la cadena (número de caracteres).
    // Parámetros: Ninguno
    std::cout << "Longitud del texto: " << texto.length() << std::endl;

    // 2. substr(pos, len)
    // Devuelve una subcadena que comienza en la posición 'pos' y tiene una longitud de 'len'.
    // Parámetros:
    //   - pos: La posición inicial de la subcadena.
    //   - len: La longitud de la subcadena.
    std::string subcadena = texto.substr(5, 5); // "Mundo"
    std::cout << "Subcadena: " << subcadena << std::endl;

    // 3. find(sub)
    // Busca la primera aparición de la subcadena 'sub' y devuelve su posición.
    // Parámetros:
    //   - sub: La subcadena a buscar.
    // Devuelve: La posición de la primera aparición o std::string::npos si no se encuentra.
    size_t posicion = texto.find("C++"); // 10
    if (posicion != std::string::npos) {
        std::cout << "La subcadena 'C++' comienza en la posición: " << posicion << std::endl;
    } else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }

    // 4. rfind(sub)
    // Busca la última aparición de la subcadena 'sub' y devuelve su posición.
    // Parámetros:
    //   - sub: La subcadena a buscar.
    // Devuelve: La posición de la última aparición o std::string::npos si no se encuentra.
    posicion = texto.rfind("o"); // 7
    std::cout << "Última aparición de 'o' está en la posición: " << posicion << std::endl;

    // 5. replace(pos, len, sub)
    // Reemplaza 'len' caracteres a partir de la posición 'pos' con la subcadena 'sub'.
    // Parámetros:
    //   - pos: La posición inicial para el reemplazo.
    //   - len: La cantidad de caracteres a reemplazar.
    //   - sub: La subcadena con la que reemplazar.
    texto.replace(5, 5, "Universe"); // "Hola Universe C++"
    std::cout << "Texto después de reemplazar: " << texto << std::endl;

    // 6. erase(pos, len)
    // Elimina 'len' caracteres a partir de la posición 'pos'.
    // Parámetros:
    //   - pos: La posición inicial para la eliminación.
    //   - len: La cantidad de caracteres a eliminar.
    texto.erase(4, 9); // "Hola C++"
    std::cout << "Texto después de borrar: " << texto << std::endl;

    // 7. insert(pos, sub)
    // Inserta la subcadena 'sub' en la posición 'pos'.
    // Parámetros:
    //   - pos: La posición en la que insertar la subcadena.
    //   - sub: La subcadena a insertar.
    texto.insert(4, " Beautiful"); // "Hola Beautiful C++"
    std::cout << "Texto después de insertar: " << texto << std::endl;

    // 8. c_str()
    // Devuelve un puntero constante a una cadena de caracteres C.
    // Parámetros: Ninguno
    // Devuelve: Un puntero a una cadena de caracteres C.
    const char* cstr = texto.c_str();
    std::cout << "Cadena C: " << cstr << std::endl;

    // 9. at(index)
    // Devuelve el carácter en la posición 'index', con verificación de rango.
    // Parámetros:
    //   - index: La posición del carácter que se desea obtener.
    // Devuelve: El carácter en la posición 'index'.
    char letra = texto.at(4); // ' '
    std::cout << "Carácter en la posición 4: " << letra << std::endl;

    // 10. append(sub) / operator+=
    // Añade la subcadena 'sub' al final de la cadena actual.
    // Parámetros:
    //   - sub: La subcadena a añadir al final.
    // Alternativamente, puedes usar el operador +=.
    // Parámetros:
    //   - sub: La subcadena a añadir al final.
    texto.append("!"); // "Hola Beautiful C++!"
    texto += " Yay"; // "Hola Beautiful C++! Yay"
    std::cout << "Texto después de append y operator+=: " << texto << std::endl;

    // 11. Convertir a mayúsculas y minúsculas
    // Convierte todos los caracteres de una cadena a mayúsculas o minúsculas.
    // Parámetros: 
    //   - begin: El iterador que marca el inicio de la cadena.
    //   - end: El iterador que marca el final de la cadena.
    //   - result: El iterador donde se almacenará el resultado.
    std::string original = "convertir esto";
    std::string upper = original;
    std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    std::cout << "Cadena en mayúsculas: " << upper << std::endl;

    std::string lower = original;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    std::cout << "Cadena en minúsculas: " << lower << std::endl;

    return 0;
}
