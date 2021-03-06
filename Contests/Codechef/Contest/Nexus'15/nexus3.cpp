#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef double db;

# define fs first 
# define se second
# define bg begin
# define rbg rbegin
# define en end
# define ren rend
# define mp make_pair
# define pub push_back
# define pob pop_back
# define cl clear
# define em empty
# define fe for_each
# define np next_permutation
# define pp prev_permutation

# define DEBUG(x) cout << '>' << #x << ':' << x << endl;
# define all(c) c.bg(), c.en()
# define rall(c) c.rbg(), c.ren()

# define pll pair < ll, ll >
# define pllit pair < ll, ll >::iterator
# define mll map < ll, ll >
# define mllit map < ll, ll >::iterator
# define msl map < string, ll >
# define mslit map < string, ll >::iterator
# define vll vector< ll >
# define vvll vector< vll >
# define vllit vector< ll >::iterator
# define vc vector<char>
# define vcit vector<char>::iterator
# define sll set< ll >
# define sllit set< ll >::iterator

# define srt(v) sort( v.bg(), v.en() )
# define srtr(v) sort( v.rbg(), v.ren())
# define srtc(v, x) sort( v.bg(), v.en(), x)
# define tr(container, it) for(typeof(container.bg()) it = container.bg(); it != container.en(); it++) 
# define present(container, element) (container.find(element) != container.en()) // O(logN) : use in case of Set and Maps
# define cpresent(container, element) (find(all(container),element) != container.en()) // global find(): for Vectors. O(N) 


# define rep(i, n) for( ll (i) = 0; (i) < (n); (i)++)
# define repk(i,k,n) for( ll (i) = k; (i) < (n); (i)++)
# define REP(i, n) for( ll (i) = 1; (i) <= (n); (i)++)
# define wl(i) while((i)--)
# define sf(i) scanf("%lld",&(i))
# define pf(i) printf("%lld ",(i))
# define pfn(i) printf("%lld\n",(i))
# define csf(i) cin>>(i)
# define cpf(i) cout<<(i)<<" "
# define cpfn(i) cout<<(i)<<endl


# define MAX_PRIME 0
# define SEGMENT_MAX 100005
# define MOD 1000000007
# define sync_false std::ios_base::sync_with_stdio(false)

const unsigned char option1 = 0x01; // hex for 0000 0001
const unsigned char option2 = 0x02; // hex for 0000 0010
const unsigned char option3 = 0x04; // hex for 0000 0100
const unsigned char option4 = 0x08; // hex for 0000 1000
const unsigned char option5 = 0x10; // hex for 0001 0000
const unsigned char option6 = 0x20; // hex for 0010 0000
const unsigned char option7 = 0x40; // hex for 0100 0000
const unsigned char option8 = 0x80; // hex for 1000 0000

using namespace std;

int main()
{  
	sync_false;
	ll n,nc,k,temp,q,s,x;
	vll a, asum;
	csf(n);
	nc = n;
	csf(k);
	wl(nc){
		csf(temp);
		a.pub(temp);
	}
	ll temp_sum = 0;

	rep(i,k){
		temp_sum += a[i];	// first subarray sum
	}
	asum.pub(temp_sum);	// first push
	
	repk(i,1,n-k+1){
		temp_sum = temp_sum + a[k+i-1] - a[i-1];	// efficient sum
		asum.pub(temp_sum);
	}
	ll asum_size = n-k+1;
	csf(q);
	wl(q){
		temp_sum = 0;
		csf(s);
		csf(x);
		rep(i,s){
			temp_sum += asum[i];	// first subarray sum
		}
		if(temp_sum==x){
			cpfn("YES");
			continue;
		}
		else{
			bool flag = false;
			repk(i,1,asum_size-s+1){
				temp_sum = temp_sum + asum[s+i-1] - asum[i-1];	// efficient sum
				if(temp_sum==x){
					cpfn("YES");
					flag=true;
					break;
				}
			}
			if(!flag){
				cpfn("NO");
			}

		}

	}

	return 0;
}