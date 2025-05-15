
#include <iostream>

#include "XercesDocument.h"
#include "XercesElement.h"


int main(int argc, const char** argv)
{
    xerces::Document document;
    auto element1 = document.addChild("Node 1");
    element1->addChild("Node 3");

    auto element2 = document.addChild("Node 2");
    return 0;
}