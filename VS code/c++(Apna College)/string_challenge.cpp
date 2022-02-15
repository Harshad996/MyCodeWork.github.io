#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // string str="adjshfkjhfdf";

    // for(int i=0; i<str.length();i++){
    //     while(str[i] >= 'a' && str[i] <= 'z'){
    //     str[i] -= 32;
    //     }
    // }

    // cout<< str<<endl;

    // for(int i=0;i<str.length();i++){
    //     str[i] += 32;
    // }

    // cout<<str;

    // string s = "hjdhqwehiowci";

    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    // cout<< s<<endl;

    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout<< s <<endl;    
    //  return 0;

    // string s = "398240929902";

    // sort(s.begin(), s.end(), greater<int>());
    // cout<< s <<endl;

    string s = "dkjhfhwhkfhjnre";

    int freq[26] = {0};
    // for(int i=0; i<26; i++){
    //     freq[i] = 0;
    // }

    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }

    char ans='a';
    int maxf = 0;

    for(int i=0;i<26;i++){
        if(freq[i] > maxf){
            maxf = freq[i];
            ans = i+'a';
        }
    }

    cout<<maxf<<" "<<ans;

}