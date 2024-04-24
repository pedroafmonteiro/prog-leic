#include <vector>
#include "Person.h"

void born_before(const std::vector<Person>& persons, const Date& date) {
  date.show();
  std::cout << ": ";
  for (const auto& person : persons) {
    if (person.get_birth_date().is_before(date)) {
      person.show();
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}
