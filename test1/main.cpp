//
//  main.cpp
//  test1
//
//  Created by LZH on 15/11/18.
//  Copyright © 2015年 LZH. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x &a=%x p=%x &p=%x *p=%x\n",a,&a,p,&p,*p);
    //std::cout << "Hello, World!\n";
    return 0;
}
