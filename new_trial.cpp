int solution(string &S) {
    int n = S.length(); 
    vector<int> alpha(26, 0);

    for(int k=0 ; k<n; ++k){

        alpha[S[k] - 'a']++;
    }

    int m = 1; //declaring and initialising.
    for(int j =0; j< 26; ++j){

        m = max(alpha[i], m); 
    }

    return m;
}