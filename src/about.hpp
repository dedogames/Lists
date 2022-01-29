#ifndef VERSIONHTTPHPP
#define VERSIONHTTPHPP
#include<iostream>
#define version    "1.0"
#define developer  "Gelson G Rodrigues"
#define email      "geodlery@gmail.com"
#define project    "Data structure"
#define subject    "Lists"
namespace About
{
    void about()
    {
        std::cout << "Version: " << version << std::endl;
        std::cout << "project: " << version << " Topic: "<< subject << std::endl;         
    }
}

#endif