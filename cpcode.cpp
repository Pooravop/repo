// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int t,n;
//     cin>>t;

//     for(int i=0;i<t;i++){

//         cin>>n;

//         vector<int> a(n),b(n);

//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }

//         int sum1=0,sum2=0,s1=0,s2=0;

//         for(int i=0;i<n;i++){

//             if(a[i]<=0 && b[i]>=0){
//                 sum2+=b[i];
//             }
//             else if(a[i]>=0 && b[i]<=0){
//                 sum1+=a[i];
//             }
//             else if(a[i]==1 && b[i]==1){
//                 s2++;
//             }
//             else{
//                 s1++;
//             }

//         }
//         for(int i=0;i<s1;i++){
//                 if(sum1>sum2){
//                     sum1-=1;
//                 }
//                 else{
//                     sum2-=1;
//                 }
//         }

//         for(int i=0;i<s2;i++){
//                 if(sum1<sum2){
//                     sum1+=a[i];
//                 }
//                 else{
//                     sum2+=b[i];
//                 }
//         }

//         cout<<min(sum1,sum2)<<endl;
//     }
//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;

// //         vector<int> a(n), b(n);
// //         for (int i = 0; i < n; ++i) cin >> a[i];
// //         for (int i = 0; i < n; ++i) cin >> b[i];

// //         int like1 = 0, dislike1 = 0, neutral1 = 0;
// //         int like2 = 0, dislike2 = 0, neutral2 = 0;

// //         for (int i = 0; i < n; ++i) {
// //             if (a[i] == 1) like1++;
// //             else if (a[i] == -1) dislike1++;
// //             else neutral1++;

// //             if (b[i] == 1) like2++;
// //             else if (b[i] == -1) dislike2++;
// //             else neutral2++;
// //         }

// //         // We start by calculating the initial ratings
// //         int rating1 = like1 - dislike1;
// //         int rating2 = like2 - dislike2;

// //         // We use a greedy approach to assign reviews
// //         // We want to balance the two ratings as much as possible
// //         for (int i = 0; i < n; ++i) {
// //             if (a[i] == 1 && b[i] != 1) {
// //                 // Prefer giving positive reviews to the first movie if possible
// //                 rating1++;
// //             } else if (b[i] == 1 && a[i] != 1) {
// //                 // Prefer giving positive reviews to the second movie if possible
// //                 rating2++;
// //             } else if (a[i] == -1 && b[i] != -1) {
// //                 // Prefer avoiding negative reviews for the first movie
// //                 rating1--;
// //             } else if (b[i] == -1 && a[i] != -1) {
// //                 // Prefer avoiding negative reviews for the second movie
// //                 rating2--;
// //             } else {
// //                 // Neutral reviews can go either way, so we balance the ratings
// //                 if (rating1 < rating2) {
// //                     rating1 += a[i];
// //                 } else {
// //                     rating2 += b[i];
// //                 }
// //             }
// //         }

// //         // The company's rating is the minimum of the two ratings
// //         cout << min(rating1, rating2) << endl;
// //     }

// //     return 0;
// // }

// int main(){

//     int t,x,y,k;
//     while(t--){
//         cin>>x>>y>>k;

//         string s="";
//         vector<string> s2;
//         while(x--){
//             s+="H";
//         }
//         while(y--){
//             s+="V";
//         }

//         for(int i=0;i<;i++){
//         next_permutation(s.begin(), s.end());
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to generate all paths from (0,0) to (x,y)
void generatePaths(int x, int y, string path, vector<string>& paths) {
    if (x == 0 && y == 0) {
        paths.push_back(path);
        return;
    }

    if (x > 0) {
        generatePaths(x - 1, y, "H" + path, paths);
    }

    if (y > 0) {
        generatePaths(x, y - 1, "V" + path, paths);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        vector<string> paths;
        generatePaths(x, y, "", paths);

        sort(paths.begin(), paths.end());

        cout << paths[k] << endl;
    }

    return 0;
}
