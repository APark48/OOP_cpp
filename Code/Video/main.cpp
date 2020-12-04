// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#include "Video.h"
using namespace std;
int main()
{
    Memory memory(128, "SD", "Kingston", "Select", 100, 3, "November", 2000);
    Video camera("Canon", "EOS Rebel", 3999.99, 24, memory, 3, "November", 2020);
    camera.printCameraInfo();

    return 1;
}