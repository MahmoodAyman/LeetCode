class Solution {
public:
    bool isVowel (char c){
        return c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'|| c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U';
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        string a,b;
        for(int i = 0; i < n/2; i++){
            if(isVowel(s[i]))a+=s[i];   
        }
        for(int i = n/2; i < n; i++){
            if(isVowel(s[i]))b+=s[i];
        }
        
        return a.size() == b.size();
    }
};