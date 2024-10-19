#include "Primary.h"


Primary::Primary(){
    name = " ";
    damage = 0;
    firerate = 0;
    dps = 0;
    penetration = 0;
    meta = 0;
}

void Primary::random(){
    srand((unsigned)time(NULL));
    int choice = rand() % 27;
    switch(choice){
        case 1:
        name = "Liberator";
        damage = 70;
        firerate = 640;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 3;
        break;

        case 2:
        name = "Liberator Penetrator";
        damage = 60;
        firerate = 640;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 3;
        break;

        case 3:
        name = "Liberator Concussive";
        damage = 65;
        firerate = 320;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 1;
        break;
        
        case 4:
        name = "Liberator Carbine";
        damage = 70;
        firerate = 920;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 3;
        break;

        case 5:
        name = "Tenderizer";
        damage = 95;
        firerate = 800;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 5;
        break;

        case 6:
        name = "Adjudicator";
        damage = 90;
        firerate = 550;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 5;
        break;

        case 7:
        name = "Diligence";
        damage = 165;
        firerate = 350;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 1;
        break;
        
        case 8:
        name = "Diligence Counter Sniper";
        damage = 200;
        firerate = 350;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 2;
        break;

        case 9:
        name = "Knight";
        damage = 65;
        firerate = 1380;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 1;
        break;

        case 10:
        name = "Defender";
        damage = 75;
        firerate = 520;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 1;
        break;

        case 11:
        name = "Pummeler";
        damage = 65;
        firerate = 475;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 3;
        break;

        case 12:
        name = "Punisher";
        damage = 405;
        firerate = 80;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 3;
        break;

        case 13:
        name = "Slugger";
        damage = 250;
        firerate = 80;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 3;
        break;

        case 14:
        name = "Cookout";
        damage = 360;
        firerate = 80;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 4;
        break;

        case 15:
        name = "Breaker";
        damage = 330;
        firerate = 300;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 3;
        break;

        case 16:
        name = "Breaker Spray&Pray";
        damage = 240;
        firerate = 330;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 4;
        break;

        case 17:
        name = "Breaker Incendiary";
        damage = 280;
        firerate = 300;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 5;
        break;
        
        case 18:
        name = "Crossbow";
        damage = 620;
        firerate = 50;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 5;
        break;

        case 19:
        name = "Eruptor";
        damage = 455;
        firerate = 25;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 5;
        break;

        case 20:
        name = "Plasma Punisher";
        damage = 250;
        firerate = 100;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 3;
        break;

        case 21:
        name = "Blitzer";
        damage = 250;
        firerate = 45;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 3;
        break;

        case 22:
        name = "Scythe";
        damage = 350;
        firerate = 60;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 1;
        break;

        case 23:
        name = "Sickle";
        damage = 55;
        firerate = 750;
        dps = damage * firerate / 60;
        penetration = 1;
        meta = 4;
        break;

        case 24:
        name = "Scorcher";
        damage = 200;
        firerate = 350;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 4;
        break;

        case 25:
        name = "Purifier";
        damage = 500;
        firerate = 1000;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 5;
        break;

        case 26:
        name = "Torcher";
        damage = 375;
        firerate = 600;
        dps = damage * firerate / 60;
        penetration = 3;
        meta = 3;
        break;

        case 0:
        name = "Dominator";
        damage = 275;
        firerate = 250;
        dps = damage * firerate / 60;
        penetration = 2;
        meta = 3;
        break;

    }

}

void Primary::output(){
    switch(meta){
        case 1:
        cout << "Primary: " << name << "\033[31m    * \033[0m* * * *\n";
        break;
        case 2:
        cout << "Primary: " << name << "\033[33m    * * \033[0m* * *\n";
        break;
        case 3:
        cout << "Primary: " << name << "\033[32m    * * * \033[0m* *\n";
        break;
        case 4:
        cout << "Primary: " << name << "\033[32m    * * * * \033[0m*\n";
        break;
        case 5:
        cout << "Primary: " << name << "\033[36m    * * * * *\033[0m\n";
        break;
        case 0:
        cout << "Primary: " << name << endl;
        break;
    }
}