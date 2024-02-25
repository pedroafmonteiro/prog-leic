#include <iostream>
#include <string>

std::string DNAtoRNA(std::string dna) {
    int strsize = dna.length();
    std::string finalstr;
    for (int i = 0; i < strsize; i++) {
        if (dna[i] == 'T') {
            finalstr += "U";
        } else {
            finalstr += dna[i];
        }
    }
    return finalstr;
}
int main() {
    std::string dna;
    std::cout << "Enter DNA: \n";
    std::cin >> dna;
    std::string rna = DNAtoRNA(dna);
    std::cout << "RNA: " << rna << std::endl;
    return 0;
}
