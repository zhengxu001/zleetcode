class Solution {
public:
    string intToRoman(int num) {
        string s;
        char *huns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
        //  Add 'M' until we drop below 1000.
        
        while (num >= 1000) {
            s += "M";
            num -= 1000;
        }
        
        // Add each of the correct elements, adjusting as we go.
        
        s += huns[num/100];
        num = num % 100;
        s += tens[num/10];
        num = num % 10;
        s += ones[num];
        return s;
    }
};