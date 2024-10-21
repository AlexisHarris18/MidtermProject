#include <iostream>
#include <string>

using namespace std;


class Randomizer {
private:
	string trait;
	string aspiration;
	string career;
	string age;
	string challenge;
	string activity;

public:
	Randomizer() {
		this->challenge = challenge;
		this->trait = trait;
		this->career = career;
		this->aspiration = aspiration;
		this->age = age;
		this->activity = activity;
	}

	void generateRandomChallenge() {
		const string challengeList[] = {
			"Legacy Challenge" , "Decades Challenge", "Disney Princess Challenge", "Not so Berry Challenge", "Rags to Riches Challenge", "Black Widow Challenge", "Runaway Teen Challenge"
		};
		int randomChallengeIndex = rand() % 7 + 1;
		challenge = challengeList[randomChallengeIndex];

	}
	string getRandomChallenge() const {
		return challenge;
	}

	void generateRandomAspiration() {
		const string aspirationList[] = {
			"Painter Extraordinaire", "Bestselling Author", "Musical Genius", "Public Enemy", "Chief of Mischief", "Successful Lineage", "Big Happy Family", "Super Parent", "Master Chef", "Master Mixologist", "Fabulously Wealthy", "Mansion Baron", "Renaissance Sim", "Nerd Brain", "Computer Whiz", "City Native", "Serial Romantic", "Soulmate", "The Curator", "Freelance Botanist", "Angling Ace", "Friend of the World",
			"Party Animal", "Joke Star", "World-Famous Celebrity", "BodyBuilder", "Master Actor/Actress", "Academic", "Country Caretaker", "Outdoor Enthusiast", "Vampire Family", "Good Vampire", "Master Vampire", "Super Parent", "Archaeology Scholar", "Purveyor of Potions", "Spellcraft and Sorcery"
		};
		int randomAspirationIndex = rand() % 37 + 1;
		aspiration = aspirationList[randomAspirationIndex];
	}
	string getRandomAspiration() const {
		return aspiration;
	}

	void generateRandomCareer() {
		const string careerList[] = {
			"Professional Athlete", "Bodybuilder", "Artist", "Astronaut", "Business", "Criminal", "Critic", "Culinary", "Education", "Engineer", "Entertainer", "Fashion", "Gardner", "Law", "Law Enforcement", "Politics", "Detective", "Secret Agent", "Writer", "Social Media", "Painter", "Style Influencer", "Tech Guru", "Doctor", "Scientist", "Actor"
		};
		int randomCareerIndex = rand() % 26 + 1;
		career = careerList[randomCareerIndex];
	}
	string getRandomCareer() const {
		return career;
	}

	void generateRandomAge() {
		const string ageList[] = {
			"Infant", "Toddler", "Child" ,"Teen", "Young Adult", "Adult", "Elder"
		};
		int randomAgeIndex = rand() % 4 + 1;
		age = ageList[randomAgeIndex];
	}
	string getRandomAge() const {
		return age;
	}

	void generateRandomTraitInfant() {
		const string infantTraitList[] = {
			"Calm", "Cautious", "Intense", "Sensitive", "Sunny", "Wiggly"
		};
		int randomTraitInfantIndex = rand() % 6 + 1;
		trait = infantTraitList[randomTraitInfantIndex];
	}
	string getRandomTraitInfant() {
		return trait;
	}

	void generateRandomTraitToddler() {
		const string toddlerTraitList[] = {
			"Angelic", "Charmer" , "Clingy", "Fussy", "Independent", "Inquisitive", "Silly", "Wild"
		};
		int randomTraitToddlerIndex = rand() % 8 + 1;
		trait = toddlerTraitList[randomTraitToddlerIndex];
	}
	string getRandomTraitToddler() {
		return trait;
	}

	void generateRandomChildActivity() {
		const string childActivityList[] = {
			"Scout", "Drama Club"
		};
		int randomChildActivityIndex = rand() % 2 + 1;
		activity = childActivityList[randomChildActivityIndex];
	}
	string getRandomChildActivity() {
		return activity;
	}

	void generateRandomTeenActivity() {
		const string teenActivityList[] = {
			"Drama Club", "Scout" , "Cheer Team", "Chess Team", "Computer Team", "Football Team"
		};
		int randomTeenActivityIndex = rand() % 6 + 1;
		activity = teenActivityList[randomTeenActivityIndex];
	}
	string getRandomTeenActivity() {
		return activity;
	}
	
	void generateRandomTrait() {
		const string traitList[] = {
			"Active", "Ambitious", "Art Lover", "Bookworm","Childish", "Clumsy", "Non-Commital", "Cheerful", "Child of the Ocean", "Creative", "Genius", "Geek", "Goofball", "Green Fiend", "Gloomy", "Glutton" ,"Good", "Hates Children", "Hot-Headed", "Insane", "Insider", "Jealous", "Kleptomaniac", "Lazy", "Loner", "Loyal", "Outgoing","Materialistic", "Mean", "Music Lover", "Perfectionist", "Romantic", "Self-Assured", "Squeamish", "Snob", "Evil", "Bro", "Dance Machine", "Leader of the Pack", "Foodie", "Muser", "Dog Lover", "Cat Lover", "Family-Oriented", "Academic", "High Maintenance", "Spellcaster", "Animal Enthusiast", "Loves Outdoors", "Neat", "Slob", "Unflirty", "Art Lover", "Lactose Intolerant", "Neat", "Overachiever", "Vegetarian","Party Animal", "Self-Absorbed", "Socially Awkward" 
		};
		int randomTraitIndex = rand() % 50 + 1;
		trait = traitList[randomTraitIndex];
	}
	string getRandomTrait() {
		return trait;
	}
};
int main(){
	srand(static_cast<unsigned>(time(0)));
	string firstName;
	string lastName;
	cout << "Hello and Welcome to the Random Sims 4 Generator! Please enter the first name of your sim!\n";
	cin >> firstName;
	cout << "And now enter in the last name of your sim!\n";
	cin >> lastName;

	Randomizer random;
	random.generateRandomAge();
	string selectedAge = random.getRandomAge();
	if (selectedAge == "Infant") {
		random.generateRandomTraitInfant();
		string selectedTrait = random.getRandomTraitInfant();
		cout << "Sims Name: " << firstName << " " << lastName << "\n";
		cout << "Random Age: " << selectedAge << "\n";
		cout << "Random Trait: " << selectedTrait << "\n";
	}
	else if (selectedAge == "Toddler") {
		random.generateRandomTraitToddler();
		string selectedTrait = random.getRandomTraitToddler();
		cout << "Sims Name: " << firstName << " " << lastName << "\n";
		cout << "Random Age: " << selectedAge << "\n";
		cout << "Random Trait: " << selectedTrait << "\n";
	}
	else if (selectedAge == "Child") {
		random.generateRandomTrait();
		string selectedTrait = random.getRandomTrait();
		random.generateRandomChildActivity();
		string selectedActivity = random.getRandomChildActivity();
		cout << "Sims Name: " << firstName << " " << lastName << "\n";
		cout << "Random Age: " << selectedAge << "\n";
		cout << "Random Trait: " << selectedTrait << "\n";
		cout << "Random Activity: " << selectedActivity << "\n";
	}
	else if (selectedAge == "Teen") {
		random.generateRandomTrait();
		string selectedTrait1 = random.getRandomTrait();
		random.generateRandomTrait();
		string selectedTrait2 = random.getRandomTrait();
		random.generateRandomTeenActivity();
		string selectedActivity = random.getRandomTeenActivity();
		random.generateRandomAspiration();
		string selectedAspiration = random.getRandomAspiration();
		cout << "Sims Name: " << firstName << " " << lastName << "\n";
		cout << "Random Age: " << selectedAge << "\n";
		cout << "Random Trait: " << selectedTrait1 << ", " << selectedTrait2 << "\n";
		cout << "Random Activity: " << selectedActivity << "\n";
		cout << "Random Aspiration: " << selectedAspiration << "\n";
	}

	else if (selectedAge == "Young Adult" || "Adult" || "Elder") {
		random.generateRandomTrait();
		string selectedTrait1 = random.getRandomTrait();
		random.generateRandomTrait();
		string selectedTrait2 = random.getRandomTrait();
		random.generateRandomTrait();
		string selectedTrait3 = random.getRandomTrait();
		random.generateRandomAspiration();
		string selectedAspiration = random.getRandomAspiration();
		random.generateRandomCareer();
		string selectedCareer = random.getRandomCareer();
		cout << "Sims Name: " << firstName << " " << lastName << "\n";
		cout << "Random Age: " << selectedAge << "\n";
		cout << "Random Aspiration: " << selectedAspiration << "\n";
		cout << "Random Career: " << selectedCareer << "\n";
		cout << "Random Traits: " << selectedTrait1 << ", " << selectedTrait2 << ", " << selectedTrait3 << "\n";
	}

	
}