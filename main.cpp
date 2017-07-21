#include <list>
#include <iostream>
#include <string>
#include "Backpack.h"
using namespace std;


int main(){
    Backpack<int> bag(5);
    int items, space;

    bag.addItems(items, space);
    bag.removeItems();

    return 0;
}
