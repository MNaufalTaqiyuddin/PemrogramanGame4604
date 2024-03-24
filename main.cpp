#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    int hp,mana,dmg;
    int herbs,hpPot,manaPot;
    int stokHerbs,stokhpPot,stokmanaPot;
    string sword[10] ={"Iron Sword + 0 Damage"," Hydro + 15 Damage", " Pyro + 10 Damage", " Cryo + 8 Damage", " Electro + 20 Damage"};

    //kondisi awal char
    cout << "-----Kondisi Character---" << "\n";
    cout << "HP : ";
    cin >> hp;
    cout << "Mana : ";
    cin >> mana;
    cout << "Damage : ";
    cin >> dmg;
    cout << "\n";
    //kondisi inventory
    cout << "-----Stok Inventory Anda-----" << "\n";
    cout << "Stok Herbs : ";
    cin >> stokHerbs;
    cout << "Stok HP Potion :";
    cin >> stokhpPot;
    cout << "Stok Mana Potion : ";
    cin >> stokmanaPot;
    cout << "\n";

int pilih;
    do{
        cout << "\n";
        cout << "=====Selamat Datang=====" << "\n";
        cout << "Anda Bisa Menggunakann Menu" << "\n";
        cout << "1. Tampilkan Status Character" << "\n";
        cout << "2. Gunakan Inventory" << "\n";
        cout << "3. Exit" << "\n";


        cin >> pilih;
        switch(pilih)
        {
            case 1:
                cout << "-----Status Karakter-----" << "\n";
                cout << "HP : " << hp <<"\n";
                cout << "Mana : " << mana <<"\n" ;
                cout << "Damage : " << dmg <<"\n" ;
                break;

            case 2:
                cout << "-----Stok Inventory Saat Ini-----" << "\n";
                cout << "Stok Herbs : " << stokHerbs << "\n";
                cout << "Stok Mana Potion : " << stokmanaPot << "\n";
                cout << "Stok HP Potion : " << stokhpPot << "\n";
                cout << "Stok Sword : ";
                for (int i = 0; i<10; i++)
                {
                    cout << sword[i];
                }
                cout << "\n";
                cout << "======Use Item======" << "\n";
                cout << "1. Herbs (+10 HP)" << "\n";
                cout << "2. Mana Potion (+50 Mana)" << "\n";
                cout << "3. HP Potion (+50)" << "\n";
                cout << "4. Sword" << "\n";
                int pilItem;
                cin >> pilItem;
                switch(pilItem)
                {
                    case 1:
                        if(stokHerbs>0)
                        {
                            hp+=10;
                            stokHerbs--;
                            cout << "HP +10" << "\n";
                            cout << "Stok Herbs : " << stokHerbs << "\n";
                        }
                        else{
                            cout<<"Item Habis" << "\n";
                        }
                        break;
                    case 2:
                        if(stokmanaPot>0){
                            mana+=50;
                            stokmanaPot--;
                            cout << "Mana +50" << "\n";
                            cout << "Stok Mana Potion : " << stokmanaPot<< "\n";
                        }
                        else{
                            cout<<"Item Habis"<<"\n";
                        }
                        break;
                    case 3:
                        if(stokhpPot>0){
                            hp+=50;
                            stokhpPot--;
                            cout << "HP +50" << "\n";
                            cout << "Stok HP Potion : " << stokhpPot<<"\n";
                        }
                         else{
                            cout<<"Item Habis"<<"\n";
                        }
                        break;
                    case 4:
                        cout << "===Pilih Buff Elemen Sword==" << "\n";
                        cout << "0. Iron Sword + 0 Damage" << "\n";
                        cout << "1. Hydro + 15 Damage" << "\n";
                        cout << "2. Pyro + 10 Damage" << "\n";
                        cout << "3. Cryo + 8 Damage" << "\n";
                        cout << "4. Electro + 20 Damage" << "\n";
                        int pilSword;
                        cin >> pilSword;
                        switch(pilSword)
                        {
                            case 0:
                                dmg+=0;
                                cout << "Buff Iron Sword Dipilih, Damage +0" << "\n";
                                break;
                            case 1:
                                dmg+=15;
                                cout << "Buff Hydro Sword Dipilih, Damage +15" << "\n";
                                break;
                            case 2:
                                dmg+=10;
                                cout << "Buff Hydro Sword Dipilih, Damage +10" << "\n";
                                break;
                            case 3:
                                dmg+=8;
                                cout << "Buff Cryo Sword Dipilih, Damage +8" << "\n";
                                break;
                            case 4:
                                dmg+=20;
                                cout << "Buff Electro Sword  Dipilih, Damage +20" << "\n";
                                break;

                        }

                }

                break;


        };
    }while(pilih!=3);


    return 0;
}
