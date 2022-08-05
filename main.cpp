#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    std::ifstream file(argv[1]);  // 読み込むファイルのパスを指定
    std::string str_line;

    while (std::getline(file, str_line)) {  // 1行ずつ読み込む
        std::cout << str_line << std::endl;
    }

    return 0;
}
