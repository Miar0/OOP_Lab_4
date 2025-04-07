#ifndef PHONE_H
#define PHONE_H
#include <iostream>

using namespace std;

class Phone {
    protected:
        int battery;
        int price;
        string color;
        string call;
        string model;
    public:
        Phone(string initCall, string initModel, string initColor, int initBattery, int initPrice)
        {
            call = initCall;
            model = initModel;
            color = initColor;
            battery = initBattery;
            price = initPrice;
        }
        void Call();
        void infoPhone();
};

class Samsung : public Phone {
    public:
        Samsung(string initCall, string initModel, string initColor, int initBattery, int initPrice) :
        Phone(initCall, initModel, initColor, initBattery, initPrice) {}
        void Call();
        void Call(string call);
        void infoPhone();
        void timeToPhoneOff();
};

class Iphone : public Phone {
    public:
        Iphone(string initCall, string initModel, string initColor, int initBattery, int initPrice) :
        Phone(initCall, initModel, initColor, initBattery, initPrice) {}
        void Call();
        void Call(string call);
        void infoPhone();
        void timeToPhoneOff();
};

class IphoneMini : public Iphone {
    public:
        IphoneMini(string initCall, string initModel, string initColor, int initBattery, int initPrice) :
        Iphone(initCall, initModel, initColor, initBattery, initPrice) {}
        void infoPhone();
        void timeToPhoneOff();
};

class IphonePro : public Iphone{
    public:
        IphonePro(string initCall, string initModel, string initColor, int initBattery, int initPrice) :
        Iphone(initCall, initModel, initColor, initBattery, initPrice) {}
        void infoPhone();
        void timeToPhoneOff();
};

#endif
