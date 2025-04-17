#include <iostream> 
using namespace std;

int arr[20], [20]; // Array utama dan array bantu
int n; 

void input()
 {
    
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array (maks 20): ";
        cin >> n;

        if (n <= 20) // Memastikan jumlah elemen tidak lebih dari 20
            break;
        else
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "====================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i]; // Menyimpan nilai ke dalam array
    }

   

     void mergeSort(int low,int high)
{
     if (low >= high)
     { //step 1
     return; // step 1a
     }
     int mid =(low + high) / 2; // step 2
     mergergeSort(low, mid); // step 3a
     mergergeSort(mid + 1, high);// step 3b
     int i = low; // step 4a
     int j, k; 
     j = mid + 1; // step 4b
     k = low; // step 4c

     while (i <= mid && j <= high) // step 4d
     {
         if (arr[i] < arr[j]) // step 4.d.i
         {
               B[k] = arr[i]; // step 4.d..i.1
             i++; // step 4.d..i.2
         }
         else 
         {
             B[k] = arr[j]; // step 4.d.3
             j++; // step 4.d.i.4
         }
         k++; // step 4.d.ii
     }
while (j <= high) // step 4.e
     {
         B[k] = arr[j]; // step 4.e.i
         j++; // step 4.e.ii
         k++; // step 4.e.iii
     }
     while (i <= mid) // step 4.f
     {
         B[k] = arr[i]; // step 4.f.i
         i++; // step 4.f.ii
         k++; // step 4.f.iii
     }
     for (int x = low; i <= high; x++) // step 5
     {
         arr[x] = B[x]; // step 5a
     }
}
     

 cout << 
 "\n-------------------"
 "<< endl;
 cout <<" Inputkan Isi elemen array : " << endl;
 cout << "-------------------" << endl;

void output()
{
    cout << "Hasil Pengurutan Menggunakan Merge Sort" << endl;
    cout << "====================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Menampilkan hasil pengurutan

int main()
{
    input(); 
    mergeSort(0, n - 1); 
    output(); 
    return 0; 
}   
