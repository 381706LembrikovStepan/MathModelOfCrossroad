#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <random>
#include <conio.h>
#include "Get_Puas_and_Bart.h"
#include "rezhim.h"

void Puas(double liam, int t, double r, double g, std::mt19937 &gen1,
    std::uniform_real_distribution<> &urd1) // ������������� �������� ������ � ����� ������ ���������
{
    std::vector <double> T; // ������ �������� �������, � ������� ����� ��������� ��� ������
    int SUM_T = 0; // ��������� ����� ���� ����������
    double liam_st = 0; // ��������������� �������� ������
    int N = 0; // ���������� ������, ����������� �� ��������� ��������
    int sum_n = 0; // ����� ����� ������ �� ��� ���������
    int k = 0; // ������� ���������� ����������
    //std::vector <int> T_poslednie; // ��������� ������
    double mat_ozid; // ������� ����� ������� ����� � �����
    double liam_bart; // ������� ����� ��������� ����� � ��������� ���������
    std::vector <int> Kolvo_Medlennix; // ������� ��������� ����� ���� � ������ ���������
    std::vector <int> Kolvo_Bistrix; // ���������� ������� ����� � ������ �����
    double p; // �������� ��������� ��������
    int q; // ������� ���� ������ �� �� ����� �� �������� ���������
    std::vector <double> Delta_Pachki; // ���������� (�����) ����� �������
    double delta_mashin; // ���������� (�����) ����� �������� � �����
    std::vector <double> T_bistrix_mashin; // ����� ������� ������� �����
    int sum_bistrix_mashin = 0; // ���������� ���� ������� �����
    double r_st = 0; // ����������� ����������� � ����� ������ ����� ������ (�������������� ��������)
    int it_r_st_1 = 0; // �������� ��� ����� > 1 ������
    int it_r_st_2 = 0; // �������� ��� ����� = 1 ������
    double mat_ozid_st = 0; // ������� ����� ������� ����� � ����� (�������������� ��������)
    double liam_bart_st; // ����� ��������� ����� (�������������� ��������)

    mat_ozid = 1 + r / (1 - g); // ������� ������� ����� ������� ����� � ����� (�������������)
    liam_bart = liam / mat_ozid; // ������� ������� ����� ��������� ����� � ��������� ��������� (�������������)

    std::cout << "������ ������� ����� ���������� ����� ������ ���� ������, ���: " << 0.1 * liam << "\n";
    std::cout << "������ ������� ����� ���������� ����� �������� ������ ���� ������, ���: " << 0.1 * liam_bart << "\n";
    std::cout << "������ ������� ����� ���������� r ������ ���� ������, ���: " << 0.1 * r << "\n";

    do
    {
        do
        {
            do // ��� � �����, ���� �������� ���� ����� �� ������ �� ����� ������ ������������� ������, ���������� �� 0.1
            {
                N = Get_Puasson(liam_bart, t, gen1, urd1);

                if ((N == 0) && (k == 0)) // �������� ���������� ������ � ���� ���������, �� ������� ��������� ���� �� ���� ������
                    continue;

                Kolvo_Medlennix.push_back(N);

                T.resize(sum_n + N); // ������ ������ ������� ������ ��� ���������� �����
                Kolvo_Bistrix.resize(sum_n + N); // ������ ������ ������� ���������� ������� ����� � ������ ��� ���������� �����
                Delta_Pachki.resize(sum_n + N); // ������ ������ ������� ������� �� ������� ����� �������

                q = sum_n; // ������� ���� ������ �� �� ����� �� �������� ���������
                while (q < sum_n + N) // ����, � ������� �� ��������� ������ �����, � ������� ������ ������ �� ��������� ��������
                {
                    p = urd1(gen1); // ��������� ��������� �������� �� 0 �� 1
                    T[q] = (double)t*p + k * t; // �����, � ������� ������ ��������� ������ (��������� ������)
                    q++;
                }
                //std::cout << "\n";
                //std::cout << liam_st; // ����� ����� �������� �� �����
                std::sort(T.begin(), T.end()); // �������������� ����� ��� ���������� ���������

                for (int i = sum_n; i < sum_n + N; i++) // ��� � �����, ���������� ��� ������ ����� ����� ������� �����
                {
                    Kolvo_Bistrix[i] = Get_Bartlet(r, g, gen1, urd1);
                    sum_bistrix_mashin += Kolvo_Bistrix[i];
                    if (Kolvo_Bistrix[i] > 0) // ����������� it_r_st_1 � ������, ���� � ����� ������ ����� ������
                        it_r_st_1++;
                    if (Kolvo_Bistrix[i] == 0) // ����������� it_r_st_2 � ������, ���� � ����� ���� ������
                        it_r_st_2++;
                }
                int smesh = 0;
                T_bistrix_mashin.resize(sum_bistrix_mashin);
                for (int i = sum_n; i < sum_n + N; i++)// ��� � �����, ���������� ���������� ����� �������,
                    // ���������� ����� �������� ��� ������ ����� � ����� ������� ������� �����
                {
                    if (i < sum_n + N - 1)
                        Delta_Pachki[i] = (double)(T[i + 1] - T[i]) / 2;
                    else
                        Delta_Pachki[i] = (t * (k + 1) - T[i]) / 2;
                    if (i > 0)
                        smesh += Kolvo_Bistrix[i - 1];
                    delta_mashin = (double)Delta_Pachki[i] / Kolvo_Bistrix[i];
                    std::cout << "\n����� ������� ������� �����: ";
                    for (int j = 0; j < Kolvo_Bistrix[i]; j++)
                    {
                        T_bistrix_mashin[j + smesh] = T[i] + (j + 1) * delta_mashin;
                        std::cout << T_bistrix_mashin[j + smesh] << " ";
                    }
                    std::cout << "\n";
                }

                //std::cout << "delta " << i << "-�� ����� = " << Delta[i] << "\n";
            //std::cout << "������������ ���������� ������� ����� � " << k << "-�� ��������� = " << max_kolvo_bist << "\n";



                k++; // ���������� �������� ����������
                std::cout << "\n�������� ����� " << k;
                std::cout << ". ��������� ������: " << N << "\n";
                for (int i = sum_n; i < sum_n + N; i++) // ����� ������ �� �������� ���������
                {
                    std::cout << T[i] << " ";
                    std::cout << "���������� ������� ����� � " << i << "-�� ����� = " << Kolvo_Bistrix[i] << "\n";
                }

                SUM_T += t; // ������������� ��������� ����� ����������
                sum_n += N; // ������������� ���������� ������ (��������� �����) �� �� ����� � ������ �������� ���������
                r_st = (double)it_r_st_1 / (it_r_st_1 + it_r_st_2);
                //mat_ozid_st = (sum_n + sum_bistrix_mashin) / sum_n; // ������������� ������� ���������� ����� � �����
                liam_bart_st = (double)sum_n / SUM_T; // ���������� ��������������� �������� ������ ��������
                liam_st = (double)(sum_n + sum_bistrix_mashin) / SUM_T; // ���������� ��������������� �������� ������

                std::cout << "\n";
                std::cout << "������ ������� ����� ���������� ����� �����: " << abs(liam - liam_st) << "\n";
                std::cout << " " << (liam_st) << " " << SUM_T << "\n";
            } while (abs(liam - liam_st) >= (0.1 * liam));
            //std::cout << "\n";
            std::cout << "������ ������� ����� ���������� ����� �������� �����: " << abs(liam_bart - liam_bart_st) << "\n";
            std::cout << " " << (liam_bart_st) << "\n";
        } while (abs(liam_bart - liam_bart_st) >= (0.1 * liam_bart));
        //std::cout << "\n";
        std::cout << "������ ������� ����� ���������� r �����: " << abs(r - r_st) << "\n";
        std::cout << " " << (r_st) << "\n";
    } while (abs(r - r_st) >= (0.1 * r));
    //std::cout <<"\n" << abs(a - lim_ st) << " " << (0.1 * a) << " "<< SUM_T << "\n";
    std::cout << SUM_T; // ������� ��������� �����
    //T_poslednie.resize(N);
    //int u = sum_n - N;
    //for (int i = 0; i < N; i++)
    //{
    //    T_poslednie[i] = T[u] - SUM_T + t; // ������ ���������� ���������
    //    u++;
    //}
    //return T_poslednie;
    return;
}

int main()
{
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    std::mt19937 gen(time(0));
    std::uniform_real_distribution<> urd(0, 1);
    //std::uniform_int_distribution <int> urd(0, 1000);
    std::vector<int> vremia (5, 0);
    setlocale(LC_ALL, "Russian");
    //Get_Puasson(0.2, 50, gen, urd);
    //Get_Bartlet(0.7, 0.8, gen, urd);
    //Puas(0.5, 50, 0.7, 0.8, gen, urd);
    double rand_t = urd(gen) * 50;
    rezhim potok_1(0.5, 0.7, 0.8, rand_t, gen, urd, 0.5);
    rezhim potok_2(0.5, 0.7, 0.8, rand_t, gen, urd, 0.5);
    rezhim potok_3(0.5, 0.7, 0.8, rand_t, gen, urd, 0.5);

    int i = 0;
    double p;
    int kolvo = 0;
    while (i < 3) {
        i++;
        p = urd(gen) * 10;
        potok_1.set_rand_tact(p);
        potok_2.set_rand_tact(p);
        potok_3.set_rand_tact(p);
        std::cout << "������ ����� = " << p << "\n";
        potok_1.potok_in_work();
        potok_1.potok_nasish();
        potok_2.potok_in_waiting();
        potok_3.potok_in_waiting();
        potok_1.print();

        std::cout << "\n\n\n\n\n";
        std::cout << potok_1.get_num_nas() << "\n";
    }

    std::cout << potok_2.get_bunker_nak() << "\n";

    _getch();
    return 0;
}