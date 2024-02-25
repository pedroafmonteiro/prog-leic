#include <iostream>

int basicOp(char op, int val1, int val2) {
    int result = 0;
    switch(op) {
        case '+':
            result = val1 + val2;
            break;
        case '-':
            result = val1 - val2;
            break;
        case '*':
            result = val1 * val2;
            break;
        case '/':
            result = val1 / val2;
            break;
        default:
            return 0;
    }
    return result;
}

int main() {
    // Example usage of basicOp function
    int result = basicOp('+', 5, 3);
    // Print the result
    std::cout << "Result: " << result << std::endl;
    return 0;
}
