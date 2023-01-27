#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
struct Human {
    char* name;
    int old;
    int height;
    int weight;
};
void Fill(int& size, Human*& h) {//додавання екземплярів структури у дінамічний масив
size += 1;
char nam[255];
h = new Human[size];
cout << "Enter name: \n";
cin.getline(nam, 255);
nam[0] = toupper(nam[0]);
cout << strlen(nam) + 1;
h[size - 1].name = new char[strlen(nam) + 1];
strcpy(h[size - 1].name, strlen(nam) + nam);
cout << "Enter old: \n";
cin >> h[size - 1].old;
cout << "Enter height: \n";
cin >> h[size - 1].height;
cout << "Enter weight: \n";
cin >> h[size - 1].weight;
    
}
void Show(Human* human, int size) {//вивод масива на екран
    for (int j = 0; j < size;j++) {
        cout << "height:\n"<<human[j].height << "weight: \n" <<human[j].weight << "Old: \n"  <<human[j].old << "Name: \n" << human[j].name <<endl;
    }
}
void sort(Human*& human, int size) { //сортування масива по імені
    for (int i = 0; i < size; i++) {
        if (i + 1 != size) {
            for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                    if ((int)human[i].name[0] > (int)human[j].name[0]) {
                        swap(human[i], human[j]);
                    }
                
                }
            }
        }
    }

}
int main()
{
    int size = 0;
    Human* human;
}


