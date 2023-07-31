import  std;  //everything in std namespace is in here
//import <iostream>; // don't need these anymore
//import <vector>;
//import <string>;

//import <string_view>;

int main() {
    std::cout << "Hello Modular World!\n";

    const std::vector<std::string_view> words {"Welcome ", "Modular ", "Vector ", "With ", "auto&& "};
    for (auto&& word: words) {
        std::cout << word;
    }
    std::cout<< "\n";

}