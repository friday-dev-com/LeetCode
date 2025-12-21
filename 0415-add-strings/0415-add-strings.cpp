class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.length()-1;
        int n2 = num2.length()-1;

        int carry = 0;
        string result = "";

        while(n1 >= 0 || n2 >= 0 ){
            int ans = 0;
            int a = 0 ;
            int b = 0;
            if( n1 >= 0 ){
                a = num1[n1] - '0';
                n1--;
            }

            if( n2 >= 0 ){
                b = num2[n2] - '0';
                n2--;
            }

            ans = carry + a + b;
            carry = ans / 10;

            result = to_string(ans % 10) + result;

        }
        if(carry != 0){
            result = to_string(carry) + result;
        }
        return result;
    }
};