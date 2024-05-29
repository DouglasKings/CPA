#include <stdio.h>

 // Function declaration
 double calculateCPA(double totalAdvertisingCost, double numberOfConversations);

 int main(){

    double totalAdvertisingCost, numberOfConversations, CPA;

    printf("Enter the total AdvertisingCost: ");
    scanf("%lf", &totalAdvertisingCost);
    printf("Enter the number of conversations: ");
    scanf("%lf", &numberOfConversations);

    CPA = calculateCPA(totalAdvertisingCost, numberOfConversations);

    printf("The total advertising cost is: $%.2lf \n", totalAdvertisingCost);
    printf("Enter the number of conversations is: %.2lf \n", numberOfConversations);
    printf("The cost per acquisition is: $%.2lf \n", CPA);

    return 0;
 }

 // Function definition
 double calculateCPA(double totalAdvertisingCost, double numberOfConversations){
    if(numberOfConversations == 0){
        printf("The number of conversations cannot be zero. \n");
        return 0;
    }else{
        return totalAdvertisingCost / numberOfConversations;
    }
 }

/*
int main() {
    //Define Variables
    double totalAdvertisingCost;
    int numberOfConversions;

    //Input Data
    printf("Enter the Total Advertising Cost: ");
    scanf("%lf", &totalAdvertisingCost);
    printf("Enter the Number of Conversions: ");
    scanf("%d", &numberOfConversions);

    //Calculate CPA
    double CPA = totalAdvertisingCost / numberOfConversions;

    // Step 4: Output Result
    printf("The Cost Per Acquisition (CPA) is: %.2f\n", CPA);

    return 0;
}*/