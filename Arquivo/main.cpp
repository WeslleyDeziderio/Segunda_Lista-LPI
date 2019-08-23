#include <iostream>
#include <fstream>
#include <string>

int main(void){
    std::string safe;
    std::ofstream stWrite;
    std::ifstream stRead;

    stWrite.open("file1.txt");
    stWrite << "TEXTO DE TESTE\n";
    stWrite.close();
    stRead.open("file1.txt");
    getline(stRead, safe);
    std::cout << "file1: " << safe;

    stWrite.open("file2.txt");
    stWrite << safe;
    stWrite.close();
    stRead.open("file2.txt");
    getline(stRead, safe);
    std::cout << "\nfile2: " << safe;

    return 0;
}
