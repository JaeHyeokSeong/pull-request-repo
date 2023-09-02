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

int main() {
    std::cout << "hello world\n";
    return 0;
}