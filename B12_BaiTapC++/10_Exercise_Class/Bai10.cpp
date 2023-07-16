/*
    Tạo một lớp sách với các thuộc tính tên sách, tác giả, năm xuất bản và số lượng, và các phương thức để in thông tin sách, mượn sách và trả sách
*/
#include <iostream>

using namespace std;

class Sach{
    private:
        string ten;
        string tacGia;
        int namXuatBan;
        int soLuong;
    public:
        Sach(string t, string tg, int n, int sl);
        void inThongTin();
        void muonSach();
        void traSach();
};

Sach::Sach(string t, string tg, int n, int sl){
    ten = t;
    tacGia = tg;
    namXuatBan = n;
    soLuong = sl;
}

void Sach::inThongTin(){
    cout<<"Thong tin sach"<<endl;
    cout<<"Ten sach: "<<ten<<endl;
    cout<<"Tac gia: "<<tacGia<<endl;
    cout<<"Nam xuat ban: "<<namXuatBan<<endl;
    cout<<"So luong: "<<soLuong<<endl;
}

void Sach::muonSach(){
    if(soLuong > 0){
        soLuong--;
        cout<<"Ban da muon sach "<<ten<<endl;
    }else{
        cout<<"Sach da het, ko muon dc";
    }
}

void Sach::traSach(){
    soLuong++;
    cout<<"Ban da tra sach thanh cong";
}

int main(){
    Sach s("Tieng Viet 3", "Kim Dong", 2010, 5);
    s.inThongTin();
    s.muonSach();
    s.traSach();
    return 0;
}