using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Find Password");
            string answer = "Password";
            while (true)
            {
                Console.Write("\nPassword: ");
                string input = Console.ReadLine();
                if (answer == input)
                {
                    break;
                }
                Console.WriteLine("틀렸습니다");
            }
            Console.WriteLine("비밀번호를 맞추었습니다!");
            Console.ReadLine();
        }
    }
}