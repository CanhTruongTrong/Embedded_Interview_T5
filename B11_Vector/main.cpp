#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string> 

using namespace std;

int main(){
    vector<int> array; // tao 1 mang kieu int
    array.push_back(4); // them phan tu
    array.push_back(7);
    array.push_back(13);
    array.push_back(20);

    array.erase(array.begin() + 2); // xoa theo vi tri

    // array.assign(5, 1); // tao ra 1 mang 5 phan tu co gia tri = 1

    // array.pop_back(); // xoa phan tu cuoi cung

    // array.insert(array.begin()+2, 33); // chen phan tu

    // array.clear(); // thu hoi vung nho

    // for(int i=0; i<array.size(); i++){
    //     printf("%d\n", array[i]);
    // }
    for(auto item : array){
        printf("i = %d\n", item);
    }
    
    map<string, int>SinhVien; // map<key, value> ten;
    SinhVien["MSSV"] = 18146083;
    SinhVien["Lop"] = 12;
    SinhVien["Tuoi"] = 20;

    for(auto item : SinhVien){
        printf("Key: %s and Value: %d\n", item.first.c_str(), item.second);
    } 

}