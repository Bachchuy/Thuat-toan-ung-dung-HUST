# Mô phỏng Hàng đợi (Queue)

Thực hiện một chuỗi các **phép toán** trên **hàng đợi** (queue), mỗi phần tử là một số nguyên.

## 📥 Dữ liệu vào

Mỗi dòng chứa một **lệnh** (phép toán) thuộc một trong các loại:
- **PUSH x**: Đẩy giá trị **x** vào hàng đợi
- **POP**: Lấy ra một phần tử từ hàng đợi và in nó ra stdout (in **NULL** nếu hàng đợi rỗng)

## 📤 Dữ liệu ra

- In ra kết quả của các phép toán **POP** (mỗi kết quả được viết trên một dòng)

## 💡 Ví dụ

### Ví dụ 1

**Input:**
```
PUSH 1
PUSH 2
PUSH 3
POP
POP
PUSH 4
PUSH 5
POP
#
```

**Output:**
```
1
2
3
```

---

### Ví dụ 2

**Input:**
```
PUSH 1
POP
POP
PUSH 4
POP
#
```

**Output:**
```
1
NULL
4
```