#include <iostream>
#include <conio.h>
using namespace std;
struct per
{
    int number;
    char name[20];
};
void selection_sort(per a[], int n, int i, int index[]);
void clearing(char[], int);
main()
{
    int n;
    cin >> n;
    per person[n];
    char b[n][20];
    int index[n];

    for(int i = 0;i < n;i++)
    {
        cin >> person[i].name;
        cin >> person[i].number;
        index[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        clearing(person[i].name, sizeof(person[i].name));
    }

    selection_sort(person,n,0,index);

    for(int i = 0;i < n;i++)
    {
        cout<<i+1<<"))" << person[index[i]].name << endl;
        cout << person[index[i]].number << endl;
    }


	getch();
}

void selection_sort(per a[], int n, int i, int index[])
{

    for(int o = 0;o < n;o++)
    {
        for(int u = o;u < n;u++)
        {
            if (a[index[u]].name[i] < a[index[o]].name[i])
            {
                swap(index[u],index[o]);
            }
        }
    }

}
void clearing(char a[], int n)
{
    for (int i = 0;i < n; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    }
}
