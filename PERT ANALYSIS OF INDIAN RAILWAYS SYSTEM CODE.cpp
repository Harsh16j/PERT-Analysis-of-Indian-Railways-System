#include <conio.h>
#include <stdio.h>
int max(int a, int b);		  // Returns maximum of a and b
int min(int a, int b);		  // Returns minimum of a and b
int min(int a, int b, int c); // Returns minimum of a,b and c

// For taking input of Optimistic,Pessimistic,Most likely estimate time from the user and calculating Mean PERT average time
void input(int a, int b, int t[][20], int o[][20], int m[][20], int p[][20]);
int main()
{
	// t[i][j]: Mean PERT average time taken from station i to station j
	// o[i][j]: Optimistic estimate time taken from station i to station j
	// p[i][j]: Pessimistic estimate time taken from station i to station j
	// m[i][j]: Most likely estimate time taken from station i to station j
	// e[i]: earliest occurenct time at station i
	// l[i]: latest occurenct time at station i
	// n: total number of stations
	// ch: user's choice of railway network region (North, East, West or South)
	int t[20][20], e[20], l[20], i, j, ch, n = 0, o[20][20], m[20][20], p[20][20];

	// Initializing all the values in 2-D array t[][] to 0
	for (i = 0; i < 20; i++)
	{
		e[i] = 0;
		l[i] = 0;
		for (j = 0; j < 20; j++)
			t[i][j] = 0;
	}

	// Taking input of Optimistic,Pessimistic,Most likely estimate time from the user using input() function
	printf("1.North\n2.East\n3.West\n4.South\nEnter the region(1,2,3,4):");
	scanf("%d", &ch);
	if (ch == 1) // North
	{
		printf("1.New Delhi\n");
		printf("2.Panipat\n");
		printf("3.Ambala\n");
		printf("4.Ludhiana\n");
		printf("5.Phillaur\n");
		printf("6.Phagwara\n");
		printf("7.Jalandhar\n");
		printf("8.Dasuya\n");
		printf("9.Mukerian\n");
		printf("10.Pathankot\n");
		printf("11.Kathua\n");
		printf("12.Jammu\n");
		printf("Enter the time taken between the following stations:\n");
		printf("1-2:");
		input(1, 2, t, o, m, p);
		printf("1-3:");
		input(1, 3, t, o, m, p);
		printf("1-4:");
		input(1, 4, t, o, m, p);
		printf("2-3:");
		input(2, 3, t, o, m, p);
		printf("3-4:");
		input(3, 4, t, o, m, p);
		printf("4-5:");
		input(4, 5, t, o, m, p);
		printf("4-7:");
		input(4, 7, t, o, m, p);
		printf("5-6:");
		input(5, 6, t, o, m, p);
		printf("6-7:");
		input(6, 7, t, o, m, p);
		printf("7-8:");
		input(7, 8, t, o, m, p);
		printf("7-10:");
		input(7, 10, t, o, m, p);
		printf("8-9:");
		input(8, 9, t, o, m, p);
		printf("9-10:");
		input(9, 10, t, o, m, p);
		printf("10-11:");
		input(10, 11, t, o, m, p);
		printf("10-12:");
		input(10, 12, t, o, m, p);
		printf("11-12:");
		input(11, 12, t, o, m, p);
	}
	else if (ch == 4) // South
	{
		printf("1.Chennai Central\n");
		printf("2.Tiruvallur\n");
		printf("3.Arakkonam\n");
		printf("4.Anavardikhampettai\n");
		printf("5.Sholinghur\n");
		printf("6.Walajah Road Junction\n");
		printf("7.Katpadi Junction\n");
		printf("8.Ambur\n");
		printf("9.Jolarpettai\n");
		printf("10.Kuppam\n");
		printf("11.Bangarapet\n");
		printf("12.Whitefield\n");
		printf("13.Krishnarajapuram\n");
		printf("14.Bengaluru East\n");
		printf("15.Bengaluru Cantt.\n");
		printf("Enter the time taken between the following stations:\n");
		printf("1-2:");
		input(1, 2, t, o, m, p);
		printf("1-3:");
		input(1, 3, t, o, m, p);
		printf("2-3:");
		input(2, 3, t, o, m, p);
		printf("3-4:");
		input(3, 4, t, o, m, p);
		printf("3-7:");
		input(3, 7, t, o, m, p);
		printf("4-5:");
		input(4, 5, t, o, m, p);
		printf("5-6:");
		input(5, 6, t, o, m, p);
		printf("6-7:");
		input(6, 7, t, o, m, p);
		printf("7-8:");
		input(7, 8, t, o, m, p);
		printf("7-9:");
		input(7, 9, t, o, m, p);
		printf("8-9:");
		input(8, 9, t, o, m, p);
		printf("9-10:");
		input(9, 10, t, o, m, p);
		printf("9-11:");
		input(9, 11, t, o, m, p);
		printf("9-14:");
		input(9, 14, t, o, m, p);
		printf("10-11:");
		input(10, 11, t, o, m, p);
		printf("11-12:");
		input(11, 12, t, o, m, p);
		printf("11-13:");
		input(11, 13, t, o, m, p);
		printf("11-14:");
		input(11, 14, t, o, m, p);
		printf("12-13:");
		input(12, 13, t, o, m, p);
		printf("13-14:");
		input(13, 14, t, o, m, p);
		printf("13-15:");
		input(13, 15, t, o, m, p);
		printf("14-15:");
		input(14, 15, t, o, m, p);
	}
	else if (ch == 2) // East
	{
		printf("1.Howrah Jn\n");
		printf("2.BarddhamanJn\n");
		printf("3.Durgapur\n");
		printf("4.Raniganj\n");
		printf("5.Asansol Jn\n");
		printf("6.Chittaranjan\n");
		printf("7.Jamtara\n");
		printf("8.MadhpurJn\n");
		printf("9.JisdihJn\n");
		printf("10.Jhajha\n");
		printf("11.Jamui\n");
		printf("12.KiulJn\n");
		printf("13.LuckeesaraiJn\n");
		printf("14.HatidahJn\n");
		printf("15.Mokama\n");
		printf("Enter the time taken between the following stations:\n");
		printf("1-2:");
		input(1, 2, t, o, m, p);
		printf("1-3:");
		input(1, 3, t, o, m, p);
		printf("1-5:");
		input(1, 5, t, o, m, p);
		printf("2-3:");
		input(2, 3, t, o, m, p);
		printf("3-4:");
		input(3, 4, t, o, m, p);
		printf("4-5:");
		input(4, 5, t, o, m, p);
		printf("5-6:");
		input(5, 6, t, o, m, p);
		printf("5-8:");
		input(5, 8, t, o, m, p);
		printf("6-7:");
		input(6, 7, t, o, m, p);
		printf("6-8:");
		input(6, 8, t, o, m, p);
		printf("7-8:");
		input(7, 8, t, o, m, p);
		printf("8-9:");
		input(8, 9, t, o, m, p);
		printf("9-10:");
		input(9, 10, t, o, m, p);
		printf("10-11:");
		input(10, 11, t, o, m, p);
		printf("10-12:");
		input(10, 12, t, o, m, p);
		printf("11-12:");
		input(11, 12, t, o, m, p);
		printf("11-13:");
		input(11, 13, t, o, m, p);
		printf("12-15:");
		input(12, 15, t, o, m, p);
		printf("13-14:");
		input(13, 14, t, o, m, p);
		printf("14-15:");
		input(14, 15, t, o, m, p);
	}
	else if (ch == 3) // west
	{
		printf("1.MUMBAI CST\n");
		printf("2.DADAR\n");
		printf("3.KALYAN\n");
		printf("4.THANE\n");
		printf("5.IGATPURI\n");
		printf("6.NASHIK\n");
		printf("7.JALGAON\n");
		printf("8.CHALISGARH\n");
		printf("9.BHUSAVAL\n");
		printf("10.NANDURA\n");
		printf("11.AKOLA\n");
		printf("12.SHEGAON\n");
		printf("13.MURTAJAPUR\n");
		printf("14.BADNERA\n");
		printf("15.DHAMANGAON\n");
		printf("16.WARDHA\n");
		printf("17.NAGPUR\n");

		printf("Enter the time taken between the following stations:\n");
		printf("1-2:");
		input(1, 2, t, o, m, p);
		printf("1-3:");
		input(1, 3, t, o, m, p);
		printf("1-4:");
		input(1, 4, t, o, m, p);
		printf("2-3:");
		input(2, 3, t, o, m, p);
		printf("3-6:");
		input(3, 6, t, o, m, p);
		printf("4-5:");
		input(4, 5, t, o, m, p);
		printf("3-5:");
		input(3, 5, t, o, m, p);
		printf("5-6:");
		input(5, 6, t, o, m, p);
		printf("6-7:");
		input(6, 7, t, o, m, p);
		printf("7-9:");
		input(7, 9, t, o, m, p);
		printf("6-8:");
		input(6, 8, t, o, m, p);
		printf("8-9:");
		input(8, 9, t, o, m, p);
		printf("9-10:");
		input(9, 10, t, o, m, p);
		printf("9-11:");
		input(9, 11, t, o, m, p);
		printf("10-11:");
		input(10, 11, t, o, m, p);
		printf("10-12:");
		input(10, 12, t, o, m, p);
		printf("12-13:");
		input(12, 13, t, o, m, p);
		printf("13-15:");
		input(13, 15, t, o, m, p);
		printf("11-14:");
		input(11, 14, t, o, m, p);
		printf("14-15:");
		input(14, 15, t, o, m, p);
		printf("15-16:");
		input(15, 16, t, o, m, p);
		printf("16-17:");
		input(16, 17, t, o, m, p);
	}

	// Calculating total number of stations
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (t[i][j] != 0)
			{
				n = max(n, j + 1);
			}
		}
	}
	// Calculating earliest occurence time for all the stations
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (t[i][j])
			{
				if (e[j])
					e[j] = max(e[j], e[i] + t[i][j]);
				else
					e[j] = e[i] + t[i][j];
			}
		}
	}
	// For nth station
	l[n - 1] = e[n - 1];

	// Calculating latest occurence time for all the stations
	for (j = n - 1; j > 0; j--)
	{
		for (i = j - 1; i > 0; i--)
		{
			if (t[i][j])
			{
				if (l[i])
					l[i] = min(l[i], l[j] - t[i][j]);
				else
					l[i] = l[j] - t[i][j];
			}
		}
	}
	// Printing earliest occurence time of all the stations
	for (i = 0; i < n; i++)
		printf("e%d.%d\n", i + 1, e[i]);
	getch();

	// Printing latest occurence time of all the stations
	for (i = 0; i < n; i++)
		printf("l%d.%d\n", i + 1, l[i]);

	// Printing the critical path
	printf("Critical path is:1");
	for (i = 1; i < n; i++)
		if (e[i] == l[i])
			printf("-%d", i + 1);
	getch();

	return 0;
}

// Functions Definition
int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}
int min(int a, int b)
{
	if (a < b)
		return a;
	return b;
}
int min(int a, int b, int c)
{
	if (a < b && a < c)
		return a;
	else if (b < a && b < c)
		return b;
	return c;
}
// Inputs optimistic, most likely and pessimistic times from the user and caculates the corresponding Mean PERT Average Time
void input(int a, int b, int t[][20], int o[][20], int m[][20], int p[][20])
{
	a = a - 1;
	b = b - 1;
	printf("\nOptimistic Time:");
	scanf("%d", &o[a][b]);
	printf("Most Likely Time:");
	scanf("%d", &m[a][b]);
	printf("Pessimistic Time:");
	scanf("%d", &p[a][b]);
	t[a][b] = (o[a][b] + 4 * m[a][b] + p[a][b]) / 6;
}
