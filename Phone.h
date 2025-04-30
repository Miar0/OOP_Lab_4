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

class SmartSecurity : virtual public Phone {
    public:
        SmartSecurity(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice) {
            cout << "SmartSecurity Constructor" << endl;
        }

        ~SmartSecurity();
        void faceRecognition();
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


class IphonePro : public Iphone, public SmartFeature {
    public:
        IphonePro(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice),
              Iphone(initCall, initModel, initColor, initBattery, initPrice),
              SmartFeature(initCall, initModel, initColor, initBattery, initPrice){
            cout << "IphonePro Constructor\n" << endl;
        }

        ~IphonePro();
        void showAllFeatures();
};

class IphoneMini : public Iphone, public SmartFeature, public SmartSecurity{
    public:
        IphoneMini(string initCall, string initModel, string initColor, int initBattery, int initPrice)
            : Phone(initCall, initModel, initColor, initBattery, initPrice),
              Iphone(initCall, initModel, initColor, initBattery, initPrice),
              SmartFeature(initCall, initModel, initColor, initBattery, initPrice),
              SmartSecurity(initCall, initModel, initColor, initBattery, initPrice){
            cout << "IphoneMini Constructor\n" << endl;
        }

        ~IphoneMini();
        void showAllFeatures();
};

#endif
