#include "rezhim.h"
#include "Get_Puas_and_Bart.h"

rezhim::rezhim(double _liam, double _r, double _g, double _time_of_tact,
    std::mt19937 & _gen1, std::uniform_real_distribution<> & _urd1, double _min_delta_mashin) {
    set_params(_liam, _r, _g, _time_of_tact, _gen1, _urd1, _min_delta_mashin);
    SUM_T = 0; // ��������� ����� ���� ����������
    sum_n = 0; // ����� ����� ������ �� ��� ���������
    k = 0; // ������� ���������� ����������
    sum_bistrix_mashin = 0; // ���������� ���� ������� �����
    bunker_nakop = 0; // ���������� ������, ������� ������� ��������� �� ������
    num_nasish = 0; // ����. ���-�� ������, ������� �� ����� ���� ���������
}

void rezhim::set_params(double _liam, double _r, double _g, double _time_of_tact,
    std::mt19937 & _gen1, std::uniform_real_distribution<> & _urd1, double _min_delta_mashin) {
    liam = _liam;
    r = _r;
    g = _g;
    time_of_tact = _time_of_tact;
    gen1 = _gen1;
    urd1 = _urd1;
    min_delta_mashin = _min_delta_mashin;
}

void rezhim::set_rand_tact(double _time_of_tact) {
    time_of_tact = _time_of_tact;
}

int rezhim::get_bunker_nak() {
    return bunker_nakop;
}

int rezhim::get_num_nas() {
    return num_nasish;
}

void rezhim::print()
{
    int smesh = 0;
    std::cout << "������" << "      �������\n";
    for (int i = sum_n - N; i < sum_n; i++)// ��� � �����, ���������� ���������� ����� �������,
    // ���������� ����� �������� ��� ������ ����� � ����� ������� ������� �����
    {
        if (i > 0)
            smesh += Kolvo_Bistrix[i - 1];
        std::cout << T[i] << "      ";
        for (int j = 0; j < Kolvo_Bistrix[i]; j++)
        {
            std::cout << T_bistrix_mashin[j + smesh] << " ";
        }
        std::cout << "\n";
    }
}

std::vector <double> rezhim::get_times_slow() {
    return T;
}

std::vector <int> rezhim::get_num_fast() {
    return Kolvo_Bistrix;
}

std::vector <double> rezhim::get_times_fast() {
    return T_bistrix_mashin;
}

void rezhim::potok_in_work() { // ������� ����� �� ����� rand_t
    std::vector <double> Delta_Pachki; // ���������� (�����) ����� �������
    double delta_mashin; // ���������� (�����) ����� �������� � �����
    double liam_bart;
    double mat_ozid;
    double Kolvo_Medlennix;
    double rand_t;
    double p; // �������� ��������� ��������
    int q;
    rand_t = time_of_tact;
    mat_ozid = 1 + r / (1 - g); // ������� ������� ����� ������� ����� � ����� (�������������)

    liam_bart = liam / mat_ozid; // ������� ������� ����� ��������� ����� � ��������� ��������� (�������������)

    N = Get_Puasson(liam_bart, rand_t, gen1, urd1);

    T.resize(sum_n + N); // ������ ������ ������� ������ ��� ���������� �����
    Kolvo_Bistrix.resize(sum_n + N); // ������ ������ ������� ���������� ������� ����� � ������ ��� ���������� �����
    Delta_Pachki.resize(sum_n + N); // ������ ������ ������� ������� �� ������� ����� �������

    q = sum_n; // ������� ���� ������ �� �� ����� �� �������� ���������
    while (q < sum_n + N) // ����, � ������� �� ��������� ������ �����, � ������� ������ ������ �� ��������� ��������
    {
        p = urd1(gen1); // ��������� ��������� �������� �� 0 �� 1
        T[q] = rand_t*p + SUM_T; // �����, � ������� ������ ��������� ������ (��������� ������)
        q++;
    }
    std::sort(T.begin(), T.end()); // �������������� ����� ��� ���������� ���������

    for (int i = sum_n; i < sum_n + N; i++) // ��� � �����, ���������� ��� ������ ����� ����� ������� �����
    {
        Kolvo_Bistrix[i] = Get_Bartlet(r, g, gen1, urd1);
        sum_bistrix_mashin += Kolvo_Bistrix[i];
    }
    int smesh = 0;
    T_bistrix_mashin.resize(sum_bistrix_mashin);
    for (int i = sum_n; i < sum_n + N; i++)// ��� � �����, ���������� ���������� ����� �������,
        // ���������� ����� �������� ��� ������ ����� � ����� ������� ������� �����
    {
        if (i < sum_n + N - 1)
            Delta_Pachki[i] = (double)(T[i + 1] - T[i]) / 2;
        else
            Delta_Pachki[i] = (rand_t * (k + 1) - T[i]) / 2;
        if (i > 0)
            smesh += Kolvo_Bistrix[i - 1];
        delta_mashin = (double)Delta_Pachki[i] / Kolvo_Bistrix[i];
        if (min_delta_mashin > delta_mashin)
            min_delta_mashin = delta_mashin;
        for (int j = 0; j < Kolvo_Bistrix[i]; j++)
        {
            T_bistrix_mashin[j + smesh] = T[i] + (j + 1) * delta_mashin;
        }
    }

    k++; 
    SUM_T += rand_t; // ������������� ��������� ����� ����������
    sum_n += N; // ������������� ���������� ������ (��������� �����) �� �� ����� � ������ �������� ���������
}

void rezhim::potok_in_waiting()
{
    double liam_bart;
    double mat_ozid;
    double num_medl;
    double num_bist = 0;
    double rand_t;

    rand_t = time_of_tact;
    mat_ozid = 1 + r / (1 - g); // ������� ������� ����� ������� ����� � ����� (�������������)

    liam_bart = liam / mat_ozid; // ������� ������� ����� ��������� ����� � ��������� ��������� (�������������)

    num_medl = Get_Puasson(liam_bart, rand_t, gen1, urd1);

    for (int i = 0; i < num_medl; i++) // ��� � �����, ���������� ��� ������ ����� ����� ������� �����
    {
        num_bist += Get_Bartlet(r, g, gen1, urd1);
    }

    bunker_nakop += (num_medl + num_medl);
}

void rezhim::potok_nasish()
{
    double num_medl;
    double num_bist = 0;
    double rand_t;
    double delta_mashin; // ���������� (�����) ����� �������� � �����

    delta_mashin = min_delta_mashin;
    rand_t = time_of_tact;
    
    num_nasish = (int)(rand_t / delta_mashin);
}
