   #include <iostream>
   #include <bits/stdc++.h>
   #include <vector>
  using namespace std;

  int coin (vector<vector<int> & c,int i,int j) {

    if(i==0 &&j==0){
		return c[i][j]; 
	}
	if (i==0){// na primeira linha 
		return  coin(c,i,j-1)+c[i][j];
	}
	if(j==0){
		return coin(c,i-1,j)+c[i][j];
	}
	return max(coin(c,i,j-1),coin(c,i-1,j))+c[i][j];
}
// c(n) = 2c(n-1)+1. complexidade exponencial
  int main(){
	// grafo com as moedas em cada posicao
	vector<vector<int>> C({{0, 0, 0, 0, 1,0},
                           {0, 1, 0, 1, 0,0},
                           {0, 0, 0, 1, 0,1},
                           {0, 0, 1, 0, 0,1},
                           {1, 0, 0, 0, 1,0}});
	int m =C.size()-1;
	int n=C[0].size()-1;
    cout<<coin(C,m,n);
    
    
	return 0;
}
