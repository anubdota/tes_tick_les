#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestRectangle' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY h as parameter.
 */

// long largestRectangle(vector<int> h) {
//     vector<int> res;
//     for(int i=0;i<h.size();i++){
//         int val=res[i];
//         int a=1;
//         //right loop
//         for(int j=i+1;j<h.size();j++){
//             if(h[j]>=val){a++;}
//             else{break;}
//         }
//         //left loop
//         for (int j=i-1;j>=0;j--){
//             if(h[j]>=val){a++;}
//             else{break;}
//         }
//     res.push_back(a*val);
//     }
//     int max=0;
//     for(int a:res){
//         if (a>max){max=a;}
//     }

// return max;
// }

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim(h_temp_temp));

    vector<int> h(n),res;

    for (int i = 0; i < n; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    for(int i=0;i<h.size();i++){
        int val=res[i];
        int a=1;
        cout<<"here";
        //right loop
        for(int j=i+1;j<h.size();j++){
            if(h[j]>=val){a++;}
            else{break;}
        }
        //left loop
        for (int j=i-1;j>=0;j--){
            if(h[j]>=val){a++;}
            else{break;}
        }
    res.push_back(a*val);
    }
    int max=0;
    for(int a:res){
        if (a>max){max=a;}
    }

    //long result = largestRectangle(h);


    cout << max << "\n";

    //fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
