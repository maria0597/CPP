#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) 
{
    // Apri il file di input
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Impossibile aprire il file di input: " << filename << std::endl;
        inputFile.close();
        return;
    }

    // Crea il nome del file di output
    std::string outputFilename = filename + ".replace";

    // Apri il file di output
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile) 
    {
        std::cerr << "Impossibile creare il file di output: " << outputFilename << std::endl;
        return;
    }

    // Leggi il contenuto del file di input e sostituisci le occorrenze di s1 con s2
    std::string line;
    while (getline(inputFile, line)) 
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) 
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    // Chiudi i file
    inputFile.close();
    outputFile.close();

    std::cout << "Operazione completata. Il file " << outputFilename << " è stato creato." << std::endl;
}

int main(int argc, char** argv) 
{
    if (argc < 4) 
    {
        std::cout << "Utilizzo: ./programma <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceStringInFile(filename, s1, s2);

    return 0;
}
