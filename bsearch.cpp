#include <iostream>

using namespace std;

void buble_sort(int* array_sort, int array_lenght);

int bsearch (int* array_search, int array_lenght, int znachenie);

int main()
{

     int size_array = 0;
     cout << "Vvedite kolichestvo elementov massiva n, no ne menhe 2"<< endl;
     cin >> size_array;

     if (size_array < 2) 
     {
     	cout << " Massiv ne mozhet sostoyat menhe chem iz 2 elementov.";
     	return 0;
     };
     
     cout << "v massive " << size_array << " elementov."<< endl;
     cout << "Teper neobhodimo vvesti vse elementy." << endl;
     int *new_array = new int [size_array];

     for (int i = 0; i<size_array; i++)
     {
     	cout << "Vvedite " << i+1 << " element massiva."<< endl;
     	cin >> new_array[i];
     }

     cout << "Vvedide chislo x dlya sravneniya." << endl;
     int x = 0;
     cin >> x;
     cout << "chislo dlya sravneniya x = " << x << endl;

     buble_sort(new_array, size_array);

     for (int i = 0; i<size_array; i++)
     {
          cout << " " << new_array[i] << " ";
     }

     cout << endl;

     int index_el = bsearch(new_array, size_array, x);

     cout << "Index elementa strogo menhe " << x << " = " << (index_el + 1)<< " Nachalo otsheta elementov s 1!!!";

    return 0;
}


void buble_sort(int* array_sort , int array_lenght)
{
	for(int i = 1; i < array_lenght; ++i)
     {
          for(int r = 0; r < array_lenght-i; r++)
          {
               if(array_sort[r] < array_sort[r+1])
               {
                    int temp = array_sort[r];
                    array_sort[r] = array_sort[r+1];
                    array_sort[r+1] = temp;
               }
          }
     }
}


int bsearch (int* array_search, int array_lenght, int znachenie)
{
 int temp = 0;

    for (int i = 0; i < array_lenght; i++)
    {
     temp = i;
     if (array_search[i] < znachenie)
          break;
    }
    
 return temp;
}
