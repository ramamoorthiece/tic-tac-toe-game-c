#include <stdio.h>
#include <stdbool.h>
char arr[3][3];
char temp='x';
int count=10;
void insiate_space() {
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			arr[i][j]=' ';
		}
	}
}
void X_player(int c, int r) {
	if(((c>0&&c<4) && (r>0&&r<4))&&(arr[c-1][r-1]!='x'&&arr[c-1][r-1]!='o')) {
		arr[c-1][r-1]=temp;
		temp='o';
	} else {
		printf("Wrong Position Try Again\n");
		count++;
	}
}
void O_player(int c, int r) {
	if(((c>0&&c<4) && (r>0&&r<4))&&(arr[c-1][r-1]!='x'&&arr[c-1][r-1]!='o')) {
		arr[c-1][r-1]=temp;
		temp='x';
	} else {
		printf("Wrong Position Try Again\n");
		count++;
	}
}

void disp() {
    printf("---|---|---|\n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf(" %c |",arr[i][j]);
		}
		printf("\n---|---|---|\n");
	}
}
bool  Win_cheak() {
	for(int i=0; i<3; i++) {
		for(int j=0; j<1; j++) {
			if((arr[i][j]==arr[i][j+1])&&(arr[i][j]==arr[i][j+2])&& arr[i][j]!=' ') {
				return true;
			}
			if(arr[j][i]==arr[j+1][i] &&arr[j][i]==arr[j+2][i] && arr[j][i]!=' ') {
				return true;
			}
		}
	}
	if(arr[0][0]==arr[1][1] && arr[0][0] ==arr[2][2] && arr[0][0]!=' ') {
		return true;
	}
	if(arr[0][2]==arr[1][1] && arr[0][2] ==arr[2][0] && arr[0][2]!=' ') {
		return true;
	}
	return false;
}
int main()
{
	insiate_space();
	while(count-->0) {
		if(temp=='x') {
			printf("Enter X positions(c,r): ");
			int C,R;
			scanf("%d %d",&C,&R);
			X_player(C,R);
			disp();
			if(Win_cheak()) {
				printf("X_player is a winner");
				break;
			}
			else if(count==1) {
				printf("Match tied! Restarting\n");
				insiate_space();
				count=10;
			}
		} else {
			printf("Enter O positions c and R: ");
			int C,R;
			scanf("%d %d",&C,&R);
			O_player(C,R);
			disp();
			if(Win_cheak()) {
				printf("O_player is a winner");
				break;
			} else if(count==1) {
				printf("Match tied! Restarting\n");
				insiate_space();
				count=10;
			}
		}
	}
	printf("\n");
	disp();
}