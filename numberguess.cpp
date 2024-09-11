#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // 乱数生成器の初期化
    std::srand(std::time(nullptr));

    // 1から100までのランダムな数を生成
    int secretNumber = std::rand() % 100 + 1;
    
    int guess;
    int attempts = 0;

    std::cout << "1から100までの数を当ててください！\n";

    do {
        std::cout << "あなたの予想は？ ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "もっと小さい数です。\n";
        } else if (guess < secretNumber) {
            std::cout << "もっと大きい数です。\n";
        } else {
            std::cout << "正解です！おめでとうございます！\n";
            std::cout << attempts << "回の試行で当てました。\n";
        }
    } while (guess != secretNumber);

    return 0;
}