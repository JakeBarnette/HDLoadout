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
    int level = 0;
    bool done;
    int metascore_target;
    int pt, pd;
    std::string enemy;
    cout << "Enter the level of difficulty(\033[32m1 \033[0m-\033[31m10\033[0m): ";
    cin >> level;
        switch(level){
            case 1:
                pt = 0;
                pd = 500; 
            break;
            case 2: 
                pt = 1;
                pd = 1000;
            break;
            case 3: 
                pt = 1;
                pd = 1000;
            break;
            case 4: 
                pt = 2;
                pd = 1500;
            break;
            case 5: 
                pt = 3;
                pd = 2500;
            break;
            case 6: 
                pt = 4;
                pd = 3000;
            break;
            case 7: 
                pt = 5;
                pd = 3300;
            break;
            case 8: 
                pt = 6;
                pd = 4000;
            break;
            case 9: 
                pt = 7;
                pd = 4500;
            break;
            case 10: 
                pt = 9;
                pd = 5000;
            break;
            default:
                pt = 0;
                pd = 0;
            break;                
        }
    kit.set_pt(pt);
    kit.set_dt(pd);
    done = false;
    while(!done){
        cout << "Who are we fighting? \033[31mBots \033[0mor \033[33mBugs\033[0m?\n";
        cin >> enemy;
        if(enemy == "Bots"){
            kit.set_bug(false);
            done = true;
        }
        else if(enemy == "bots"){
            kit.set_bug(false);
            done = true;
        }
        else if(enemy == "Bugs"){
            kit.set_bug(true);
            done = true;
        }
        else if(enemy == "bugs"){
            kit.set_bug(true);
            done = true;
        }
        else{
            cout << "\033[31mERROR ENTER bots or bugs\033[0m\n";
        }
    }
    cout << "\n\033[32mGenerated Loadout:\033[0m";
    kit.Generate();
    while(!kit.eval()){
        kit.Generate();
    }
    kit.display();

    int choice = 0;
    while(choice != 8){
        choice = menu();
        switch(choice){
            case 1:
            cout << "\n\033[32mGenerated Loadout:\033[0m";
            kit.Generate();
            while(!kit.eval()){
                kit.Generate();
            }
            kit.display();
            break;
            case 2:
                cout << "Enter the level of difficulty(\033[32m1 \033[0m-\033[31m10\033[0m): ";
                cin >> level;
                switch(level){
                    case 1:
                        pt = 0;
                        pd = 500; 
                    break;
                    case 2: 
                        pt = 1;
                        pd = 1000;
                    break;
                    case 3: 
                        pt = 1;
                        pd = 1000;
                    break;
                    case 4: 
                        pt = 2;
                        pd = 1500;
                    break;
                    case 5: 
                        pt = 3;
                        pd = 2500;
                    break;
                    case 6: 
                        pt = 4;
                        pd = 3000;
                    break;
                    case 7: 
                        pt = 5;
                        pd = 3300;
                    break;
                    case 8: 
                        pt = 6;
                        pd = 4000;
                    break;
                    case 9: 
                        pt = 7;
                        pd = 4500;
                    break;
                    case 10: 
                        pt = 9;
                        pd = 5000;
                    break;
                    default:
                        pt = 0;
                        pd = 0;
                        break;
                    
                }
                kit.set_pt(pt);
                kit.set_dt(pd);
            break;
            case 3:
                done = false;
                while(!done){
                    cout << "Who are we fighting? \033[31mBots \033[0mor \033[33mBugs\033[0m?\n";
                    cin >> enemy;
                    if(enemy == "Bots"){
                        kit.set_bug(false);
                        done = true;
                    }
                    else if(enemy == "bots"){
                        kit.set_bug(false);
                        done = true;
                    }
                    else if(enemy == "Bugs"){
                        kit.set_bug(true);
                        done = true;
                    }
                    else if(enemy == "bugs"){
                        kit.set_bug(true);
                        done = true;
                    }
                    else{
                        cout << "\033[31mERROR ENTER bots or bugs\033[0m\n";
                    }
                }
            break;
            case 4:
                done = false;
                while(!done){
                    cout << "What minimum meta score is desired? (1 - 5 stars) \n";
                    cin >> metascore_target;
                    if(metascore_target > 0 && metascore_target < 6){
                    kit.set_mt(metascore_target);
                    done = true;
                    }   
                    else{
                        cout << "\033[31m!ERROR! RATING MUST BE WITHING 1 - 5\033[0m\n";
                    }
                }
            break;
            case 5:
                done = false;
                while(!done){
                    cout << "Input minimum desired dps. (\033[32m0 \033[0m- \033[31m5000\033[0m)\n";
                    cin >> pd;
                    if(pd > -1 && pd < 5001){
                        kit.set_dt(pd);
                        done = true;
                        }
                    else{
                        cout << "\033[31mERROR MUST BE WITHIN 0 - 5000\033[0m\n";
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
            case 6:
                cout << "\n";
                switch(level){
                    case 0:
                    cout << "Difficulty Level: \033[32m" << level << "\033[0m\n";
                    break;
                    case 1:
                    cout << "Difficulty Level: \033[32m" << level << "\033[0m\n";
                    break;
                    case 2:
                    cout << "Difficulty Level: \033[32m" << level << "\033[0m\n";
                    break;
                    case 3:
                    cout << "Difficulty Level: \033[32m" << level << "\033[0m\n";
                    break;
                    case 4:
                    cout << "Difficulty Level: \033[34m" << level << "\033[0m\n";
                    break;
                    case 5:
                    cout << "Difficulty Level: \033[34m" << level << "\033[0m\n";
                    break;
                    case 6:
                    cout << "Difficulty Level: \033[34m" << level << "\033[0m\n";
                    break;
                    case 7:
                    cout << "Difficulty Level: \033[33m" << level << "\033[0m\n";
                    break;
                    case 8:
                    cout << "Difficulty Level: \033[33m" << level << "\033[0m\n";
                    break;
                    case 9:
                    cout << "Difficulty Level: \033[33m" << level << "\033[0m\n";
                    break;
                    case 10:
                    cout << "Difficulty Level: \033[31m" << level << "\033[0m\n";
                    break;
                }
                kit.displayPARA();
            break;
            case 7:
                kit.set_mt(0);
                kit.set_dt(0);
                kit.set_pt(0);
                cout << "\033[33mFOR DEMOCRACY!!!\033[0m\n";
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

    cout << "\nChoose from the options below.\n1. Reroll loadout.\n2. Set new difficulty level.\n3. Change enemy type.";
    cout << "\n4. Set Meta Score target.\n5. Set custom generation requirements.\n6. View Current Generation Requirements.\n7. Set to \033[31mTRUE\033[0m random. \033[32mGood Luck\033[33m;)\033[0m\n8. Exit loadout generator.\n";
    cin >> ans;
    return ans;
}