/*
    Tạo một lớp xe hơi với các thuộc tính màu sắc, kiểu động cơ và số km đã đi, và các phương thức để tính toán chi phí bảo trì, kiểm tra số km đã đi và in thông tin về xe
*/
#include <iostream>

using namespace std;

class XeHoi{
    private:
        string mauSac;
        string kieuDongCo;
        int soKm;
    public:
        XeHoi(string m, string k, int km);
        int chiPhiBaoTri();
        void kiemTraSoKm();
        void thongTinXe();
};

XeHoi::XeHoi(string m, string k, int km){
    mauSac = m;
    kieuDongCo = k;
    soKm = km;
}

int XeHoi::chiPhiBaoTri(){
    // 1km => 1000
    return soKm * 1000;
}

void XeHoi::kiemTraSoKm(){
    cout <<"So km di duoc: "<<soKm<<"km"<<endl;
}

void XeHoi::thongTinXe(){
    cout<<"Thong tin xe:"<<endl;
    cout<<"Mau sac: "<<mauSac<<endl;
    cout<<"Kieu dong co: "<<kieuDongCo<<endl;
    cout<<"So km da di "<<soKm<<"km"<<endl;
    cout<<"Chi phi bao tri: "<<chiPhiBaoTri()<<"vnd"<<endl;
}

int main(){
    XeHoi xe("xanh", "500 cc", 20);
    xe.thongTinXe();
    return 0;
}