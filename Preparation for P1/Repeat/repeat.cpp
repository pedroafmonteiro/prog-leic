#include <iostream>
using namespace std;

char* repeat(const char str[], int n) {
    if (n <= 0) {
        return nullptr;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int resultLen = len * n;

    char* result = new char[resultLen + 1];
    result[0] = '\0';

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len; j++) {
            result[index++] = str[j];
        }
    }
    result[index] = '\0';

    return result;
}

int main(int argc, char const *argv[])
{
    return 0;
}
