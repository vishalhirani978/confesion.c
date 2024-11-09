#include<stdio.h>
#include<conio.h>
int main(){
	int time_spend_on_reading,time_spend_on_writting;
	float total_time;
	printf("time spend on reading post (in minutes):");
	scanf("%d",&time_spend_on_reading);
	printf("time spend on writting post (in minutes):");
	scanf("%d",&time_spend_on_writting);
	total_time = time_spend_on_reading + time_spend_on_writting;
	if (total_time >=120){
		printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur apne goals par focus karo!");
	}else if (total_time>=60){
		printf("o “Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!”");
	}else{
		printf("“Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. Parhai aur apne goals pe dhyan rakho, shabash!”");
	}
	return 0;
}
