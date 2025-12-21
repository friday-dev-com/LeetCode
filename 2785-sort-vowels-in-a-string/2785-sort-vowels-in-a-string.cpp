class Solution {
public:
    string sortVowels(string s) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);

        for( int i = 0; i < s.size(); i++ ){
            char ch = s[i];

            if ( ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O' || ch == 'U' ){
                upper[ch - 'A']++;
                s[i] = '#';
            }
            else if( ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o' || ch == 'u' ){
                lower[ch - 'a']++;
                s[i] = '#';
            }

        }

        string uvs="";
        string lvs="";
        for( int i = 0; i < 26; i++){
            if(upper[i] != 0){
                while(upper[i]){
                    uvs.push_back( i + 'A');
                    upper[i]--;
                }
            }
            if(lower[i] != 0){
                while(lower[i]){
                    lvs.push_back( i + 'a');
                    lower[i]--;
                }
            }
        }

        int low = 0;
        int upp = 0;

        for( int i = 0; i < s.length(); i++){
            if(s[i] == '#'){
                if(upp < uvs.length()){
                    s[i] = uvs[upp];
                    upp++;
                }
                else if(low < lvs.length()){
                    s[i] = lvs[low];
                    low++;
                }
            }
        }
        return s;
    }
};