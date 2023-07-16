/*
    Tạo một lớp tài khoản ngân hàng với các thuộc tính số tài khoản, tên tài khoản và số dư, và các phương thức để rút, nộp tiền và kiểm tra số dư trong tài khoản.
*/

#include <iostream>

using namespace std;

class BankAccount{
    private:
        string soTaiKhoan;
        string tenTaiKhoan;
        float soDu;
    public:
        BankAccount(string stk, string ttk, float sd);
        void rutTien(float soTien);
        void napTien(float soTien);
        void kiemTraSoDu();
};

BankAccount::BankAccount(string stk, string ttk, float sd){
    soTaiKhoan = stk;
    tenTaiKhoan = ttk;
    soDu = sd;
}

void BankAccount::rutTien(float soTien){
    if(soTien >= soDu){
        cout<<"Khong the rut tien"<<endl;;
    }else{
        soDu = soDu - soTien;
        cout<<"Rut thanh cong. So du hien tai: "<<soDu<<endl;
    }
}

void BankAccount::napTien(float soTien){
    soDu += soTien;
    cout<<"Nap tien thanh cong. So du hien tai: "<<soDu<<endl;
}

void BankAccount::kiemTraSoDu(){
    cout<<"So du hien tai: "<<soDu<<endl;
}

int main(){
    BankAccount NguyenVanA("0123", "Van A", 500);

    NguyenVanA.rutTien(200);
    NguyenVanA.napTien(200);
    NguyenVanA.kiemTraSoDu();
    return 0;
}