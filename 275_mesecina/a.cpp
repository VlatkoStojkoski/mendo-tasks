#include <bits/stdc++.h>

using namespace std;

int N;
vector<pair<int, int>> systems;

double euclidean_distance(pair<int, int> A, pair<int, int> B)
{
	double dx = (A.first - B.first);
	double dy = (A.second - B.second);

	return sqrt(dx * dx + dy * dy);
}

vector<pair<int, double>> create_edges(int from)
{
	vector<pair<int, double>> edges;

	for (int to = 0; to < N; to++)
	{
		if (from != to)
		{
			double weight = euclidean_distance(systems[from], systems[to]);

			if (weight <= 10)
				edges.push_back({to, weight});
		}
	}

	return edges;
}

vector<double> dijkstra(int start)
{
	vector<double> distance(N);
	fill(distance.begin(), distance.end(), 100000000);

	priority_queue<pair<double, int>> pq;
	distance[start] = 0;
	pq.push({0, start});

	bool visited[N];
	memset(visited, false, sizeof(visited));

	while (!pq.empty())
	{
		pair<double, int> curr = pq.top();
		pq.pop();

		int system = curr.second;
		double distance_to_system = -curr.first;

		if (!visited[system])
		{
			visited[system] = true;

			vector<pair<int, double>> edges = create_edges(system);

			for (auto edge : edges)
			{
				int next = edge.first;
				double distance_systems = edge.second;

				if (distance[next] > distance[system] + distance_systems)
				{
					distance[next] = distance[system] + distance_systems;
					pq.push({-distance[next], next});
				}
			}
		}
	}

	return distance;
}

int main()
{
	cin >> N;

	systems.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> systems[i].first >> systems[i].second;
	}

	vector<double> distances = dijkstra(0);

	double result = distances[N - 1];

	cout.precision(7);
	cout << fixed << result << endl;

	return 0;
}