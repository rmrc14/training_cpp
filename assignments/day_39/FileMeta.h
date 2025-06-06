#pragma once
#include "header.h"

class FileMeta {
   string fileName;
   string ownerUser;
public:
    FileMeta(string filename,string user):fileName(filename),ownerUser(user){}
    ~FileMeta(){}
    //string setFilename()
    string getUser()
    {
        return ownerUser;
    }
    string getFileName() { return fileName; }
};