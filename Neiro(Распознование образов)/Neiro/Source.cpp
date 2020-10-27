#include <iostream> 
#include "neuro.h"
#include <list>
int main()
{

    uint16_t neurons[3] = { 25, 50, 10 }; //в данном массиве содержится количество нейронов в каждом слое, 
                                          /* каждый нейрон первого слоя воспринимает значение одного "пикселя" из матрицы
каждый нейрон последнего слоя обозначает одно из десятичных цифр
*/
    NeuralNet net(3, neurons);
    double teach0[5 * 5] = {
      0,1,1,1,0,
      0,1,0,1,0,
      0,1,0,1,0,
      0,1,0,1,0,
      0,1,1,1,0,
    };
    double teach1[5 * 5] = {
       0,0,1,1,0,
       0,1,0,1,0,
       1,0,0,1,0,
       0,0,0,1,0,
       0,1,1,1,1,
    };
    double teach2[5 * 5] = {
       0,1,1,1,0,
       0,0,0,1,0,
       0,1,1,1,0,
       0,1,0,0,0,
       0,1,1,1,0,
    };
    double teach3[5 * 5] = {
       0,1,1,1,0,
       0,0,0,1,0,
       0,1,1,1,0,
       0,0,0,1,0,
       0,1,1,1,0,
    };
    double teach4[5 * 5] = {
       0,1,0,1,0,
       0,1,0,1,0,
       0,1,1,1,0,
       0,0,0,1,0,
       0,0,0,1,0,
    };
    double teach5[5 *5] = {
        0,1,1,1,0,
        0,1,0,0,0,
        0,1,1,1,0,
        0,0,0,1,0,
        0,1,1,1,0,
    };
    double teach6[5 * 5] = {
        0,1,1,1,0,
        0,1,0,0,0,
        0,1,1,1,0,
        0,1,0,1,0,
        0,1,1,1,0,
    };
    double teach7[5 * 5] = {
        1,1,1,1,1,
        0,0,0,1,0,
        0,0,1,0,0,
        0,1,0,0,0,
        1,0,0,0,0,
    };
    double teach8[5 * 5] = {
        0,1,1,1,0,
        0,1,0,1,0,
        0,1,1,1,0,
        0,1,0,1,0,
        0,1,1,1,0,
    };
    double teach9[5 * 5] = {
       0,1,1,1,0,
       0,1,0,1,0,
       0,1,1,1,0,
       0,0,0,1,0,
       0,1,1,1,0,
    };

    list<double*> teach_list;
    teach_list.push_back(teach0);
    teach_list.push_back(teach1);
    teach_list.push_back(teach2);
    teach_list.push_back(teach3);
    teach_list.push_back(teach4);
    teach_list.push_back(teach5);
    teach_list.push_back(teach6);
    teach_list.push_back(teach7);
    teach_list.push_back(teach8);
    teach_list.push_back(teach9);
    double* teach = teach_list.front();

    double ans[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, };//ответы для обучающей выборки,(0-9)
    double output[10] = { 0 };// массив для выгрузки данных из сети
    net.Do_it(4 * 4, teach); // проверяем работу необученной сети
    net.getResult(10, output);
    for (uint8_t i = 0; i < 10; i++) printf("%d: %f \n", i, output[i] * 100); //выводим результат работы

    
        /* for (int j = 0; j < 10; j++)
             cout << ans[j] << " ";
         cout << endl;*/
        list<double*> copy_list = teach_list;
        //for (int i = 0; i < 9; i++) {
            teach = copy_list.front();
            net.learnBackpropagation(teach, ans, 0.5, 1000); //обучаем сеть на выборке "teach"-0
            /*ans[i]--;
            ans[i + 1]++;
            /*for(int j=0;j<10;j++)
            cout << ans[j] << " ";
            cout << endl;
            copy_list.pop_front();
        }
        /*teach = copy_list.front(); //обучаем 9-ке
        net.learnBackpropagation(teach, ans, 0.005, 10);
        ans[9] = 0;
        ans[0] = 1;*/
    

    double test[5*5] = {
       0,0,1,1,1,
       0,0,1,0,1,
       0,0,1,0,1,
       0,0,1,0,1,
       0,0,1,1,1,
    };

        
    printf("\n");
    net.Do_it(4 * 4, test);// проверяем работу сети после обучения
    net.getResult(10, output);
    for (uint8_t i = 0; i < 10; i++) printf("%d: %f \n", i, output[i] * 100);
    return 0;
} 