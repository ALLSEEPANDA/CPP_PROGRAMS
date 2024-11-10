#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <even_file> <odd_file>\n";
        return 1;
    }

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::ofstream evenFile(argv[1]);
    std::ofstream oddFile(argv[2]);

    if (!evenFile || !oddFile) {
        std::cerr << "Error opening files.\n";
        return 1;
    }

    for (int num : numbers) {
        if (num % 2 == 0)
            evenFile << num << "\n";
        else
            oddFile << num << "\n";
    }

    evenFile.close();
    oddFile.close();
    return 0;
}