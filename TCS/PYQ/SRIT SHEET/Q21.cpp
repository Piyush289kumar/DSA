/* TCS NQT Coding Question – 21
Problem Statement – The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext
or messages is shifted by a few places down the alphabet. For example, with a shift of 1, P would be replaced
by Q, Q would become R, and so on. To pass an encrypted message from one person to another, it is first
necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt, and the receiver
may decrypt it. Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to
25 positions as there are 26 total alphabets. As we are designing custom Caesar Cipher, in addition to
alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places. For Example,
if a given plain text contains any digit with values 5 and key =2, then 5 will be replaced by 7, “-”(minus sign)
will remain as it is. Key value less than 0 should result into “INVALID INPUT”. Write a function
CustomCaesarCipher(int key, String message) which will accept plaintext and key as input parameters and
returns its cipher text as output.
Example 1: Enter your PlainText: All the best
Enter the Key: 1
Output - The encrypted Text is: Bmm uif Cftu
*/

#include <bits/stdc++.h>
using namespace std;

string cipher(string &str, int shift)
{
    if (shift < 0)
        return "INVALID INPUT";

    string cipherText = "";

    for (auto ch : str)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            cipherText += (char)((((ch - base) + shift) % 26) + base);
        }
        else if (isdigit(ch))
        {
            cipherText += (char)((((ch - '0') + shift) % 10) + '0');
        }
        else
        {
            cipherText += ch;
        }
    }

    return cipherText;
}

int main()
{
    string str;
    int shift;
    cin >> str >> shift;
    cout << cipher(str, shift) << endl;
    return 0;
}