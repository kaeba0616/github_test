

int a[3] = {1,2,3};
do{
  for(int i=0; i<3; i++)
    cout<< a[i];
  cout<<'\n';

}while(next_permutation(a,a+3));

/*
123

*/

/*
123
132
213
231
312
321
*/

int b[4] = {0,0,1,1}; //4개에서 2개
do{
  for(int i=0; i<4; i++){
    if(a[i] == 0)
      cout<<i+1;
  }
  cout<<'\n';
}while(next_permutation(a,a+4));
/*
12
13
14
23
24
34
*/
int c[5] ={0,0,0,1,1} //5개에서 2개