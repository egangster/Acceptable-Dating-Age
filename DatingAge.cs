using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DatingAge
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("hello please enter your age: ");
            int localAge = Int32.Parse(Console.ReadLine());

            int lowestAcceptableAge = localAge / 2 + 7;
            int maxAcceptableAge = (localAge - 7) * 2;

            if (localAge > 12)
            {
                Console.WriteLine("the socially acceptable age range you can date in is: {0} to {1}", lowestAcceptableAge, maxAcceptableAge);
            }
            else
            {
                Console.WriteLine("you should not be dating buddy...");
            }
        }
    }
}
