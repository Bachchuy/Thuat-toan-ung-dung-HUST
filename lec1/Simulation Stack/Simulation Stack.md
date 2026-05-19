# Mô phỏng Ngăn xếp (Stack)

Thực hiện một chuỗi các **phép toán** trên **ngăn xếp** (stack), mỗi phần tử là một số nguyên.

## 📥 Dữ liệu vào

Mỗi dòng chứa một **lệnh** (phép toán) thuộc một trong các loại:
- **PUSH x**: Đẩy giá trị **x** vào ngăn xếp
- **POP**: Lấy ra một phần tử từ ngăn xếp và in nó ra stdout (in **NULL** nếu ngăn xếp rỗng)

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
3
2
5
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