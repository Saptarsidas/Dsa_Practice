#include<stdio.h>
struct FCFS{
	int pid,bt,wt,tat,at;
}p[10];
int main(){
	int i,n;
	float ttat,twt=0;
	printf("enter the number of process :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		p[i].pid=i;
	printf("enter the arrivaal time %d:",i);
	scanf("%d",&p[i].at);
}
	for(i=0;i<n;i++){
		p[i].pid=i;
		printf("enter the burst time :%d",i);
		scanf("%d",&p[i].bt);
		}
			p[0].wt=0;
		p[0].tat=p[0].bt;
		twt=p[0].wt;
		ttat=p[0].tat;
		printf("the waiting time : ");
		for(i=1;i<n;i++){
			p[i].wt=p[i-1].wt+p[i-1].bt-(p[i].at-p[i-1].at);
			p[i].tat=p[i].wt+p[i].bt;
			twt+=p[i].wt;
			ttat+=p[i].tat;
		}
		printf("the result");
		printf("\nPID\tBT\tWT\tAT\tTAT\n");
		printf("%d\t%d\t%d\t%d\t%d\t\n",p[i].pid,p[i].bt,p[i].wt,p[i].at,p[i].tat);
		printf("TOTAL WT %f",twt);
		printf("TOTAL TAT : %f",ttat);
		printf("AVG WT : %f",(twt/n));
		printf("AVG TAT : %f",(ttat/n));
	}
	
		