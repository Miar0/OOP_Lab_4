#include "Phone.h"

int main() {
    IphoneMini mini("123-456", "iPhone Mini", "Blue", 90, 999);
    mini.showAllFeatures();
    IphonePro pro("123-456", "iPhone Pro", "Black", 120, 1499);
    pro.showAllFeatures();

    return 0;
}