#include "Loadout.h"

Loadout::Loadout(){
    p = Primary();
    s = Secondary();
    h = Support();
    t = Throwable();
    penetration_target = 0;
    damage_target = 0;
    meta_target = 0;
}

void Loadout::Generate(){
    bool done = false;
    int checkpen;
    int checkmeta;
    while(!done){
    p.random();
    s.random();
    h.random();
    t.random();
    checkpen = total_penetration();
    checkmeta = total_meta();
    if(checkpen >= penetration_target && checkmeta >= meta_target){
        done = true;
    }
    }
}

void Loadout::display(){
    cout << "\n";
    p.output();
    s.output();
    h.output();
    t.output();
    cout << "\n\033[31m\033[44m\033[4mMeta Evaluation:\033[0m\n";
    int damage_score = total_damage(); 
    int penetration_score = total_penetration();
    cout << "Total Damage: " << damage_score << "\nTotal Penetration: " << penetration_score << endl;
    int meta_score = total_meta();
    switch(meta_score){
        case 1:
        cout << "\033[33mWARNING LOW META SCORE! \033[31m* \033[0m * * * * \033[31m1 Star\n\033[32mADVISED TO REROLL!\033[0m\n";
        break;
        case 2:
        cout << "\033[0mLow Meta Score. \033[33m* * \033[0m* * * \033[33m2 Stars\033[0m\n";
        break;
        case 3:
        cout << "\033[0mDecent Meta Score. \033[32m* * * \033[0m* * \033[32m3 Stars\n\033[0mNot to shabby.\n";
        break;
        case 4:
        cout << "\033[34mGood Meta Score! \033[32m* * * * \033[0m* \033[32m4 Stars\n\033[0mPossibly true meta, definitely worth trying.\n";
        break;
        case 5: //this will never happen the probablitiy of rolling 4 5 stars is unrealistic WARNING computer cannot handle 5 star requirement for generation
        cout << "\033[36mIT'S A GOD ROLL! META SCALE IS BROKEN! WHAT THE FUCK TAKE A PICTURE!!! \033[35m* * * * * 5 Stars!!!\n\033[0mClose the program and use it alredy!\n";
        break;
        default:
        break;
    }
}

void Loadout::displayPARA(){
    cout << "Penetration Target: " << penetration_target << "\nDamage Target: " << damage_target << "\nMeta Target: " << meta_target << " stars (0 Default)\n";
}

int Loadout::total_penetration(){
    int tp;
    tp = p.get_penetration() + s.get_penetration() + h.get_penetration() + (t.get_penetration() / 2);
    return tp;
}

int Loadout::total_damage(){
    int td;
    td = p.get_damage() + s.get_damage() + t.get_damage() + (h.get_penetration() * 150);
    return td;
}

int Loadout::total_meta(){
    int tm;
    tm = (p.get_meta() + s.get_meta() + t.get_meta() + h.get_meta()) / 4; //average out of five stars
    return tm;
}

void Loadout::byebye(){
    int bye;
    srand((unsigned)time(NULL));
    bye = rand() % 10;
    switch(bye){
        case 1:
            cout << "\033[43m\033[30m\033[1mGo show 'em that Helldivers NEVER die!\033[0m\n"; 
        break;
        case 2:
            cout << "\033[43m\033[30m\033[1mBrew up a nice cup of Liber-tea!\033[0m\n";
        break;
        case 3:
            cout << "\033[31m\033[1m\033[47mMY LEG!!\033[0m\n";
        break;
        case 4:
            cout << "\033[43m\033[30m\033[1mGood luck and God speed.\033[0m\n";
        break;
        case 5:
            cout << "\033[43m\033[30m\033[1mIT'S TIME FOR DEMOCRACY!\033[0m\n";
        break;
        case 6:
            cout << "\033[43m\033[30m\033[1mGive 'em \033[31mhell\033[30m!\033[0m\n";
        break;
        case 7:
            cout << "\033[43m\033[30m\033[1mEagle never misses, make sure you don't either.\033[0m\n";
        break;
        case 8:
            cout << "\033[41m\033[30m\033[1mBUG TUNNEL BREACH\033[0m\n";
        break;
        case 9:
            cout << "\033[43m\033[30m\033[1mThe only good bug is a oil, and the only good bot is scrap metal.\033[0m\n";
        break;
        case 0:
            cout << "\033[44m\033[30m\033[4mSCREW SONY!\033[0m\n";
        break;
        
    }
}