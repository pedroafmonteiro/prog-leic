#include "Book.cpp"
#include "Page.cpp"

void Book::build_index(const std::set<std::string>& words) {
  index_.clear();
  for (size_t i = 0; i < book_.size(); ++i) {
    const Page& page = book_[i];
    for (size_t j = 0; j < page.get_num_lines(); ++j) {
      std::string line = page.get_line(j);
      std::istringstream iss(line);
      std::string word;
      while (iss >> word) {
        if (words.find(word) != words.end()) {
          index_[word].insert(i + 1);
        }
      }
    }
  }
}

int main() {
    return 0;
}