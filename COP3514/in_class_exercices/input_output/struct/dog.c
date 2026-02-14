#include <stdio.h>

//Dog's name, Owner's name, and # of nights the dog has stayed
struct dog{
    char dog_name[20];
    char owner_name[20];
    int num_nights;
};

struct dog create_dog(char * name, char *owner_name, int num_nights);

double calculate_cost(struct dog d);

int main(){
    struct dog dog1 = {"Rocky", "Joe", 3};
    printf("Dog name: %s\nOwner name: %s\nNumber of nights stayed: %d\n", dog1.dog_name, dog1.owner_name, dog1.num_nights);

    struct dog dog2;
    printf("Enter Dog Info:\n");
    scanf("%s %s %d", dog2.dog_name, dog2.owner_name, &dog2.num_nights);
    printf("%s %s %d\n", dog2.dog_name, dog2.owner_name, dog2.num_nights);

    struct dog dog3 = create_dog ("yoyo", "Julia", 5);
    double cost = calculate_cost (dog3);
    printf("Cost of stay: %.2f\n", cost);

    return 0;
}

struct dog create_dog(char * name, char *owner_name, int num_nights){
    struct dog dog1;
    if(num_nights <= 0)
        dog1.num_nights = 0;
    else
        dog1.num_nights = num_nights;
    return dog1;
}
double calculate_cost(struct dog d){
    double cost_per_night = 35.0;
    return d.num_nights * cost_per_night;
}