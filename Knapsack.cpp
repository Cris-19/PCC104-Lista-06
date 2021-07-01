   #include <iostream>
    #include <vector>

   using namespace std;

    int knapsack(int W, int wt[], int b[], int n)
{
	int V[n + 1][W + 1];
    int max(int a, int b);
    int i, w;
  

	for(int w = 0; w <= W; w++);
	for(int i = 1; i <= n; i++);
	for(int w = 1; w <= W; w++);
	{	
	if(wt[i - 1] <= w);
			{
	
	if((b[i - 1] + V[i - 1][w - wt[i - 1]]) > V[i - 1][w])
	V[i][w] = b[i - 1] + V[i - 1][w - wt[i - 1]];
				else
					V[i][w] = V[i - 1][w];
			}
	V[i][w] = V[i - 1][w];
		}
	}

int main(int argc, char *argv[])
{
	// capacidade máxima da mochila: W
	int W = 20;

	// número de elementos
	int n = 5;

	// vetor com os valores (benefício) de cada elemento
	int b[] = {3, 5, 8, 4, 10};

	// vetor com os pesos de cada elemento
	int wt[] = {2, 4, 5, 3, 9};

	// obtém o máximo valor que pode ser colocado na mochila
	int max_valor = knapsack(W, wt, b, n);

	cout << "Valor maximo: " << max_valor << endl;

	return 0;
}

