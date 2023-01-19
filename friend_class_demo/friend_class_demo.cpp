/**
* c++ 有访问限定符：public private protected
* 这样友元才有意义
*/

#include <iostream>

using namespace std;

class  Box {
public:
    friend void printWidth(Box& box);
    friend class BigBox;  // 类的友元声明
    void setWidth(float wid) { width_ = wid; }
    float getwidth() { return width_; }
private:
    float width_;  //成员变量
};

void printWidth(Box& box){
    cout << "width of box : " << box.width_ << endl;
}

class BigBox {
public:
    void print(int width, Box& box) {
        box.setWidth(width);
        cout << "width of box : " << box.width_ << endl;
    }

private:

};

int main() {
    Box box;
    BigBox bigbox;
    box.setWidth(10.0);
    // bigbox.Print(20, box);
    printWidth(box);
    return 0;
}
