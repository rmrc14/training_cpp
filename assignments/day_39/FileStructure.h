#pragma once
#include "header.h"
#include "FileMeta.h"
using namespace std;

class FileStructure
{
	 static int accesstime;
public:


	map<int, FileMeta>  f_meta;               // — fileID → file metadata(file name, owner)
	unordered_map<int, int> f_AccessFreq;			// — fileID → access frequency
	unordered_map<int, int> f_Access_time;				//— fileID → last accessed timestamp
	unordered_map<string, set<int>> f_Accessed_person;		//— userName → files accessed
	unordered_map<int, deque<pair<string, string>>> f_Access_history;	//— fileID → access history
	set<pair<int, int>>   quick_retrieval;	
	// —{ lastAccessedTime, fileID } for quick retrieval
	//int getTime() { return accesstime; }

	void add_Virtual_File(int id, string filename, string user); //done
	void access_File(int id, string cmd, string user);
	void delete_File(int id);   // check
	void list_By_User(string user);
	void list_All_Files();
	void list_Recent_Files();
	void parseCommand(string command);  //done

};




int FileStructure::accesstime = 0;

// ------------------ delete -------------


void FileStructure::delete_File(int id) {
	if (f_meta.find(id) == f_meta.end()) {
		cout << "Error: File ID " << id << " not found." << endl;
		return;
	}

	f_meta.erase(id);
	f_AccessFreq.erase(id);
	f_Access_time.erase(id);
	f_Access_history.erase(id);

	for (unordered_map<string, set<int>>::iterator it = f_Accessed_person.begin(); it != f_Accessed_person.end(); ++it)
		it->second.erase(id);

	for (set<pair<int, int>>::iterator it = quick_retrieval.begin(); it != quick_retrieval.end(); ) {
		if (it->second == id)
			it = quick_retrieval.erase(it);
		else
			++it;
	}

	cout << "File " << id << " deleted successfully." << endl;
}

//------------------  access file --------------

void FileStructure::access_File(int id, string cmd,string user)
{
	static int count = 0;
	if(cmd=="READ")
	{
		accesstime++;
		f_Access_time.insert(id, accesstime);
		f_AccessFreq.insert(id, ++count);
		//f_Accessed_person.insert();
	}
	else if(cmd=="WRITE")
	{
		accesstime++;
		f_Access_time.insert(id, accesstime);
	}

}


// -----------------------    add file---------------------


void FileStructure::add_Virtual_File(int id, string filename, string user)
{
	f_meta.emplace(id, FileMeta(filename, user));



}


//   ------------command --------------
void FileStructure::parseCommand(string command) {
	istringstream iss(command);
	string cmd;
	iss >> cmd;

	if (cmd == "ADD") {
		int id; string name, owner;
		iss >> id >> name >> owner;
		add_Virtual_File(id, name, owner);
	}
	else if (cmd == "ACCESS") {
		int id; string type, user;
		iss >> id >> type >> user;
		access_File(id, type, user);
	}
	else if (cmd == "DELETE") {
		int id; iss >> id;
		delete_File(id);
	}
	else if (cmd == "LIST_BY_USER") {
		string user; iss >> user;
		list_By_User(user);
	}
	else if (cmd == "LIST_ALL") {
		list_All_Files();
	}
	else if (cmd == "LIST_RECENT") {
		list_Recent_Files();
	}
	else {
		cout << "UNKNOWN COMMAND" << endl;
	}
}
