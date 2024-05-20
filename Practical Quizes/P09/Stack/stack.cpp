#include <vector>
#include <cstddef>
#include "Stack.h"

#include "Stack.h"

template <typename T>
Stack<T>::Stack() : elements() {}

template <typename T>
size_t Stack<T>::size() const {
  return elements.size();
}

template <typename T>
bool Stack<T>::peek(T& elem) const {
  if (elements.empty()) {
    return false;
  }
  elem = elements.back();
  return true;
}

template <typename T>
bool Stack<T>::pop(T& elem) {
  if (elements.empty()) {
    return false;
  }
  elem = elements.back();
  elements.pop_back();
  return true;
}

template <typename T>
void Stack<T>::push(const T& elem) {
  elements.push_back(elem);
}
