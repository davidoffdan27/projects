#ifndef NEURO_H
#define NEURO_H
#include <vector> 
#include <math.h> //���������� ��� ������ � �����������, ����� ��� ���������� ������������� �������
#include <stdint.h> //��� ���������� �������� ������������ ����� ���������������� ���� ������, ��� ������� �������� ����� ���������� ������ ��� ������ �� ������ ����������������� ����.

using namespace std;
class NeuralNet {
public:
    NeuralNet(uint8_t L, uint16_t* n);//�����������, (���-�� �����,���-�� �������� � ������ �� �����)
    void Do_it(uint16_t size, double* data);
    void getResult(uint16_t size, double* data);//������� ��������� �������� �������� ������ � ���������� ���� ����
    void learnBackpropagation(double* data, double* ans, double acs, double k);//����� �������� (��������� ��������������� ������)
private:
    vector<vector<vector<double>>> neurons; //�������
    vector<vector<vector<double>>> weights; //����
    uint8_t numLayers; //���-�� �����
    vector<double> neuronsInLayers; //������ ���-�� �������� �� ����
    double Func(double in); //�������   
    double Func_p(double in); //�����������
    uint32_t MaxEl(uint16_t size, uint16_t* arr); //������ ������� � �������
    void CreateNeurons(uint8_t L, uint16_t* n); //���������� ��������   
    void CreateWeights(uint8_t L, uint16_t* n); 

};
#endif