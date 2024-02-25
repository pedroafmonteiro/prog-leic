#include <string>

bool feast(std::string beast, std::string dish){
    if (beast[0] == dish[0] && beast[beast.size() - 1] == dish[dish.size() - 1]) {
        return true;
    } else {
        return false;
    }
}