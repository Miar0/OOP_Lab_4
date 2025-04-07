#include "Phone.h"

void Phone::Call() {
    cout << "Стандартний рингтон телефона" << endl;
}

void Samsung::Call() {
    cout << "Стандартний рингтон Samsung" << endl;
}

void Samsung::Call(string call) {
    cout << "Рингтон Samsung " << call << endl;
}

void Iphone::Call() {
    cout << "Стандартний рингтон Iphone" << endl;
}

void Iphone::Call(string call) {
    cout << "Рингтон Iphone " << call << endl;
}

void Phone::infoPhone() {
    cout << "Інформація про телефон:\n1) " << "Модель - " << model << "\n2) Колір - " << color << "\n3) Вартість - "
    << price << "\n4) Ємкість аккумулятора " << battery << endl;
}

void Samsung::infoPhone() {
    cout << "Інформація про Samsung:\n1) " << "Модель - " << model << "\n2) Колір - " << color << "\n3) Вартість - "
    << price << "\n4) Ємкість аккумулятора " << battery << endl;
}

void Iphone::infoPhone() {
    cout << "Інформація про Iphone:\n1) " << "Модель - " << model << "\n2) Колір - " << color << "\n3) Вартість - "
    << price << "\n4) Ємкість аккумулятора " << battery << endl;
}

void IphoneMini::infoPhone() {
    cout << "Інформація про Iphone mini:\n1) " << "Модель - " << model << "\n2) Колір - " << color << "\n3) Вартість - "
    << price << "\n4) Ємкість аккумулятора " << battery << endl;
}

void IphonePro::infoPhone() {
    cout << "Інформація про Iphone pro:\n1) " << "Модель - " << model << "\n2) Колір - " << color << "\n3) Вартість - "
    << price << "\n4) Ємкість аккумулятора " << battery << endl;
}

void Samsung::timeToPhoneOff() {
    cout << "Звичайний Samsung працює в нормальній температурі приблизно 8-13 годин при активному використанні" << endl;
}

void Iphone::timeToPhoneOff() {
    cout << "Звичайний iPhone працює в нормальній температурі приблизно 10-15 годин при активному використанні" << endl;
}

void IphoneMini::timeToPhoneOff() {
    cout << "iPhone Mini працює приблизно 8-12 годин при активному використанні." << endl;
}

void IphonePro::timeToPhoneOff() {
    cout << "iPhone Pro працює приблизно 12-20 годин при активному використанні." << endl;
}