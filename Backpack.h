//
// Created by UserW7m3ra on 7/21/2017.
//

#ifndef BACKPACKVECTOR_BACKPACK_H
#define BACKPACKVECTOR_BACKPACK_H

#include <vector>
#include <iostream>
#include <string>
#include <list>
using namespace std;

template <class T>
class Backpack{
public:
    Backpack(int dimension = 0){
        myBag.resize(dimension);
        cout << "Backpack's dimension: [" << myBag.capacity() << "]" << endl;
    }

    bool addItems(T newItem, int space){
        space = myBag.size();
        int num;
        cout << "\nHow many items do you want to add: "; cin >> num;
        for(int i = 0; i<num; i++){
            if(space!=0){
                myBag.push_back(newItem);
                cout << "Element added!" << endl;
                cout << "Available space:[" <<--space<< "]"<<endl;
            }else{
                cout << "\nThere is not enough space. Please remove some items." << endl;
                return false;
            }
        }
        myBag.resize(space);
        return true;
    }

    bool removeItems(){
        int capacity = myBag.capacity() /2;
        int space = myBag.size();
        int num;

        cout << "\nHow many elements do you want to remove: "; cin >> num;
        for(int i = 0; i<num; i++){
            if(space < capacity){
                myBag.pop_back();
                cout << "Element removed!" << endl;
                cout << "Available space: [" << ++space << "]" << endl;

            }else{
                cout << "No more items to delete. Bag is empty!" << endl;
                return false;
            }
            myBag.resize(space);
        }
        return true;
    }


private:
    vector<int>myBag;
    T elements;
};

#endif //BACKPACKVECTOR_BACKPACK_H
