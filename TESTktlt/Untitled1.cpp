using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpLearning
{
	internal class Class1
	{
		static void Main(string[] args)
		{
			Console.Write("Nhap n: ");
			int n = int.Parse(Console.ReadLine());
			int[] arr = new int[n];
			Console.WriteLine("Nhap mang gom {0} phan tu: ", n);
			for (int i = 0; i < n; i++)
			{
				arr[i] = int.Parse(Console.ReadLine());
			}
			int maxValue = arr[0];
			int max2Value = 0;
			for (int i = 1; i < n; i++)
			{
				if (arr[i] > maxValue)
				{
					max2Value = maxValue;
					maxValue = arr[i];
				}
			}
			Console.Write("Gia tri lon nhat: ");
			Console.WriteLine(maxValue);
			Console.Write("Gia tri lon thu hai: ");
			Console.WriteLine(max2Value);

			Console.WriteLine("\n---------------------------------------");
			Console.Write("Nhap phan tu x: ");
			int x = int.Parse(Console.ReadLine());
			int count = 0;
			for (int i = 1; i < n; i++)
			{
				if (arr[i] == x)
				{
					count++;
				}
			}
			Console.Write("So lan phan tu {0} xuat hien trong mang la: ", x);
			Console.WriteLine(count);


			Console.WriteLine("\n---------------------------------------");
			Console.WriteLine("Sap xep day so theo chieu tang dan: ");
			for (int i = 0; i < n; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (arr[i] > arr[j])
					{
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				Console.WriteLine(arr[i]);
			}

			Console.WriteLine("\n---------------------------------------");
			int dau = 0;
			int maxx = 0;
			for (int i = 0; i < n; i++)
			{
				for (int j = i; j < n; j++)
				{
					int dau1 = j;
					int count1 = 0;
					if (arr[j] == (arr[j-1] + 1))
					{
						count1++;
					}
					else
                    {
						break;
                    }
					if (count1 > maxx)
                    {
						dau = dau1;
						maxx = count1;
                    }
				}
			}
			Console.Write("Mang lien tuc dai nhat: ");
			for (int i = dau; i < maxx; i++)
			{
				Console.WriteLine(arr[i]);
			}
		}
	}
}


