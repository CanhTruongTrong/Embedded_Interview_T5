#include <iostream>
#include <string>

using namespace std;

class DoiTuong{
    public: // phạm vi truy cập
        void setThongTin(string ten, int tuoi); // method
        void hienThi();
    private:
        string TEN; // property
        int TUOI;
};

void DoiTuong::setThongTin(string ten, int tuoi){
    TEN = ten;
    TUOI = tuoi;
}

void DoiTuong::hienThi(){
    cout<<"Day la class DoiTuong\n";
    cout<<"Ten: "<<TEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
}

class SinhVien: public DoiTuong{        // SinhVien kế thừa public của DoiTuong

};

int main(){
    DoiTuong dt; // object
    dt.setThongTin("Canh", 23);
    dt.hienThi();

    SinhVien sv;
    sv.setThongTin("Hieu", 15);
    sv.hienThi();
}