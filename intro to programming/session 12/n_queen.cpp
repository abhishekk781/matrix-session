#include <bits/stdc++.h>
using namespace std;
int board[20][20] = {0};
int count1 = 0;

bool can_place(int currow,int curcol,int row){
	for (int i = 0; i < row; ++i)
	{
		if(board[i][curcol]==1 || board[currow][i] == 1){
			return false;
		}
	}
	for (int i = 0; i < row; ++i)
	{
		if(currow-i >= 0||curcol-i>=0){
			if(board[currow-i][curcol-i]==1)
				return false;
		}
		if(currow-i >=0 || curcol+i <row){
			if(board[currow-i][curcol+i]==1)
				return false;			
		}
	}
	return true;
}

bool kya_sahi_rakha_hai(int row,int currow){
	if(currow>=row)
	{
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<endl<<endl;
		count1++;
		return false;
	}
	for (int i = 0; i < row; ++i)
	{
		if(can_place(currow,i,row)){
			board[currow][i] = 1;
			if(kya_sahi_rakha_hai(row,currow+1)){
				return true;
			}
			else
				board[currow][i] = 0;
		}
	}
	return false;
}

int main(){

kya_sahi_rakha_hai(10,0);

cout<<count1<<endl;

}