//
// Created by gabde on 11/03/2024.
//

#ifndef STOCK_PRODUCT_H
#define STOCK_PRODUCT_H

#include <iostream>

using namespace std;

class product {
    private:
        string name;
        int stock;
        double buyingPrice;
        double sellingPrice;
    public:
        product(string name, int stock, double buyingPrice, double sellingPrice);
        string getName();
        int getStock();
        double getBuyingPrice();
        double getSellingPrice();
};



#endif //STOCK_PRODUCT_H
