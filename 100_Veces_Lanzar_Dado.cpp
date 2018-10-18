#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void histograma(int n);
int dado();
int main ()
{
    int suma;
    int vec[11] = {0};
    srand(time(NULL));
    for (int i=0; i<100; i++)  //Llenado del vector
    {
        suma = dado() + dado();
        if (suma==2)
            vec[0]++;
        if (suma==3)
            vec[1]++;
        if (suma==4)
            vec[2]++;
        if (suma==5)
            vec[3]++;
        if (suma==6)
            vec[4]++;
        if (suma==7)
            vec[5]++;
        if (suma==8)
            vec[6]++;
        if (suma==9)
            vec[7]++;
        if (suma==10)
            vec[8]++;
        if (suma==11)
            vec[9]++;
        if (suma==12)
            vec[10]++;
    }
    for (int i=0; i<11; i++)
    {
        cout << "Posicion [" << i << "]: " ;
        histograma(vec[i]);
    }

    return 0;
}
void histograma(int n)
{
    for (int i = 0; i<n; i++)
        cout << "*";
    cout << endl;
}
int dado()
{
    return (rand() % 6 ) + 1;
}
