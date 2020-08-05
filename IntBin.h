#include<string.h>
#include<math.h>

//function to convert binary string to integer
int bin2int(string s) {
    int result = 0;
    int n = s.length()-1;
    for (int i = 0;i < s.length();i++) {
        if (s[i] == 49)  result+=pow(2, n);//49 -- 1
        n--;
    }
    return result;
}

//function to convert integer to binary string
string int2bin(int a) {
    string result = "";
    int temp = a;
    while (temp) {
        if (temp%2 == 0) result.insert(0, 1, '0');
        else if (temp%2 == 1) result.insert(0, 1, '1');
        temp /= 2;
    }
    return result;
}
