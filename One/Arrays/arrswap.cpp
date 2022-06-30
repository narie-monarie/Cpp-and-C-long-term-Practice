#include <iostream>
using namespace std;

void chefMake(){
    int n, count, a, b;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a>>b;
        if (a > 1 || b > 1){
            count++;
        }
        
        if (count > count2)
			cout<<count<<endl;
		else
			cout<<count2<<endl;
    }
    
    //int max_count = count + count++;
    //return max_count;
}

int main() {
    chefMake();
}


