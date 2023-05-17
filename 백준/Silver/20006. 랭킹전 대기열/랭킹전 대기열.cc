#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <deque>
#include <set>
#include <stack>
using namespace std;

int p, m;
struct Player{
	string name;
	int level;
};
struct Room {
	int playerCnt = 0;
	int upper = 0;
	int lower = 0;
	vector<Player> players;
};
vector<Room> rooms;
int findAvailableRoom(Player player) {
	if (rooms.empty()) {
		return -1;
	}
	else {
		int size = rooms.size();
		for (int i = 0; i < size; i++) {
			Room currentRoom = rooms[i];
			if (currentRoom.playerCnt != m && currentRoom.lower <= player.level && currentRoom.upper >= player.level) return i;
		}
		return -1;
	}
}
bool compare(Player a, Player b) {
	return a.name < b.name;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// input & assignment
	cin >> p >> m;
	for (int i = 0; i < p; i++) {
		int l;
		string n;
		cin >> l >> n;
		Player currentPlayer = { n, l };
		// find room
		int roomIdx = findAvailableRoom(currentPlayer);
		if (roomIdx == -1) {
			Room newRoom;
			newRoom.playerCnt = 1;
			newRoom.upper = l + 10;
			newRoom.lower = l - 10;
			newRoom.players.push_back(currentPlayer);
			rooms.push_back(newRoom);
		}
		else {
			rooms[roomIdx].playerCnt++;
			rooms[roomIdx].players.push_back(currentPlayer);
		}
	}
	int roomSize = rooms.size();
	for (int i = 0; i < roomSize; i++) {
		Room currentRoom = rooms[i];
		if (currentRoom.playerCnt == m) cout << "Started!\n";
		else cout << "Waiting!\n";

		vector<Player> currentRoomPlayers = currentRoom.players;
		sort(currentRoomPlayers.begin(), currentRoomPlayers.end(), compare);
		int playerCnt = currentRoomPlayers.size();
		for (int j = 0; j < playerCnt; j++) {
			cout << currentRoomPlayers[j].level << ' ' << currentRoomPlayers[j].name << '\n';
		}
	}
	return 0;
}