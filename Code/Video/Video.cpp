// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#include "Video.h"

void Video::printCameraInfo(){
    std::cout << "---------------------------" << std::endl;
    std::cout << "Camera brand: " << bM.getBrand() << std::endl;
    std::cout << "Camera model: " << bM.getModel() << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Megapixels: " << megaPixels << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "MEMORY: " << std::endl;
    std::cout << "Memory capacity: " << memory.getCapacity() << std::endl;
    std::cout << "Memory type: " << memory.getCardType() << std::endl;
    std::cout << "Memory brand: " << memory.getBrand() << std::endl;
    std::cout << "Memory model: " << memory.getModel() << std::endl;
    std::cout << "Purchase date: " << memory.getDay() << ", " << memory.getMonth() << ", " << memory.getYear() << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "Recording date: " << recordingDate.getDay() << ", " << recordingDate.getMonth() << ", " << recordingDate.getYear() << std::endl;
}