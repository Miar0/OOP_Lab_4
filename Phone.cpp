#include "Phone.h"

Phone::~Phone() {
    cout << "Phone Destructor: " << model << endl;
}

void Phone::Call() {
    cout << "Calling " << call << " from " << model << endl;
}

void Phone::infoPhone() {
    cout << "Model: " << model << ", Color: " << color
         << ", Battery: " << battery << "%, Price: $" << price << endl;
}

SmartFeature::~SmartFeature() {
    cout << "SmartFeature Destructor" << endl;
}

void SmartFeature::smartAssistant() {
    cout << model << " uses Smart Assistant." << endl;
}

SmartSecurity::~SmartSecurity() {
    cout << "SmartSecurity Destructor" << endl;
}

void SmartSecurity::faceRecognition() {
    cout << model << " with Face Recognition enabled" << endl;
}

Iphone::~Iphone() {
    cout << "Iphone Destructor" << endl;
}

void Iphone::iosFeature() {
    cout << model << " uses iOS features." << endl;
}

IphoneMini::~IphoneMini() {
    cout << "IphoneMini Destructor" << endl;
}

void IphoneMini::showAllFeatures() {
    infoPhone();
    iosFeature();
    smartAssistant();
    faceRecognition();
    cout << endl;
}
