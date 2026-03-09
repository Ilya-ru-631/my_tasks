// vas ch 6 num 3,22 str ch 10 num 8,11.cpp 
/*#include <iostream>
#include <fstream>
#include <string>

int main() {
    setlocale(LC_ALL, "ru");
    std::string file1 = "1.txt";
    std::string file2 = "2.txt";
    std::string outputFile = "result.txt";

    std::cout << "Объединяем файлы: " << file1 << " и " << file2;
    std::cout << " в " << outputFile << std::endl;

    std::ifstream input1(file1);
    if (!input1.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << file1 << std::endl;
        return 1;
    }

    std::ifstream input2(file2);
    if (!input2.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << file2 << std::endl;
        return 1;
    }

    std::ofstream output(outputFile);
    std::string line;
    while (std::getline(input1, line)) {
        output << line << std::endl;
    }
    while (std::getline(input2, line)) {
        output << line << std::endl;
    }

    std::cout << "Готово! Файлы объединены." << std::endl;

    input1.close();
    input2.close();
    output.close();

    return 0;
}*/


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // для atoi

int main() {
    setlocale(LC_ALL, "ru");

    std::string file1 = "1.txt";
    std::ifstream file(file1);

    if (!file) {
        std::cerr << "Не удалось открыть файл!\n";
        return 1;
    }

    long long sum = 0;
    std::string word;

    // Читаем файл по словам (разделители - пробелы, табуляции, новые строки)
    while (file >> word) {
        // Проверяем, является ли слово числом
        bool isNumber = true;

        // Проверяем каждый символ в слове
        for (size_t i = 0; i < word.length(); i++) {
            char c = word[i];

            // Первый символ может быть минусом (отрицательное число)
            if (i == 0 && c == '-') {
                continue;  // пропускаем проверку для минуса в начале
            }

            // Если символ не цифра - это не число
            if (c < '0' || c > '9') {
                isNumber = false;
                break;
            }
        }

        // Если это число (и не просто минус)
        if (isNumber && word != "-") {
            int num = atoi(word.c_str());  // преобразуем строку в число
            sum += num;                     // добавляем к сумме
            std::cout << "Найдено число: " << num << std::endl;  // для отладки
        }
    }

    file.close();

    std::cout << "Сумма всех целых чисел: " << sum << std::endl;

    return 0;
}