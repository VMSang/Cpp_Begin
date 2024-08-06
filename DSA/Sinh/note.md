xâu nhị phân thực chất là tập con
- duyệt tất cả cập của tập con của một tập n phần tử chính là sinh xâu nhị phân
- cho n phần tử, chia n đó thành hai nửa sao cho độ chênh lệch theo quy tắt nào đó (có thể là nhỏ nhất)


Bài toán 2: sinh tổ hợp chập k của n (sinh tập con có k phần tử từ n phần tử) không xét thứ tự, thường lưu theo thứ tự tăng dần 
- đi tìm bit đầu tiên chưa đạt max (n-k+i), sau đó tăng các bit vừa đi qua lên 1 đơn vị, để đảm bảo lớn hơn mà nhỏ nhất (vd: 13789 -> 14567)
```C++

```

Các bài toán:
1. Sinh xâu nhị phân có độ dài n (thì có 2^n xâu, tương đương số từ 0 đến (2^n) - 1, O(2^n)



- sinh tổ hợp chập k của n
- sinh hoán vị
- sinh phân hoạch
- sinh tập con bằng toán tử bit (cũng là sinh xâu nhị phần nhưng bằng toán tử bit)

khái niệm: là pp vét cạn, dùng liệt kê, đếm cấu hình
điều kiện dùng Sinh:
+ xác định cấu hình đầu tiên và cuối cùng
+ có phương pháp sinh ra cấu hình kế tiếp

