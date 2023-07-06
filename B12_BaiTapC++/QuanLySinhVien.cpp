#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class SinhVien{
    private:
        int Id;
        string Ten;
        string gioiTinh;
        int Tuoi;
        float diemToan;
        float diemLy;
        float diemHoa;
    public:
        SinhVien(string ten, string gt, int tuoi, float dT, float dL, float dH);
        int getId();
        float getTB();
        void getHocLuc();
        void setTen(string ten);
        string getTen();
        void setGioiTinh(string gt);
        string getGioiTinh();
        void setTuoi(int tuoi);
        int getTuoi();
        void setDiemToan(float dT);
        float getDiemToan();
        void setDiemLy(float dL);
        float getDiemLy();
        void setDiemHoa(float dH);
        float getDiemHoa();
};

SinhVien::SinhVien(string ten, string gt, int tuoi, float dT, float dL, float dH){
    static int id = 100;
    Id = id;
    id++;
    Ten = ten;
    gioiTinh = gt;
    Tuoi = tuoi;
    diemToan = dT;
    diemLy = dL;
    diemHoa = dH;
}

int SinhVien::getId(){
    return Id;
}

float SinhVien::getTB(){
    return (diemToan + diemLy + diemHoa) / 3;
}

void SinhVien::getHocLuc(){
    float diemTB = getTB();
    if(diemTB < 5){
        cout << "Xep loai YEU" << endl;
    }else if(diemTB < 6.5){
        cout << "Xep loai TRUNG BINH" << endl;
    }else if(diemTB < 8){
        cout << "Xep loai KHA" << endl;
    }else{
        cout << "Xep loai GIOI" << endl;
    }
}
void SinhVien::setTen(string ten){
    Ten = ten;
}

string SinhVien::getTen(){
    return Ten;
}

void SinhVien::setGioiTinh(string gt){
    gioiTinh = gt;
}

string SinhVien::getGioiTinh(){
    return gioiTinh;
}

void SinhVien::setTuoi(int tuoi){
    Tuoi = tuoi;
}

int SinhVien::getTuoi(){
    return Tuoi;
}

void SinhVien::setDiemToan(float dT){
    diemToan = dT;
}

float SinhVien::getDiemToan(){
    return diemToan;
}

void SinhVien::setDiemLy(float dL){
    diemLy = dL;
}

float SinhVien::getDiemLy(){
    return diemLy;
}

void SinhVien::setDiemHoa(float dH){
    diemHoa = dH;
}

float SinhVien::getDiemHoa(){
    return diemHoa;
}

class Menu{
    private:
        list <SinhVien> database;
    public:
        void themSinhVien();
        void capNhatSinhVien();
        void xoaSinhVien();
        void timKiemTheoTen();
        void sapXepSVTheoGPA();
        void sapXepSVTheoTen();
        void danhSachSV();
};

void Menu::themSinhVien(){
    string Ten;
    string gioiTinh;
    int Tuoi;
    float diemToan;
    float diemLy;
    float diemHoa;

    cout << "Nhap ten: " << endl;
    cin >> Ten;

    cout << "Nhap gioi tinh: " << endl;
    cin >> gioiTinh;

    do
    {
        cout << "Nhap tuoi: " << endl;
        cin >> Tuoi;
    } while (Tuoi < 0 || Tuoi > 100);

    do
    {
        cout << "Nhap diem Toan: " << endl;
        cin >> diemToan;
    } while (diemToan < 0 || diemToan > 10);
    
    do
    {
        cout << "Nhap diem Ly: " << endl;
        cin >> diemLy;
    } while (diemLy < 0 || diemLy > 10);

    do
    {
        cout << "Nhap diem Hoa: " << endl;
        cin >> diemHoa;
    } while (diemHoa < 0 || diemHoa > 10);

    cin.ignore();

    SinhVien sv(Ten, gioiTinh, Tuoi, diemToan, diemLy, diemHoa);
    database.push_back(sv);

    cout << "Them sinh vien thanh cong" << endl;
}

void Menu::capNhatSinhVien(){
    int Id;
    string Ten;
    string gioiTinh;
    int Tuoi;
    float diemToan;
    float diemLy;
    float diemHoa;

    cout << "Nhap Id can tim: ";
    cin >> Id;

    for(auto item : database){
        if(item.getId() == Id){
            cout << "Ten: " << item.getTen() << endl;
            cout << "Gioi tinh: " << item.getGioiTinh() << endl;
            cout << "Tuoi: " << item.getTuoi() << endl;
            cout << "Diem Toan: " << item.getDiemToan() << endl;
            cout << "Diem Ly: " << item.getDiemLy() << endl;
            cout << "Diem Hoa: " << item.getDiemHoa() << endl;

            cout << "Nhap ten moi: " << endl;
            cin >> Ten;

            cout << "Nhap gioi tinh moi: " << endl;
            cin >> gioiTinh;

            do
            {
                cout << "Nhap tuoi moi: " << endl;
                cin >> Tuoi;
            } while (Tuoi < 0 || Tuoi > 100);

            do
            {
                cout << "Nhap diem Toan moi: " << endl;
                cin >> diemToan;
            } while (diemToan < 0 || diemToan > 10);
    
            do
            {
                cout << "Nhap diem Ly moi: " << endl;
                cin >> diemLy;
            } while (diemLy < 0 || diemLy > 10);

            do
            {
                cout << "Nhap diem Hoa moi: " << endl;
                cin >> diemHoa;
            } while (diemHoa < 0 || diemHoa > 10);

            cin.ignore();

            item.setTen(Ten);
            item.setGioiTinh(gioiTinh);
            item.setTuoi(Tuoi);
            item.setDiemToan(diemToan);
            item.setDiemLy(diemLy);
            item.setDiemHoa(diemHoa);

            cout << "Cap nhat sinh vien thanh cong" << endl;
            break;
        }else{
            cout << "Khong tim thay sinh vien" << endl;
        }
    }
}

void Menu::xoaSinhVien(){
    int Id;
    cout << "Nhap id can xoa: " << endl;
    cin >> Id;

    auto position = database.begin();
    for(auto item : database){
        if(item.getId() == Id){
            database.erase(position);
            cout << "Xoa sinh vien thanh cong" << endl;
            break;
            position++;
        }else{
            cout << "Khong tim thay sinh vien" << endl;
        }
    }
}

void Menu::timKiemTheoTen(){
    string Ten;
    cout << "Nhap ten can tim: " << endl;
    cin >> Ten;

    for(auto item : database){
        if(item.getTen() == Ten){
            cout << "Tim thay sinh vien" << endl;
            cout << "Ten: " << item.getTen() << endl;
            cout << "Gioi tinh: " << item.getGioiTinh() << endl;
            cout << "Tuoi: " << item.getTuoi() << endl;
            cout << "Diem Toan: " << item.getDiemToan() << endl;
            cout << "Diem Ly: " << item.getDiemLy() << endl;
            cout << "Diem Hoa: " << item.getDiemHoa() << endl;
            break;
        }else{
            cout << "Khong tim thay sinh vien" << endl;
        }
    }
}

bool sxTheoGPA(SinhVien sv1, SinhVien sv2) {
    return sv1.getTB() > sv2.getTB();
}

void Menu::sapXepSVTheoGPA(){
    database.sort(sxTheoGPA);

    cout << "Danh sach sau khi sap xep: " << endl;
    for (auto item : database) {
        cout << "ID: " << item.getId() << endl;
        cout << "Ten: " << item.getTen() << endl;
        // cout << "Gioi tinh: " << item.getGioiTinh() << endl;
        // cout << "Tuoi: " << item.getTuoi() << endl;
        // cout << "Diem Toan: " << item.getDiemToan() << endl;
        // cout << "Diem Ly: " << item.getDiemLy() << endl;
        // cout << "Diem Hoa: " << item.getDiemHoa() << endl;
        cout << "Diem TB: " << item.getTB() << endl;
    }
}

bool sxTheoTen(SinhVien sv1, SinhVien sv2) {
    return sv1.getTen() < sv2.getTen();
}

void Menu::sapXepSVTheoTen(){
    database.sort(sxTheoTen);

    cout << "Danh sach sau khi sap xep" << endl;
    for(auto item : database){
        cout << "ID: " << item.getId() << endl;
        cout << "Ten: " << item.getTen() << endl;
        // cout << "Gioi tinh: " << item.getGioiTinh() << endl;
        // cout << "Tuoi: " << item.getTuoi() << endl;
        // cout << "Diem Toan: " << item.getDiemToan() << endl;
        // cout << "Diem Ly: " << item.getDiemLy() << endl;
        // cout << "Diem Hoa: " << item.getDiemHoa() << endl;
        // cout << "Diem TB: " << item.getTB() << endl;
    }
}

void Menu::danhSachSV(){
    for(auto item : database){
        cout << "ID: " << item.getId() << endl;
        cout << "Ten: " << item.getTen() << endl;
        cout << "Gioi tinh: " << item.getGioiTinh() << endl;
        cout << "Tuoi: " << item.getTuoi() << endl;
        cout << "Diem Toan: " << item.getDiemToan() << endl;
        cout << "Diem Ly: " << item.getDiemLy() << endl;
        cout << "Diem Hoa: " << item.getDiemHoa() << endl;
        cout << "Diem TB: " << item.getTB() << endl;
    }
}

int main(){
    Menu menu;
    int input;
    
    do
    {
        cout << "|----Chuong trinh quan ly sinh vien----|" << endl;
        cout << "1. Them sinh vien" << endl;
        cout << "2. Cap nhat thong tin sinh vien boi Id" << endl;
        cout << "3. Xoa sinh vien boi Id" << endl;
        cout << "4. Tim kiem sinh vien theo ten" << endl;
        cout << "5. Sap xep sinh vien theo diem trung binh" << endl;
        cout << "6. Sap xep sinh vien theo ten" << endl;
        cout << "7. Hien thi danh sach sinh vien" << endl;
        cout << "0. Thoat" << endl;
        cout << "Lua chon cua ban: " << endl;
        cin >> input;

        switch (input)
        {
        case 1:
            menu.themSinhVien();
            break;
        case 2:
            menu.capNhatSinhVien();
            break;
        case 3:
            menu.xoaSinhVien();
            break;
        case 4:
            menu.timKiemTheoTen();
            break;
        case 5:
            menu.sapXepSVTheoGPA();
            break;
        case 6:
            menu.sapXepSVTheoTen();
            break;
        case 7:
            menu.danhSachSV();
            break;
        case 0:
            return 0;
        default:
            cout << "Lua chon khong hop le" << endl;
            break;
        }
    } while (input != 0);
    
    return 0;
}