/* Q7: he Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or
messages is shifted by a number of places down the alphabet.
For example, with a shift of 1, P would be replaced by Q, Q would become R, and so on. To pass an
encrypted message from one person to another, it is first necessary that both parties have the ‘Key’
for the cipher, so that the sender may encrypt and the receiver may decrypt it. Key is the number of
OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26
total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric
digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and key =2, then 5 will be replaced
by 7, “- ”(minus sign) will remain as it is.
Key value less than 0 should result into “INVALID INPUT”
Example 1: Enter your Plaintext: All the best
Enter the Key: 1
The encrypted Text is: Bmm uif Cftu
*/

#include <iostream>
#include <string>

using namespace std;

string custom_caesar_cipher(string plaintext, int key)
{
    if (key <= 0)
        return "INVALID INPUT.";

    string caesar_cipher = "";

    for (char c : plaintext)
    {

        if ((c >= 'a') && (c <= 'z'))
        {
            caesar_cipher += char((c - 'a' + key) % 26 + 'a');
        }
        else if ((c >= 'A') && (c <= 'Z'))
        {
            caesar_cipher += char((c - 'A' + key) % 26 + 'A');
        }
        else if ((c >= 0) && (c <= 9))
        {
            caesar_cipher += char((c - '0' + key) % 10 + '0');
        }
        else
        {
            caesar_cipher += c;
        }
    }

    return caesar_cipher;
}

int main()
{
    string plaintext = "All the Besty";
    int key = 1;

    string res = custom_caesar_cipher(plaintext, key);

    cout << "RESPONSE ==> " << res << endl;

    return 1;
}
