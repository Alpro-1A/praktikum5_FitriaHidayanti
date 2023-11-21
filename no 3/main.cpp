#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}

int main(){
    int jumlahAngka;

  cout << "Program Deret Fibonacci" << endl;

  int n, m, e= 0;

    cout << "Jumlah Deret Fibonacci yang dibutuhkan : "; cin >> n;
 	cout << "Hasil Bilangan Fibonacci : \n";
 		 for (m = 1; m <= n; m++){
    		cout << "Fibonacci ke - "<< m <<" : " << fibonacci(e) << endl;
   		 e++;
 		 }

  cout << endl;
    return 0;
}
