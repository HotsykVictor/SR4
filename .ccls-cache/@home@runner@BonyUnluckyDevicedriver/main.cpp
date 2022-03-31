#include <iostream>
using namespace std;
int main()
{
 double z, k = 0;
 int A[10], s=0;
 cout << "Введіть 10 чисел" << endl;
 for (int i=0; i<10; i++)
  { cin >> A[i];
   if(A[i]>0){
     k++;
    s+=A[i];
    }
  }
  z=s/k;
 cout << "Cереднє арифметичне додатних елементів "<< z << endl;

 return 0;
}