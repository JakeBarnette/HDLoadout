#include "Secondary.h"

Secondary::Secondary(){
    name = " ";
    damage = 0;
    firerate = 0;
    dps = 0;
    penetration = 0;
}

void Secondary::random(){
    srand((unsigned)time(NULL));
    int choice = rand() % 9;
    switch(choice){
        case 1:
        name = "Peacemaker";
        damage = 75;
        firerate = 900;
        dps = damage * firerate / 60;
        penetration = 1; 
        break;

        case 2:
        name = "Redeemer";
        damage = 60;
        firerate = 1100;
        dps = damage * firerate / 60;
        penetration = 1;
        break;

        case 3:
        name = "Verdict";
        damage = 125;
        firerate = 450;
        dps = damage * firerate / 60;
        penetration = 2;
        break;

        case 4:
        name = "Senator";
        damage = 200;
        firerate = 200;
        dps = damage * firerate / 60;
        penetration = 3;
        break;

        case 5:
        name = "Stim";
        damage = 100;
        firerate = 0;
        dps = damage * firerate / 60;
        penetration = 1; 
        break;

        case 6:
        name = "Bushwhacker";
        damage = 405;
        firerate = 650;
        dps = damage * firerate / 60;
        penetration = 1;
        break;

        case 7:
        name = "Crisper";
        damage = 375;
        firerate = 600;
        dps = damage * firerate / 60;
        penetration = 3;
        break;

        case 8:
        name = "Grenade Pistol";
        damage = 650;
        firerate = 900;
        dps = damage * firerate / 60;
        penetration = 3;
        break;

        case 0:
        name = "Dagger";
        damage = 250;
        firerate = 600;
        dps = damage * firerate / 60;
        penetration = 1;
        break;

    }
}

void Secondary::output(){
    cout << "Secondary: " << name << endl;
}