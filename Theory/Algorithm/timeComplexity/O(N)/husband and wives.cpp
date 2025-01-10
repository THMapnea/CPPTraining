#include <iostream>
#include <vector>
#include <string>






//we will solve the husband and wife problem
/*

	let's assume that we have a certain number of husband and wife and we want to arrange them so that
	we have first an husband and then a wife like it follows -> H_1,W_1,H_2,W_2,...,H_n,W_n
	my solution runs with time complexity of O(N)

*/


// Prototype
void createData(std::vector<std::string>& husbands, std::vector<std::string>& wives);
void arrange(const std::vector<std::string>& husbands, const std::vector<std::string>& wives, std::vector<std::string>& couples);

int main() {
    // Create the arrays
    std::vector<std::string> husbands;
    std::vector<std::string> wives;
    std::vector<std::string> couples;

    // Create the data set
    createData(husbands, wives);

    // Arrange
    arrange(husbands, wives, couples);

    // Show the results
    for (const auto& c : couples) {
        std::cout << c << std::endl;
    }

    return 0;
}

// Function that creates the dataset
void createData(std::vector<std::string>& husbands, std::vector<std::string>& wives) {
    // Creating a string template
    std::string sh = "H";
    std::string sw = "W";

    for (int i = 0; i < 10; i++) {
        // Adjust the string
        husbands.push_back(sh + std::to_string(i));
        wives.push_back(sw + std::to_string(i));
    }
}

// Function that arranges the couples
void arrange(const std::vector<std::string>& husbands, const std::vector<std::string>& wives, std::vector<std::string>& couples) {
    for (size_t i = 0; i < husbands.size(); i++) {
        couples.push_back(husbands[i]);
        couples.push_back(wives[i]);
    }
}
