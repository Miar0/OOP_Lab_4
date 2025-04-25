#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>
using namespace std;

class Phone {
    protected:
        int battery;
        int price;
        string color;
        string call;
        string model;

    public:
        Phone(string initCall, string initModel, string initColor, int initBattery, int initPrice) {
            call = initCall;
            model = initModel;
            color = initColor;
            battery = initBattery;
            price = initPrice;
            cout << "Phone Constructor: " << model << endl;
        }

        ~Phone();
        void Call();
        void infoPhone();
};

class SmartFeature : virtual public Phone {
    public:
        SmartFeature(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice) {
            cout << "SmartFeature Constructor" << endl;
        }

        ~SmartFeature();
        void smartAssistant();
};

class Iphone : virtual public Phone {
    public:
        Iphone(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice) {
            cout << "Iphone Constructor" << endl;
        }

        ~Iphone();
        void iosFeature();
};

class IphoneMini : public Iphone, public SmartFeature {
    public:
        IphoneMini(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice),
              Iphone(initCall, initModel, initColor, initBattery, initPrice),
              SmartFeature(initCall, initModel, initColor, initBattery, initPrice) {
            cout << "IphoneMini Constructor\n" << endl;
        }

        ~IphoneMini();
        void showAllFeatures();
};

#endif
