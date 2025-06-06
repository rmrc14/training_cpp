#include "header.h"
#include "FileMeta.h"
#include "FileStructure.h"

int main() {
    FileStructure fs;
    vector<string> commands = {
        "ADD 101 fileA.txt alice",
        "ADD 102 fileB.txt bob",
        "ACCESS 101 READ alice",
        "ACCESS 102 WRITE bob",
        "ACCESS 101 READ bob",
        "DELETE 102",
        "LIST_ALL",
        "LIST_RECENT",
        "LIST_BY_USER bob"
    };

    for (size_t i = 0; i < commands.size(); ++i) {
        fs.parseCommand(commands[i]);
    }

    return 0;
}
