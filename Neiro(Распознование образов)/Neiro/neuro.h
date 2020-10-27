#ifndef NEURO_H
#define NEURO_H
#include <vector> 
#include <math.h> //библиотека дл€ работы с математикой, нужна дл€ объ€влени€ активационной функции
#include <stdint.h> //эта библиотека позволит использовать более оптимизированные типы данных, что немного сократит объЄм выдел€емой пам€ти дл€ нашего не самого оптимизированного кода.

using namespace std;
class NeuralNet {
public:
    NeuralNet(uint8_t L, uint16_t* n);//конструктор, (кол-во слоев,кол-во нейронов в каждом из слоев)
    void Do_it(uint16_t size, double* data);
    void getResult(uint16_t size, double* data);//функци€ позвол€ет получить выходные данные с последнего сло€ сети
    void learnBackpropagation(double* data, double* ans, double acs, double k);//метод обучени€ (обратного распростронени€ ошибки)
private:
    vector<vector<vector<double>>> neurons; //нейроны
    vector<vector<vector<double>>> weights; //веса
    uint8_t numLayers; //кол-во слоев
    vector<double> neuronsInLayers; //вектор кол-ва нейронов на слое
    double Func(double in); //функци€   
    double Func_p(double in); //производна€
    uint32_t MaxEl(uint16_t size, uint16_t* arr); //максим элемент в массиве
    void CreateNeurons(uint8_t L, uint16_t* n); //заполнение нейронов   
    void CreateWeights(uint8_t L, uint16_t* n); 

};
#endif