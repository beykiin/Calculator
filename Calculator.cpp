﻿// Calculator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main() {
    char operation;

    double num1, num2;

    cin >> operation;

    cout << "enter first number";

    cin >> num1;

    cout << "enter second number";
    cin >> num2;

    switch (operation) {

        case '+':

            cout << num1 << "+" << num2 << "=" << num1 + num2;
            
            break;
        
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            
            break;

        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;

            break;

        case '/':

            if (num2 != 0)

            cout << num1 << "/" << num2 << "=" << num1 + num2;

            else {

                cout << "Are you kidding me?";

                return 1;

            }

            break;
    
        default:

            cout << "You are very bad at math";

        

    }

    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
