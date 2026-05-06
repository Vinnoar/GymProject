#include <iostream>
#include <string>

using namespace std;

class BodyMeasurements {
private:
double chest; // in cm
double waist; // in cm
double hips; // in cm
double biceps; // in cm
double thighs; // in cm
public:
// Constructors
// getter-setter
// Display
void displayMeasurements() const;
};
// Progress Tracking Class
class Progress {
private:
string progressId;
string userId;
string date;
double weight;
double dailyCalories;
BodyMeasurements measurements;
public:
// Constructors
// Getters-setter
// Progress Functions
void addProgressEntry();
void displayProgress() const;
// Analysis Functions
static void compareProgress(const Progress& p1, const Progress& p2);
static void generateProgressReport(string userId);
static double calculateWeightChange(const vector<Progress>& progressList);
static double calculateBodyFatChange(const vector<Progress>& progressList);
};