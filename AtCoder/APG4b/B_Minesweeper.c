#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int H, W;
    char S;
    string bom;

    cin >> H >> W;
    // 全体を'.'で囲って、後述の'#'の探索の際にatによるerrorを回避

    for(int i=0; i<H; i++){
        // 入力の最初に'.'のみの行がつくように修正
        if(i == 0){
            for(int j=0; j<W+2; j++){
                bom += '.';
            }
        }
        // 入力の前後に'.'のみの列がつくように修正
        for(int j=0; j<W; j++){
            if(j == 0){
                bom += '.';
            }   
            cin >> S;
            bom += S;
            if(j == W-1){
                bom += '.';
            }
        }
        // 入力の最後に'.'のみの行がつくように修正
        if(i == H-1){
            for(int j=0; j<W+2; j++){
                bom += '.';
            }
        }
    }

    /*
        Debug用で、入力の周囲に'.'が付いているか確認
        cout << bom << endl;
    */

    // '#'の検索する際に、周囲8マスの位置情報をvecotrとして格納。"-2"は行の前後に'.'をつけたのでその調整。
    int f0 = -W-1-2;
    int f1 = -W-2;
    int f2 = -W+1-2;
    int f3 = -1;
    int f4 = 1;
    int f5 = W-1+2;
    int f6 = W+2;
    int f7 = W+1+2;
    vector<int> vec = { f0, f1, f2, f3, f4, f5, f6, f7};

    int number = 0;
    // 0行目は'.'を追加したので、本来の入力はH(1)からスタート
    for(int i=1; i<=H; i++){
        // 0列目は'.'を追加したので、本来の入力はW(1)からスタート。終点はW列まで。
        for(int j=1+(2+W)*i; j<1+(2+W)*i+W; j++){
            // '#'にHITすれば数字は計算しないでいいので、次のループへ。
            if(bom.at(j) == '#'){
                cout << '#';
                continue;
            }
            // vectorを利用して'#'の有無を数字として格納し、最後に出力
            for(int k=0; k<vec.size(); k++){
                if(bom.at(j+vec.at(k)) == '#'){
                    number++;
                }
                if(k == vec.size()-1){
                    cout << number;
                    number = 0;
                }
            }
        }
        // i行目の出力終わりに改行
        cout << endl;
    }
}