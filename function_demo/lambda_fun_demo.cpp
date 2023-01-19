# include <iostream>
void lambda_demo_a() {
    int y = 10;
    int z = 11;
    auto a_lambda_func = [z, &y](int x)-> int{
        y = 2*x;
        return y;
    };
    std::cout << "lambda demo value : " << a_lambda_func(5) << std::endl;
    return;
}

int main(){
    lambda_demo_a();
    return 0;
}


// // LambdaDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// //
 
// #include <iostream>
// // using namespace std;
 
// int main()
// {
//     std::cout << "Hello Lambda!\n";
//     int a = 5;
//     char c = 'A';
//     //[a,c]为捕获外部变量a,c
//     //()为参数列表
//     //{}为函数体
//     //后面这个()为调用该函数
//     [a, c](){
//         std::cout << a << c << std::endl;
//     }();
 
//     //匿名函数声明->int为函数返回类型
//     auto tmpFunc = [a, c](int b, char d)->int {
//         std::cout << "外部变量a="<<a << "外部变量c=" <<c << std::endl;
//         std::cout << "参数b=" << b << "参数d=" << d << std::endl;
//         return a;
//     };
//     int k = tmpFunc(10, 'B');//匿名函数调用
//     std::cout << k << endl;
 
// }

