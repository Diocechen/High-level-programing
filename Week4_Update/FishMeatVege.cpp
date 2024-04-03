#include <iostream>
#include <string>
using namespace std;

class Item
{
    public:
    int weight;
    int price;
};

class Fish:public Item
{
};

class Meat:public Item
{
};

class Vege:public Item
{
};

int main()
{
    string item;
    Item empty;
    Fish fish1;
    Fish fish2;
    Meat meat1;
    Meat meat2;
    Vege vege1;
    Vege vege2;
    
    Item &ref = empty;
    
    while(true){
        cin >> item;
        if(item == "fish1"){
            ref = fish1;
        }else if(item == "fish2"){
            ref = fish2;
        }else if(item == "meat1"){
            ref = meat1;
        }else if(item == "meat2"){
            ref = meat1;
        }else if(item == "vege1"){
            ref = vege1;
        }else if(item == "vege2"){
            ref = vege2;
        }else{
            cout << "Error";
            break;
        };
        
        cin >> ref.weight;
        cin >> ref.price;
        
        cout << "item = " << item;
        cout << ", Weight = " << ref.weight;
        cout << ", Price = " << ref.price << "\n"; 
    }

    return 0;
}
