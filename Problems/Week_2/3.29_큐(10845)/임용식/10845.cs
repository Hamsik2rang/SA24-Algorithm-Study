using System;
using System.Text;

namespace AlgoCSharp
{
    class Queue
    {
        private int[] container;
        private int front;
        private int rear;

        public Queue()
        {
            container = new int[10000];
            front = rear = 0;
        }

        public Queue(int size)
        {
            container = new int[size];
            front = rear = 0;
        }

        public void Push(int data)
        {
            container[rear++] = data;
        }

        public int Pop()
        {
            if (front == rear)
            {
                return -1;
            }
            return container[front++];
        }

        public int Size()
        {
            return rear - front;
        }

        public bool Empty()
        {
            return Size() == 0 ? true : false;
        }

        public int Front()
        {
            if (Empty())
            {
                return -1;
            }
            return container[front];
        }

        public int Back()
        {
            if (Empty())
            {
                return -1;
            }
            return container[rear - 1];
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int n = Convert.ToInt32(Console.ReadLine());
            Queue q = new Queue(n);

            while (n-- > 0)
            {
                string[] command = Console.ReadLine().Split();

                switch (command[0])
                {
                    case "push":
                        q.Push(Convert.ToInt32(command[1]));
                        break;
                    case "pop":
                        sb.Append(q.Pop()+"\n");
                        break;
                    case "size":
                        sb.Append(q.Size() + "\n");
                        break;
                    case "empty":
                        sb.Append(Convert.ToInt32(q.Empty()) + "\n");
                        break;
                    case "front":
                        sb.Append(q.Front() + "\n");
                        break;
                    case "back":
                        sb.Append(q.Back() + "\n");
                        break;
                }
            }
            Console.WriteLine(sb);
        }
    }
}
