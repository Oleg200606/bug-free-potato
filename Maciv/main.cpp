//
//  main.cpp
//  Maciv
//
//  Created by Олег Шевцов on 17.02.2024.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    const int stroka = 3;
    const int colomn = 5;
    double array[stroka][colomn];
    
    std::cout << "Введите элименты массива 3х5:" << std::endl;
    for (int i = 0; i < stroka; ++i ){
        std::cout << "Строка"  << i + 1 << ": ";
        for (int j = 0; j < colomn; ++j){
            std::cin >> array[i][j];
        }
    }
    
    std::cout << "Массив 3х5:" << std::endl;
    for (int i = 0; i < stroka; ++i ){
        for (int j = 0; j < colomn; ++j){
            std::cout << std::setw(10) << array[i][j];
        }
        std::cout << std::endl;
    }
    
    for(int i = 0; i < stroka; ++i){
        double summ = 0;
        for(int j = 0; j < colomn; ++j){
            summ += array[i][j];
        }
        double avar = summ/colomn;
        
        std::cout << "Среднее арифметическое элиментов : " << i + 1 << "стоки равно: " << std::fixed << std::setprecision(2) << avar << std::endl;
            
    }
    return 0;
}
