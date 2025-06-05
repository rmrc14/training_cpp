#pragma once
#include "header.h"
#include "FileMeta.h"
using namespace std;

//map<int, FileMeta> — fileID → file metadata(file name, owner)
//unordered_map<int, int> — fileID → access frequency
//unordered_map<int, int> — fileID → last accessed timestamp
//unordered_map<string, set<int>> — userName → files accessed
//unordered_map<int, deque<pair<string, string>>> — fileID → access history
//set<pair<int, int>> —{ lastAccessedTime, fileID } for quick retrieval

class FileStructure
{
public:
	map<int, FileMeta>  f_meta;               // — fileID → file metadata(file name, owner)
	unordered_map<int, int> f_AccessFreq;			// — fileID → access frequency
	unordered_map<int, int> f_Access_time;				//— fileID → last accessed timestamp
	unordered_map<string, set<int>> f_Accessed_person;		//— userName → files accessed
	unordered_map<int, deque<pair<string, string>>> f_Access_history;	//— fileID → access history
	set<pair<int, int>>   quick_retrieval;	
	// —{ lastAccessedTime, fileID } for quick retrieval
	
	void add_Virtual_File();
	void access_File();
	void delete_File();
	void search_Operations();
	void list_All_Files();


};