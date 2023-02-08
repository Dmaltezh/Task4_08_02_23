#include <iostream> 
#include <iomanip> 
using namespace std;
double** func_Creat(double **A, int size1, int size2)
{
        for (int y = 0; y < size1; y++)
        for (int x = 0; x < size2; x++)
            A[y][x] = rand() % 10;

    return A;
}

void display(double** A, int sizey, int sizex)
{
    cout << "Динамический двумерный массив:" << endl;
    for (int y = 0; y < sizey; y++)
    {
        for (int x = 0; x < sizex; x++)
            cout << A[y][x] << "\t" << " | ";
        cout << "\n";
    }
}
void screen_out2(int **C, int size1)
{
    cout << " Двумерный массив из индексов нулевых элементов :" << endl;
    cout << "строка: " << "столбец:" << endl;
        for (int i = 0; i < size1; i++)
    {
        cout << C[i][0] << "\t" << " | ";
        cout << C[i][1] << "\t" << " | ";
        cout << "\n";
    }
    cout << "\n";
}
/*int* function(int** el, int** A, int sizem)
{
    for (int i = 0; i < sizem; i++)
        for (int k = 0; k < 2; k++)
        el[i] = A[i];
    return el;
}*/

int main()
{
    setlocale(LC_ALL, "Russian");
    int yindex; // число строк 
    int xindex; // число столбцов 
    cout << "число строк: ";
    cin >> yindex; // получение от пользователя числа строк 
    cout << "число столбцов: ";
    cin >> xindex; // получение от пользователя числа столбцов 

    double** arr = new double* [yindex];
    for (int j = 0; j < yindex; j++)
        arr[j] = new double[xindex];
    arr = func_Creat((double**)arr, yindex, xindex);
    display((double**)arr, yindex, xindex);
    //Task
    int counter = 0;
    const int a = yindex;
    int** Index_null = new int* [yindex];
    for (int j = 0; j < yindex; j++)
        Index_null[j] = new int[2];
    for (int y = 0; y < yindex; y++)
        for (int x = 0; x < xindex; x++)
            if (arr[y][x] == 0)
            {
                Index_null[counter][0] = y; //cout << y << endl;
                Index_null[counter][1] = x; //cout << x << endl;
                counter++;
            }
    cout << "Количество нулевых элементов= " << counter << endl;
    screen_out2((int**)Index_null, counter);

    cout << "Динамический двумерный массив в обратном порядке:" << endl;
    for (int y = yindex - 1; y >= 0; y--)
    {
        for (int x = xindex - 1; x >= 0; x--)
            cout << arr[y][x] << "\t" << " | ";
        cout << "\n";
    }
}

   /* 
   #include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
    {
        int n, m, temp;
        int mass[6][9];
      //  std::cout << "vvedite mass[" << n << "][" << m << "]:";
       // cin >> mass[n][m];
        for (n = 0; n < 6; n++)
            //vvod massiva
            for (m = 0; m < 9; m++)
            {
               
                mass[n][m]= rand() % 10;

            }
        //vbIvod isxodnogo massiva
        for (n = 0; n < 6; n++) {
            for (m = 0; m < 9; m++) {
                cout << mass[n][m] << " ";

            }
            cout << endl;
        }


   int 
    int a;
    for (int i = 0; i < xindex/ 2; i++)
    {
        a = mas[i];
        mas[i] = mas[xindex - i];
        mas[xindex - i] = a;
    }*/

