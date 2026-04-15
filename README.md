# 🔐 Encdecer (Encoder & Decoder)

Welcome to **Encdecer**, a lightweight terminal-based cryptography tool! This is my second programming project, built to explore the concepts of data encryption, decryption, and secure communication.

With this tool, you can easily scramble your plain text into a secret code, and decipher encrypted messages back into readable text using a custom logical cipher.

---

## 🚀 Features

* **Custom Cryptography Algorithm:** Uses a unique two-step encryption process combining string manipulation and a Caesar cipher.
* **Interactive CLI Menu:** Simple, user-friendly terminal interface for quick operations.
* **Input Buffer Handling:** Safely handles string inputs with spaces using `fgets` and `strcspn`, preventing common newline buffer issues in C.
* **Fast & Efficient:** Runs instantly in your terminal with minimal resource usage.

---

## 🧠 The Encryption Logic (How It Works)

Encdecer uses a custom two-step process to scramble and unscramble your text.

### 🔐 Encryption Process

1. **String Reversal:**
   The input string is reversed.
   Example:
   `abc → cba`

2. **Caesar Cipher (+4 Shift):**
   Each character in the reversed string is shifted **forward by 4** in the ASCII table.
   Example:
   `cba → gfe`

---

### 🔓 Decryption Process

To recover the original message, the process is reversed:

1. **String Reversal:**
   `gfe → efg`

2. **Reverse Caesar Cipher (-4 Shift):**
   `efg → abc`

---

> **🕵️ Example Workflow:**
>
> * User inputs: `"abc"`
> * After reversal: `"cba"`
> * After shift (+4): `"gfe"`
> * Decryption reverses the process to get back `"abc"`

---

## 🕹️ Usage Guide

When you launch the program, you will see an interactive menu:

### 🔐 Encrypt a Message

* Press **`1`** and hit `Enter`
* Enter your message (spaces supported)
* Get your encrypted output

### 🔓 Decrypt a Message

* Press **`2`** and hit `Enter`
* Paste the encrypted message
* Get the original text back

---

## 💻 How to Compile and Run

Make sure you have a C compiler (like **GCC**) installed.

### 1. Clone the Repository

```bash
git clone https://github.com/Starguyplayzz/Encdecer.git
cd Encdecer
```

### 2. Compile the Program

```bash
gcc Encrypter_Decrypter.c -o encdecer
```

### 3. Run the Program

```bash
./encdecer
```

---

## 🛠️ Tech Stack

* Language: **C**
* Concepts Used:

  * String Manipulation
  * ASCII Operations
  * Loops & Conditionals
  * Basic Cryptography (Caesar Cipher)

---

## 💡 Learning Outcome

Through this project, I learned:

* How encryption and decryption logic works internally
* String handling in C using `fgets` and `strcspn`
* Combining multiple transformations (reverse + shift)
* Building clean and interactive CLI tools

---


## 🙌 Feedback

This is my **second C project**, and I’m continuously improving.
Feedback, suggestions, and contributions are always welcome!

---

## ⭐ Support

If you found this project interesting or helpful, consider giving it a ⭐ on GitHub!
