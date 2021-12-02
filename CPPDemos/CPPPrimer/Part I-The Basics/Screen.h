//
// Created by shaund on 2021/12/2.
//

#ifndef MAIN_CPP_SCREEN_H
#define MAIN_CPP_SCREEN_H
#include <iostream>


class Screen {
    friend Screen& settWidth(float wid, Screen &screen) { screen.width = wid; return screen; };

public:
    Screen() = default;
    Screen(float wid, float hei): width(wid), height(hei) {};
    Screen& display(std::ostream &os) { do_display(os); return *this; }; // 返回的是Screen变量
    const Screen& display(std::ostream &os) const { do_display(os); return *this; }; // 返回的是Screen常量
    Screen& setWidth(float wid) { width = wid; return *this; }

private:
    float width{0};
    float height = 0;

    void do_display(std::ostream &os) const { os << "width:" << width << "; height:" << height; };
};

#endif //MAIN_CPP_SCREEN_H
