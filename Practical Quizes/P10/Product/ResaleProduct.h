#include "Product.h"

class ResaleProduct:public Product {
public:
    int get_profit_margin() const {
        return profitMargin;
    }
    void set_profit_margin(int margin) {
        profitMargin = margin;
    }
    ResaleProduct(int id, float price, int margin) :Product(id, price) {
        set_profit_margin(margin);
    }
    float get_sell_price() const {
        return price_ * (100.0 + profitMargin) / 100.0;
    }
protected:
    int profitMargin;
};