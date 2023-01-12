//1.Scan a string from user.Write a function length() which returns length of string.
l

int main()
{
	char s1[100];
	cin.getline(s1,100);
	int i = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	cout<<"length of string = "<<i;
	
	return 0;
}
