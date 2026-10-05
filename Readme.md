TEMPLATE C++17 THI ĐẤU - VS CODE TRÊN WINDOWS

1. ĐIỀU KIỆN
Cài VS Code, tiện ích C/C++ của Microsoft và MSYS2 UCRT64 như hướng dẫn trước.
Trình biên dịch dự kiến: C:\msys64\ucrt64\bin\g++.exe
Thêm C:\msys64\ucrt64\bin vào PATH, đóng hoàn toàn rồi mở lại VS Code.
Nếu cài MSYS2 ở nơi khác, sửa đường dẫn trong .vscode/tasks.json và settings.json.

2. SỬ DỤNG
- Giải nén toàn bộ ZIP.
- Trong VS Code: File > Open Folder > chọn CPP_ThiDau (chứa main.cpp và .vscode).
- Mở main.cpp, viết mã, nhấn Ctrl + Shift + B.
- VS Code lưu mã trước khi chạy tác vụ. Tác vụ biên dịch tệp đang mở.
- Thành công sẽ tạo main.exe cạnh main.cpp. Tệp A.cpp sẽ tạo A.exe.
- Phím tắt này chỉ biên dịch. Để chạy main.exe, mở Terminal > New Terminal,
  tại thư mục CPP_ThiDau gõ: .\main.exe
- Nhập 10 20 và Enter: bài mẫu in 30.
- Khi biên dịch phải chọn tab .cpp, không chọn tab JSON hay tài liệu này.
- Mỗi bài mới có thể sao chép main.cpp thành A.cpp, B.cpp... trong thư mục.

3. MẪU MÃ
solve() chứa lời giải; main() bật nhập xuất nhanh và gọi solve().
Mặc định chỉ một bộ test. Chỉ bỏ dấu // ở dòng cin >> t nếu đề có số test đầu vào.
bits/stdc++.h là tiện ích của GCC; phù hợp bộ GCC này, không phải header ISO C++.
Khi nộp bài, nộp mã .cpp theo hướng dẫn hệ thống chấm; không nộp .exe hay .vscode.
Chọn chuẩn C++17 trên hệ thống chấm nếu có và đề thi cho phép.

4. NẾU GẶP LỖI
- Không tìm thấy g++.exe: kiểm tra vị trí cài MSYS2 và bộ công cụ UCRT64.
- Permission denied khi ghi .exe: dừng chương trình còn chạy bằng Ctrl + C
  trong terminal của chương trình đó rồi biên dịch lại.
- Chương trình đứng chờ: có thể đang đợi nhập dữ liệu theo cin.
- Biên dịch lỗi: xem Terminal hoặc Ctrl + Shift + M (Problems).
  Không chạy tệp .exe cũ nếu lần biên dịch mới thất bại.
- Thiếu DLL khi chạy: kiểm tra PATH chứa C:\msys64\ucrt64\bin và mở lại VS Code.

Tài liệu: https://code.visualstudio.com/docs/debugtest/tasks
Đã kiểm tra cấu trúc JSON và biên dịch/chạy mã mẫu bằng GCC trên Linux.
Chưa chạy trực tiếp cấu hình phím tắt trên Windows của bạn.
