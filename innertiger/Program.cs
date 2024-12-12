using System;
using innertiger.Challenges;

class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("To awken the inner tiger I will complete the Advent Code Challenges");
        Console.WriteLine("Enter the day of the challenge you want to run");

        string input = Console.ReadLine();
        if (int.TryParse(input, out int result))
        {
            switch (result)
            {
                case 1:
                    Console.WriteLine("Lists - Finding Distance");
                    new Day1().FindingDistance();
                    break;
                case 2:
                    Console.WriteLine("Lists - Finding Distance");
                    new Day2().SafeOrNotSafe();
                    break;
                default:
                    Console.WriteLine("Challenge for this day is not implemented yet.");
                    break;
            }
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter a valid day number.");
        }
    }
}
