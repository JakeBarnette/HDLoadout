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
    bool done;
    int metascore_target;
    int pt, pd;
    cout << "How heavily armoured is the enemy?\n\033[31m*TYPE EXACTLY* \033[0m(Light, \033[33mMedium\033[0m, \033[35mHeavy\033[0m, \033[31m!Unreal!\033[0m)\n";
    cin >> target;
    if(target == "Light"){
        pt = 2;
        pd = 200;
    }
    else if(target == "Medium"){
        pt = 6;
        pd = 400;
    }
    else if(target == "Heavy"){
        pt = 8;
        pd = 600;
    }
    else if(target == "!Unreal!"){
        pt = 10;
        pd = 1000;
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
    while(choice != 5){
        choice = menu();
        switch(choice){
            case 1:
                kit.Generate();
                kit.display();
            break;
            case 2:
                cout << "How heavily armoured is the enemy?\n\033[31m*TYPE EXACTLY* \033[0m(Light, \033[33mMedium\033[0m, \033[35mHeavy\033[0m, \033[31m!Unreal!\033[0m)\n";
                cin >> target;
                if(target == "Light"){
                    pt = 2;
                    pd = 200;
                }
                else if(target == "Medium"){
                    pt = 6;
                    pd = 400;
                }
                else if(target == "Heavy"){
                    pt = 8;
                    pd = 600;
                }
                else if(target == "!Unreal!"){
                    pt = 10;
                    pd = 1000;
                }
                else{
                    pt = 0;
                    pd = 0;
                }
                kit.set_pt(pt);
                kit.set_dt(pd);
            break;
            case 3:
                done = false;
                while(!done){
                    cout << "What minimum meta score is desired? (1 - 4 stars) \n";
                    cin >> metascore_target;
                    if(metascore_target > 0 && metascore_target < 5){
                    kit.set_mt(metascore_target);
                    done = true;
                    }   
                    else{
                        cout << "\033[31m!ERROR! RATING MUST BE WITHING 1 - 4\033[0m\n";
                    }
                }
                done = false;
                while(!done){
                    cout << "Input minimum desired total damage. (\033[32m0 \033[0m- \033[31m2000\033[0m)\n";
                    cin >> pd;
                    if(pd > -1 && pd < 2501){
                        kit.set_dt(pd);
                        done = true;
                        }
                    else{
                        cout << "\033[31mERROR MUST BE WITHIN 0 - 2000\033[0m\n";
                    }
                }
                done = false;
                while(!done){
                    cout << "Input minimum desired total penetration. (\033[32m0 \033[0m- \033[31m10\033[0m)\n";
                    cin >> pt;
                    if(pt > -1 && pt < 11){
                        kit.set_pt(pt);
                        done = true;
                    }
                    else{
                        cout << "\033[31mERROR MUST BE WITHIN 0 - 10\033[0m\n";
                    }
                }
            break;    
            case 4:
                kit.displayPARA();
            break;
            default:
            break;
        }
    }
    kit.byebye();
    return 0;
}

int menu(){
    int ans;

    cout << "\nChoose from the options below.\n1. Reroll loadout.\n2. Set new enemy strength.";
    cout << "\n3. Set custom generation requirements.\n4. View Current Generation Requirements.\n5. Exit loadout generator.\n";
    cin >> ans;
    return ans;
}