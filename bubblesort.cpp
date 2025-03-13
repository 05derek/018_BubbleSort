
void display(){
    cout <<endl;
    cout << "=================" << endl;
    cout << "elemen Array yang telah tersusun" << endl;
    cout << "=================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++){
        cout << aee[j]; //menampilkan array
        cout << "-->";
    }

cout << endl;
cout << endl;

cout << "jumlah pass =" << n - 1 << endl; // menampilkan jumlah dari pass
cout << endl;
cout << endl;
}

int main (){
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}

            
    