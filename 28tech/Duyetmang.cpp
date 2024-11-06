
Cho mảng A[] gồm N phần tử, bạn hãy dùng kỹ năng duyệt mảng để thực hiện những yêu cầu sau

Duyệt mảng từ trái qua phải

Duyệt mảng từ phải qua trái

In ra những phần tử ở chỉ số chẵn

In ra những phần tử ở chỉ số lẻ

Tính tổng của N - 1 cặp phần tử đứng cạnh nhau và in ra kết quả (Vòng for này bạn sẽ tính tổng của A[i] và A[i + 1] thì sẽ duyệt i từ 0 tới N - 2, còn nếu tính tổng A[i] và A[i - 1] thì duyệt i từ 1 tới N - 1). Một lưu ý khi duyệt các cặp phần tử đứng cạnh nhau trong mảng là phần tử ở chỉ số i = 0 nếu bạn cố truy cập vào A[i - 1] sẽ truy cập vào chỉ số -1 ko hợp lệ trong mảng có rủi ro về giá trị rác cũng như lỗi runtime. Tương tự khi duyệt i = N - 1 nếu cố truy cập vào A[i + 1] sẽ truy cập vào A[N] là chỉ số ko hợp lệ trong mảng. Đối với C++ thì bạn có thể truy cập vào chỉ số không hợp lệ trong mảng nhưng đây là một lỗi mà bạn cần tự kiểm soát

Đầu vào
Dòng 1 là N : số phần tử trong mảng

Dòng 2 là N số viết cách nhau 1 dấu cách

Giới hạn
1<=N<=100

0<=A[i]<=1000

Đầu ra
In ra 5 dòng theo yêu cầu của đề bài

Ví dụ :
Input 01
Copy
10
3 3 3 9 9 9 8 5 4 7
Output 01
Copy
3 3 3 9 9 9 8 5 4 7 
7 4 5 8 9 9 9 3 3 3 
3 3 9 8 4 
3 9 9 5 7 
6 6 12 18 18 17 13 9 11
