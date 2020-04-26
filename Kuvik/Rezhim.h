#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <random>
#include <conio.h>

class rezhim {
private:
    double liam;
    double r;
    double g;
    std::mt19937 gen1;
    std::uniform_real_distribution<> urd1;
    double min_delta_mashin;
    int N; // ���������� ������, ����������� �� ��������� ��������
    double time_of_tact; // ������ ����� ������� �����
    std::vector <double> T; // ������ �������� �������, � ������� ����� ��������� ��� ������
    std::vector <int> Kolvo_Bistrix; // ���������� ������� ����� � ������ �����
    std::vector <double> T_bistrix_mashin; // ����� ������� ������� �����
    int SUM_T; // ��������� ����� ���� ����������
    int sum_n; // ����� ����� ������ �� ��� ���������
    int k; // ������� ���������� ����������
    int sum_bistrix_mashin; // ���������� ���� ������� �����
    int bunker_nakop;
    int num_nasish;

public:
    rezhim(double, double, double, double, std::mt19937 &, 
        std::uniform_real_distribution<> &, double);

    void set_params(double, double, double, double, std::mt19937 &, std::uniform_real_distribution<> &, double);

    void set_rand_tact(double);

    int get_bunker_nak();

    int get_num_nas();

    void print();

    std::vector <double> get_times_slow();

    std::vector <int> get_num_fast();

    std::vector <double> get_times_fast();

    void potok_in_work(); // ������� ����� �� ����� rand_t ��� ��������� �����������

    void potok_in_waiting();

    void potok_nasish();
};
