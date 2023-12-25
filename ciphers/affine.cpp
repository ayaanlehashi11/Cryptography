
    #include<iostream>

    #include<string.h>

    #include<stdlib.h>

    using namespace std;

    string encryptionMessage(string msg)

    {

        string cipher_text = "";

        int a = 3;

        int b = 6;

        for (int i = 0; i < msg.length(); i++)

        {

            cipher_text = cipher_text + (char) ((((a * msg[i]) + b) % 26) + 65);

        }

        return cipher_text;

    }

     

    string decryptionMessage(string cipher_text)

    {

        string msg = "";

        int a = 3;

        int b = 6;

        int a_inv = 0;

        int flag = 0;

        for (int i = 0; i < 26; i++)

        {

            flag = (a * i) % 26;

            if (flag == 1)

            {

                a_inv = i;

            }

        }

        for (int i = 0; i < cipher_text.length(); i++)

        {

            msg = msg + (char) (((a_inv * ((cipher_text[i] - b)) % 26)) + 65);

        }

        return msg;

    }

    int main(int argc, char **argv)

    {

        cout << "Enter the message: ";

        string message;

        cin >> message;

        cout << "Message is :" << message << endl;

        cout << "Encrypted Message is : " << encryptionMessage(message) << endl;

     

        cout << "Decrypted Message is: " << decryptionMessage(

                encryptionMessage(message)) << endl;

    }
