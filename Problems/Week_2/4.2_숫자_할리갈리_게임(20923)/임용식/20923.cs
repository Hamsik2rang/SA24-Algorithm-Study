using System;
using System.Collections.Generic;


namespace AlgoCSharp
{
    class MainProgram
    {
        static void AddCard(LinkedList<int> dodo, LinkedList<int> suyeon, string[] card)
        {
            dodo.AddFirst(Convert.ToInt32(card[0]));
            suyeon.AddFirst(Convert.ToInt32(card[1]));
        }
        static void Main(string[] args)
        {
            // Fist of L-List is Top of deck.
            var dodo            = new LinkedList<int>();
            var suyeon          = new LinkedList<int>();
            var dodoGround      = new LinkedList<int>();
            var suyeonGround    = new LinkedList<int>();

            // Index 0 is N what is num of card and 1 is M what is turn count of game. 
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), s => Convert.ToInt32(s));

            // Add Cards.
            for (int i = 0; i < input[0]; i++)
            {
                AddCard(dodo, suyeon, Console.ReadLine().Split());
            }

            for (int m = 1; m <= input[1]; m++)
            {
                LinkedListNode<int> draw;
                if (m % 2 == 1)
                {
                    draw = dodo.First;
                    dodo.RemoveFirst();
                    dodoGround.AddFirst(draw);
                }
                else
                {
                    draw = suyeon.First;
                    suyeon.RemoveFirst();
                    suyeonGround.AddFirst(draw);
                }
                // Check GameOver when card is drew.
                if (dodo.Count == 0 || suyeon.Count == 0)
                {
                    Console.WriteLine(m % 2 == 1 ? "su" : "do");
                    return;
                }

                // If Dodo hit the bell then↓
                if (draw.Value == 5)
                {
                    while (suyeonGround.Count != 0)
                    {
                        draw = suyeonGround.Last;
                        suyeonGround.RemoveLast();
                        dodo.AddLast(draw);
                    }
                    while (dodoGround.Count != 0)
                    {
                        draw = dodoGround.Last;
                        dodoGround.RemoveLast();
                        dodo.AddLast(draw);
                    }
                }
                // Else if Suyeon hit the bell then↓
                else if ((dodoGround.Count != 0 && suyeonGround.Count != 0) && dodoGround.First.Value + suyeonGround.First.Value == 5)
                {
                    while (dodoGround.Count != 0)
                    {
                        draw = dodoGround.Last;
                        dodoGround.RemoveLast();
                        suyeon.AddLast(draw);
                    }
                    while (suyeonGround.Count != 0)
                    {
                        draw = suyeonGround.Last;
                        suyeonGround.RemoveLast();
                        suyeon.AddLast(draw);
                    }
                }
            }

            if (dodo.Count == suyeon.Count)
            {
                Console.WriteLine("dosu");
            }

            else if (dodo.Count < suyeon.Count)
            {
                Console.WriteLine("su");
            }
            else
            {
                Console.WriteLine("do");
            }
        }
    }
}