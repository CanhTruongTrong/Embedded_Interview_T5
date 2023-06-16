#include <iostream>

using namespace std;

class SinhVien{
    public:
    void hienThi();
    void themThongTin(int tuoi, int lop); // method
    
    private:
    int tuoi; // property
    int lop;
};

void SinhVien::hienThi(){
    cout<<"Tuoi: "<<tuoi<<endl;
    cout<<"Lop: "<<lop<<endl;
}

void SinhVien::themThongTin(int tuoi, int lop){
    SinhVien::tuoi = tuoi;
    SinhVien::lop = lop;
}

int main(){
    SinhVien sv; // object sv thuộc class SinhVien

    sv.themThongTin(16,10);
    sv.hienThi();
}