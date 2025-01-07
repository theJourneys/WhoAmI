#include <iostream>
#include <string> // std::string veri tipini kullanmak için gerekli olan string kütüphanesini dahil eder.


int main() {
    /*bilgileri değişkenlere atayan kodlar*/
    std::string ad = "Burhan";
    std::string soyad = "Arıkan";
    int yas = 22;
    double boy = 1.60; // boy uzunluğu metre cinsinden ifade edilmiş.
    char cinsiyet = 'M'; //  cinsiyet ingilizcedeki ilk harfiyle temsil edilmiş.
    bool isARobot = false;


    /*bilgileri düzenli bir şekilde ekrana yazdıran kodlar*/
    std::cout << "Who am I?" << std::endl;
    std::cout << "I am " << ad << " " << soyad << "." << std::endl;
    std::cout << "I am " << yas << " years old." << std::endl;
    std::cout << "My height is " << boy << " meters." << std::endl;
    std::cout << "My gender is '" << cinsiyet << "'." << std::endl;
    std::cout << "Am I a robot? " << (isARobot ? "Yes" : "No") << std::endl;

    return 0;
}

/* 
c++ açıklamaları:
std::string -> karakter dizisi belirtmek için kullanılır.
int -> Tam sayı belirtmek için kullanılır.
double -> Ondalıklı sayı belirtmek için kullanılır.
char -> Tek bir karakter belirtmek için kullanılır.
bool -> true veya false olmak üzere iki değer alan değişkenler için kullanılır.
(isARobot ? "Yes" : "No") -> (koşul ? "koşul doğruysa dönecek değer" : "koşul yanlışsa dönecek değer") şeklinde bir kullanım vardır. 
    buna ternary operator denir.
*/
