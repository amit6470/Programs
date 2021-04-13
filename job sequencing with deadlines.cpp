#include<iostream>
#include<algorithm>
using namespace std;

struct Job {
   char id;
   int deadLine;
   int profit;
};

bool comp(Job j1, Job j2) {
   return (j1.profit > j2.profit);
}

int min(int a, int b) {
   return (a<b)?a:b;
}

void jobSequence(Job jobList[], int n) {
   sort(jobList, jobList+n, comp);

   int jobSeq[n];
   bool slot[n];

   for (int i=0; i<n; i++)
      slot[i] = false;
   for (int i=0; i<n; i++) {
      for (int j=min(n, jobList[i].deadLine)-1; j>=0; j--) {
         if (slot[j]==false) {
            jobSeq[j] = i;
            slot[j] = true;
            break;
         }
      }
   }

   for (int i=0; i<n; i++)
      if (slot[i])
         cout << jobList[jobSeq[i]].id << " ";
}

int main() {
   Job jobList[] = {{'a',2,100}, {'b',1,19}, {'c',2,27},{'d',1,25},{'e',3,15}};
   int n = 5;
   cout << "Following is maximum profit sequence of job sequence: ";
   jobSequence(jobList, n);
}
