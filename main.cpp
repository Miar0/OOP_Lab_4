#include <iostream>
#include <Windows.h>
#include "Phone.h"


int main() {
    SetConsoleOutputCP(CP_UTF8);

    Iphone* iphone14 = new Iphone("Default", "iPhone 14", "Black", 3200, 1000);
    iphone14->Call();
    iphone14->Call("Marimba");
    iphone14->infoPhone();
    iphone14->timeToPhoneOff();
    cout << endl;

    IphoneMini* iphone14mini = new IphoneMini("Default", "iPhone 14 Mini", "Blue", 2400, 800);
    iphone14mini->infoPhone();
    iphone14mini->timeToPhoneOff();
    cout << endl;

    IphonePro* iphone14pro = new IphonePro("Default", "iPhone 14 Pro", "Gold", 4000, 1300);
    iphone14pro->infoPhone();
    iphone14pro->timeToPhoneOff();
    cout << endl;

    Samsung* samsung = new Samsung("Default", "Samsung Galaxy S23", "Phantom Black", 3900, 950);
    samsung->Call();
    samsung->Call("Over the Horizon");
    samsung->infoPhone();
    samsung->timeToPhoneOff();
    cout << endl;

    delete iphone14;
    delete iphone14mini;
    delete iphone14pro;
    delete samsung;

    return 0;
}