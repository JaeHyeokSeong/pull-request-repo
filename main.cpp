//
// Created by Jaehyeok Seong on 2/9/2023.
//

#include <iostream>
#include <vector>

int add(const std::vector<int>& numbers) {
    int total = 0;
    for(const int number : numbers) {
        total += number;
    }
    return total;
}

// 0! = 1, 1! = 1, 2!= 2, 3! = 6, 4! = 24
int factorial(int number) {
    if(number == 0 || number == 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    std::cout << "hello world\n";
    return 0;
}