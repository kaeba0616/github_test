//범위 내에서의 소수 판정법

vector<int> primelist(int n){
  vector<int> primes;
  for(int i=2; i<=n; i++){
    bool isprime =1;
    for(int j =2; j*j <= i;j++){
      if(i%j ==0){
        isprime = 0;
        break;
      }
    }
    if(isprime) primes.push_back(i);
  }
  return primes;
}

/*
vector<int> primelist(int n){
  vector<int> primes;
  for(int i=2; i<=n; i++){
    bool isprime =1;
    for(int p : primes){
      if(p*p >i) break;
      if(i% p ==0){
        isprime = 0;
        break;
      }
    }
    if(isprime) primes.push_back(i);
  }
  return primes;
}
*/

//에라토스테네스의 체
/*
vector<int> sieve(int n){
  vector<int> primes;
  vector<bool> state(n+1, true);
  state[1] =false;
  for(int i=2; i<=n; i++){
    if(!state[i]) continue;
    for(int j =2*i; j<=n; +=i)
      state[j] = false;
  }
  for(int i=2; i<=n; i++){
    if(state[i]) primes.push_back(i);
  }
  return primes;
}
*/

//O(NlglgN)
/*
vector<int> sieve(int n){
  vector<int> primes;
  vector<bool> state(n+1, true);
  state[1] =false;
  for(int i=2; i*i<=n; i++){
    if(!state[i]) continue;
    for(int j =i*i; j<=n; +=i)
      state[j] = false;
  }
  for(int i=2; i<=n; i++){
    if(state[i]) primes.push_back(i);
  }
  return primes;
}
*/