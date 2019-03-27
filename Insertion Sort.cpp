#include <cstdlib>
#include <iostream>
 #include <conio.h>
using namespace std;
 
//member function
void insertion_sort(int arr[], int length);
void print_array(int array[],int size);
 
int main() {
 cout<<"\tINSERTION SORT\n\n";
int array[5]= {5,4,3,2,1};
insertion_sort(array,5);
 getch();
 return 0;
}//end of main
 
void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
 
 for (i = 1; i < length; i++) { //1. Pengecekan mulai dari data ke-1 sampai  data ke-n
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {  //2. Bandingkan data ke-I ( I = data ke-2 s/d data ke-n )
 tmp = arr[j];
 arr[j] = arr[j - 1]; //3. Bandingkan data ke-I tersebut dengan data sebelumnya (I-1), Jika lebih kecil maka data tersebut dapat disisipkan ke data awal sesuai dgn posisisi yg seharusnya
 
 arr[j - 1] = tmp;
 j--;
 //4. Lakukan langkah 2 dan 3 untuk bilangan berikutnya ( I= I+1 ) sampai didapatkan urutan yg optimal.
 }//end of while loop
 print_array(arr,5);
 }//end of for loop
 }//end of insertion_sort.
void print_array(int array[], int size){ 
 cout<< "Pengurutan : ";
 int j;
 for (j=0; j<size;j++)
 for (j=0; j<size;j++)
 cout <<" "<< array[j];
 cout << endl;
 }//end of print_array
