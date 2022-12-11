#include "functions.h"


int ingangTill(int startVarde, int maxNum=0){
    while (startVarde != 1){
        cout << startVarde << " ";
        vector<int> vec1{};
        vec1.push_back(startVarde);
        int maxNum=0;
        for (int i=0; i<vec1.size(); i++){
            if (vec1[i] > maxNum){
                maxNum=vec1[i];
            }
        }
        if (startVarde % 2 == 1) {
            startVarde=(startVarde*3)+1;
        }
        else
            startVarde = startVarde/2;
    }
    return startVarde;
    return maxNum;
    
}

int main()
{
	ingangTill(6);
	return 0;
}
