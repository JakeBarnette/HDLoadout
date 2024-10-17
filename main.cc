#include <iostream>
#include "Primary.h"
#include "Secondary.h"
#include "Support.h"
#include "Throwable.h"
#include "Loadout.h"

using namespace std;

int menu();

int main(){
    Loadout kit;
    std::string target;
    int pt, pd;
    cout << "How heavily armoured is the enemy? (Light, Medium, Heavy, !Unreal!)\n";
    cin >> target;
    if(target == "Light"){
        pt = 2;
        pd = 200;
    }
    else if(target == "Medium"){
        pt = 6;
        pd = 300;
    }
    else if(target == "Heavy"){
        pt = 8;
        pd = 400;
    }
    else if(target == "!Unreal!"){
        pt = 10;
        pd = 550;
    }
    else{
        pt = 0;
        pd = 0;
    }

    kit.set_pt(pt);
    kit.set_dt(pd);
    kit.Generate();
    kit.display();

    int choice = 0;
    while(choice != 3){
        choice = menu();
        switch(choice){
            case 1:
                kit.Generate();
                kit.display();
                break;
            case 2:
                cout << "How heavily armoured is the enemy? (Light, Medium, Heavy, !Unreal!)\n";
                cin >> target;
                if(target == "Light"){
                    pt = 2;
                    pd = 200;
                }
                else if(target == "Medium"){
                    pt = 6;
                    pd = 300;
                }
                else if(target == "Heavy"){
                    pt = 8;
                    pd = 400;
                }
                else if(target == "!Unreal!"){
                    pt = 10;
                    pd = 550;
                }
                else{
                    pt = 0;
                    pd = 0;
                }
                kit.set_pt(pt);
                kit.set_dt(pd);
                break;
            default:
                break;
        }
    }

    return 0;
}

int menu(){
    int ans;

    cout << "\nChoose from the options below.\n1. Reroll loadout.\n2. Set new enemy type.\n3. Exit loadout generator.\n";
    cin >> ans;
    return ans;
}