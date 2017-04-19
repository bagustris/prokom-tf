#include <stdio.h>

struct my
{
  int age;
  int height;
  char name[20];
  char father[20];
  char mother[20];
};

int main(void)
{
	struct my MyFriend;
	printf("Enter the name of your friend: " );
	scanf("%s", MyFriend.name );
	printf("How old is %s? ", MyFriend.name );
	scanf("%d", &MyFriend.age );
	printf("How high is %s ( in cm )? ", MyFriend.name );
	scanf("%d", &MyFriend.height );
	printf("Who is %s's father? ", MyFriend.name );
	scanf("%s", MyFriend.father );
	printf("Who is %s's mother? ", MyFriend.name );
	scanf("%s", MyFriend.mother );

	printf("\n%s is %d years old, %d cm high,",
	MyFriend.name, MyFriend.age, MyFriend.height);
	printf(" and has %s and %s as parents.\n", MyFriend.father,
MyFriend.mother );
	return 0;
}
