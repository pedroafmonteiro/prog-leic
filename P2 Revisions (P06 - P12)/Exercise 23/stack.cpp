#include "Stack.h"

using namespace std;

template <typename T>
inline Stack<T>::Stack() : elements({ }) { }

template <typename T>
size_t Stack<T>::size() const
{
    return elements.size();
}

template <typename T>
bool Stack<T>::peek(T &elem) const
{
    if (int(elements.size()) == 0) {
        return false;
    } else {
        elem = elements.back();
        return true;
    }
    return false;
}

template <typename T>
bool Stack<T>::pop(T &elem)
{
    if (int(elements.size()) == 0) {
        return false;
    } else {
        elem = elements.back();
        elements.pop_back();
        return true;
    }
    return false;
}

template <typename T>
void Stack<T>::push(const T &elem) 
{
    elements.push_back(elem);
}

int main() {
    return 0;
}
