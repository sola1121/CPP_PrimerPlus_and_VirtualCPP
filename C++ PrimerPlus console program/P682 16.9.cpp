#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review{
	std::string title;
	int rating;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool fillReview(Review & rr);
void showReview(const Review & rr);

int main(){
	using namespace std;
	
	vector<Review> books;
	Review temp;
	
	while (fillReview(temp))
		books.push_back(temp);
		
	if (books.size()>0){
		cout<<"Thank you. You entered the following \b"<<books.size()<<" ratings: "
			<<"Rating\tBook\n";
		for_each(books.begin(), books.end(), showReview);
		
		sort(books.begin(), books.end());    //sort() ������������ 
		cout<<"Sorted by title:\nRating\tBook\n";
		for_each(books.begin(), books.end(), showReview);
		
		sort(books.begin(), books.end(), worseThan);    //sort() ������������ 
		cout<<"Sorted by rating:\nRating\tBook\n";
		for_each(books.begin(), books.end(), showReview);
		
		random_shuffle(books.begin(), books.end(), showReview);    //random_shuffle() 
		cout<<"After shuffle:\nRating\tBook\n";
		for_each(books.begin(), books.end(), showReview);
	}
	else
		cout<<"No enteries. ";
	
	system("pause");
	return 0;
}

bool operator<(const Review & r1, const Review & r2){
	if (r1.title<r2.title)
		return true;
	else if (r1.title==r2.title && r1.rating<r2.rating)
		return true;
	else 
		return false;
}

bool worseThan(const Review & r1, const Review & r2){
	if (r1.rating<r2.rating)
		return true;
	else
		return false;
}

bool fillReview(Review & rr){
	std::cout<<"Enter book title (quit to quit): ";
	std::getline(std::cin, rr.title);
	
	if (rr.title=="quit")
		return false;
		
	std::cout<<"Enter book rating: ";
	std::cin>>rr.rating;
	
	if (!std::cin)
		return false;
	//get rid of rest of input line
	while (std::cin.get()!='\n')
		continue;
	return true;
}

void showReview(const Review & rr){
	std::cout<<rr.rating<<"\t"<<rr.title<<std::endl;
}
