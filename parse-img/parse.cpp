#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <iostream>
#include <Windows.h>


static void list_dir(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }
     while ((entry = readdir(dir)) != NULL) {
     	const char *ext = strrchr(entry->d_name,'.');
		if((ext==NULL)){
			const char *fname = entry->d_name;
			char *cp; sprintf(cp,"copy parse.exe %s",fname);		    
			system(cp); 
			char *exe; sprintf(exe,"start %s/parse.exe",fname);
			system(exe);
		    char *del; sprintf(del,"del %s/parse.exe",fname);
			system(exe);
			
		}
	    
    }

    closedir(dir);
}

   
    
int main(int argc, char** ) { 
    list_dir(".");
    return 0;
}  



