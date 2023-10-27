#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string carpeta_descargas = "Descargas";

    // Verificamos si la carpeta existe
    if (!fs::exists(carpeta_descargas)) {
        std::cerr << "La carpeta no existe." << std::endl;
        return 1;
    }

    std::vector<std::string> nombres_archivos;

    // Recorremos la carpeta y obtenemos los nombres de los archivos
    for (const auto& entry : fs::directory_iterator(carpeta_descargas)) {
        nombres_archivos.push_back(entry.path().filename().string());
    }

    // Ordenamos los nombres alfabéticamente
    std::sort(nombres_archivos.begin(), nombres_archivos.end());

    // Mostramos los nombres ordenados
    std::cout << "Archivos ordenados alfabéticamente:" << std::endl;
    for (const auto& nombre : nombres_archivos) {
        std::cout << nombre << std::endl;
    }

    return 0;
}
