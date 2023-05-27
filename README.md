# Embedded Interview T5

<details>
  <summary> B1: COMPILER </summary>

# B1: COMPILER
  - Quy trình dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java, C#…) sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi. Ngôn ngữ lập trình C là một ngôn ngữ dạng biên dịch. Chương trình được viết bằng C muốn chạy được trên máy tính phải trải qua một quá trình biên dịch để chuyển đổi từ dạng mã nguồn sang chương trình dạng mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:

  ![image](https://github.com/CanhTruongTrong/Embedded_Interview_T5/assets/133849062/fdb50608-eb8b-47ca-a98b-48d05bdaa69a)


### 1. Giai đoạn tiền xử lý (Preprocessor):
- Nhận mã nguồn
- Xóa bỏ tất cả chú thích, comments của chương trình
- Chỉ thị tiền xử lý (bắt đầu bằng #) cũng được xử lý
Ví dụ: chỉ thị #include cho phép ghép thêm mã chương trình của một tệp tiêu để vào mã nguồn cần dịch. Các hằng số được định nghĩa bằng #define sẽ được thay thế bằng giá trị cụ thể tại mỗi nơi sử dụng trong chương trình.
### 2. Cộng đoạn dịch Ngôn Ngữ Bậc Cao sang Assembly (Compiler):
- Phân tích cú pháp (syntax) của mã nguồn NNBC
- Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp (hợp ngữ) gần với tập lệnh của bộ vi xử lý.
### 3. Công đoạn dịch Assembly (Assembler):
- Dich chương trình => Sang mã máy 0 và 1
- Một tệp mã máy (.obj) sinh ra trong hệ thống sau đó.
### 4. Giai đoạn liên kết (Linker):
- Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file .c hoặc file thư viện .lib) được liên kết lại với nhau để tạo thành chương trình đích duy nhất
- Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này.
- Kết thúc quá trình tất cả các đối tượng được liên kết lại với nhau thành một chương trình có thể thực thi được (executable hay .exe) thống nhất.
</details>

<details>
  <summary> B2: PHÂN VÙNG NHỚ </summary>

# B2: PHÂN VÙNG NHỚ

![image](https://github.com/CanhTruongTrong/Embedded_Interview_T5/assets/133849062/314d30ca-3d7a-487d-bd05-8d7ded7b29fc)

### 1. Text :
- Quyền truy cập chỉ Read.
- Chứa khai báo hằng số trong chương trình (.rodata).
### 2. Data:
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
- Được giải phóng khi kết thúc chương trình.
### 3. Bss:
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo bằng không or không khởi tạo.
- Được giải phóng khi kết thúc chương trình.
### 4. Stack:
- Quyền truy cập là read-write.
- Được sử dụng cấp phát cho biến local, input parameter của hàm,…
- Sẽ được giải phóng khi ra khỏi block code/hàm.
### 5. Heap:
- Quyền truy cập là read-write.
- Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc, …
- Sẽ được giải phóng khi gọi hàm free,….

### So sánh Stack và Heap:
- Giống nhau: Bộ nhớ Heap và bộ nhớ Stack bản chất đều cùng là vùng nhớ được tạo ra và lưu trữ trong RAM khi chương trình được thực thi.
- Khác nhau:

|STACK|HEAP|
|-----|----|
|Bộ nhớ Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào...|Bộ nhớ Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ được cấp phát động bởi các hàm malloc - calloc - realloc|
|Truy cập vào bộ nhớ này rất nhanh|Chậm hơn so với Stack|
|Kích thước của bộ nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành|Kích thước của bộ nhớ Heap là không cố định, có thể tăng giảm do đó đáp ứng được nhu cầu lưu trữ dữ liệu của chương trình|
|Vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự động hủy khi hàm thực hiện xong|Vùng nhớ Heap được quản lý bởi lập trình viên, dữ liệu trong Heap sẽ không bị hủy khi hàm thực hiện xong, phải tự tay hủy vùng nhớ bằng câu lệnh free, nếu không sẽ xảy ra hiện tượng rò rỉ bộ nhớ|
  </details>
  
<details>
  <summary> B3: MACRO - FUNCTION </summary>
    
  # B3: MACRO - FUNCTION

### Macro:
- Được xử lý bởi preprocessor.
- Thay thế đoạn code được khai báo macro vào bất cứ chỗ nào xuất hiện macro đó.
- VD: #define SUM(a,b) (a+b).
- Sử dụng macro chú ý bị lỗi syntax vì macro chỉ được thay thế chứ ko kiểm tra.

### Function:
- Được xử lý bởi compiler.
- Khi thấy hàm được gọi, compiler sẽ phải lưu con trỏ chương trình PC hiện tại vào stack; chuyển PC tới hàm được gọi, thực hiện hàm đó xong và lấy kết quả trả về; sau đó quay lại vị trí ban đầu trong stack trước khi gọi hàm và tiếp tục thực hiện chương trình.

### So sánh:

|Macro|Function|
|-----|-----|
|Được xử lý bởi preprocessor|Được xử lý bởi compiler|
|Macro thường được dùng để thay thế các đoạn code nhỏ hay sử dụng trong chương trình|Function thường được dùng cho các đoạn code lớn|
|Size của file chương trình chứa macro sẽ lớn hơn function|Nhỏ hơn|
|Tốc độ chương trình nhanh hơn|Chậm hơn|
  </details>
  
<details>
  <summary> B4: THAO TÁC BIT </summary>
  
  # B4: THAO TÁC BIT

### Phép AND (&): giống phép nhân

|A|B|A&B|
|-|-|--|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

### Phép OR (|): giống phép cộng

|A|B|A OR B|
|-|-|--|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

### Phép NOT (~):

|A|~A|
|-|-|
|0|1|
|1|0|

### Phép XOR (^): a, b giống nhau => 0, khác nhau => 1

|A|B|A^B|
|-|-|--|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

### Dịch trái (<<): 
Vd: 0b10010001 << 3 => 0b10001000
- Dịch trái 3 bit = Xóa 3 bit bên trái + Thêm 3 bit 0 bên phải

### Dịch phải (>>): ngược lại với dịch trái
  </details>
  
<details>
  <summary> B5: STRUCT - UNION </summary>
  
  # B5: STRUCT - UNION
  
  ### Struct:
  - Dữ liệu của các thành viên của struct được lưu trữ ở những vùng nhớ khác nhau. Do đó kích thước của 1 struct tối thiểu bằng kích thước các thành viên cộng lại tại vì còn phụ thuộc vào bộ nhớ đệm (struct padding).
  ### Union:
  - Dữ liệu các thành viên sẽ dùng chung 1 vùng nhớ. Kích thước của union được tính là kích thước lớn nhất của kiểu dữ liệu trong union. Việc thay đổi nội dung của 1 thành viên sẽ dẫn đến thay đổi nội dung của các thành viên khác.
  </details>
  
 <details>
  <summary> B6: STATIC - EXTERN </summary>
  
  #   B6: STATIC - EXTERN
  
  ### Staic cục bộ:
  - Khi 1 biến cục bộ được khai báo với từ khóa static. Biến sẽ chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy chương trình. Giá trị của nó không bị mất đi ngay cả khi kết thúc hàm. Tuy nhiên khác với biến toàn cục có thể gọi trong tất cả mọi nơi trong chương trình, thì biến cục bộ static chỉ có thể được gọi trong nội bộ hàm khởi tạo ra nó. Mỗi lần hàm được gọi, giá trị của biến chính bằng giá trị tại lần gần nhất hàm được gọi.
  ### Staic toàn cục:
  - Biến toàn cục static sẽ chỉ có thể được truy cập và sử dụng trong File khai báo nó, các File khác không có cách nào truy cập được kể cả có sử dụng extern.
  ### Extern:
  - Extern dùng để gọi 1 biến từ file này sang file khác để sử dụng.
  </details>

<details>
  <summary> B7: POINTER </summary>
  
  #  B7: POINTER
   
  - Trong ngôn ngữ C/C++, con trỏ (pointer) là những biến lưu trữ địa chỉ bộ nhớ của những biến khác.
  - Con trỏ chỉ lưu địa chỉ nên kích thước của mọi con trỏ là như nhau. Kích thước này phụ thuộc vào bộ vi xử lý.
  
  ### Con trỏ NULL:
  - Con trỏ NULL là con trỏ lưu địa chỉ 0x00000000. Tức địa chỉ bộ nhớ 0, có ý nghĩa đặc biệt, cho biết con trỏ không trỏ vào đâu cả. Khi khai báo con trỏ mà chưa sử dụng nên gán con trỏ NULL nếu không con trỏ sẽ mang giá trị rác gây ảnh hưởng đến chương trình.
  
  ### Con trỏ hàm:
  - Con trỏ hàm lưu địa chỉ của hàm.
  - Khai báo:  (kiểu dữ liệu trả về của hàm) (*ptr) (kiểu dữ liệu input parameter của hàm). VD: void (*ptr)(int, int)
  
  ### Con trỏ void:
  - Con trỏ void có thể trỏ đến mọi địa chỉ trong chương trình. Tuy nhiên muốn printf giá trị ta phải ép về kiểu dữ liệu mà con trỏ void đang trỏ tới.
  
  ### Pointer to pointer:
  - Pointer to pointer nghĩa là một con trỏ mà giá trị của nó là địa chỉ của một con trỏ khác.
  </details>



