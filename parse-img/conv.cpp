#include <iostream>
#include <string.h>
#include <dirent.h> 
#include <stdio.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int files_found=0,filesExtMath=0,numDirectories=0;
char html[11024] ="";char html2[11024] ="";char html3[11024] ="";
char img1[1024] [1024],img2[1024];
int is3pag=0; int is2pag=0; int is1pag=0;



int savetofile(char path[1024],char htmlt[11024] )
{
	FILE *fp;
	fp = fopen(path, "w");
	fprintf(fp, htmlt);
	fclose(fp);
	
}

int addImg(char path[1024])
{
	strcpy(img1[filesExtMath],path);
	filesExtMath++;
}

int is_regular_file(char path[1024])
{
  struct stat path_stat;
  stat(path, &path_stat);
  if(S_ISREG(path_stat.st_mode)){
  	files_found ++;
  	const char *ext = strrchr(path,'.');
		if((!ext) || (ext == path))
		return 0;
		else {
			if(strcmp(ext, ".JPG") == 0){
			  
			  addImg(path);			
			}

		}
  	return 1;
	}
  
}



int main(int argc, char** argv) {
  DIR *d;
  
  
  struct dirent *dir;
  d = opendir(".");
  //printf("\n---------current dir 0 [.] \n");
  if (d) {
  while ((dir = readdir(d)) != NULL) {
  if( is_regular_file(dir->d_name) )
	  {

	  }
	  else
	  {


	  	
	  }
	  
	    
  }
  closedir(d);
  }
  

  if(filesExtMath>=1){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0] );
	is1pag=1;
  }
  if(filesExtMath>=2){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0],img1[1] );
    is1pag=1;
  }
  if(filesExtMath>=3){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0],img1[1] , img1[2]);
    is1pag=1;
  }
  if(filesExtMath>=4){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0],img1[1] , img1[2], img1[3]);
    is1pag=1;
  }
  if(filesExtMath>=5){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0],img1[1] , img1[2], img1[3], img1[4]);
    is1pag=1;
  }
  if(filesExtMath>=6){
  	sprintf(html,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[0],img1[1] , img1[2], img1[3], img1[4] , img1[5]);
    is1pag=1;
  }




  if(filesExtMath>=7){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6] );
	is2pag=1;
  }
  if(filesExtMath>=8){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6],img1[7] );
	is2pag=1;
  }
  if(filesExtMath>=9){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6],img1[7] , img1[8]);
	is2pag=1;
  }
  if(filesExtMath>=10){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6],img1[7] , img1[8], img1[9]);
	is2pag=1;
  }
  if(filesExtMath>=11){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6],img1[7] , img1[8], img1[9], img1[10]);
	is2pag=1;
  }
  if(filesExtMath>=12){
  	sprintf(html2,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[6],img1[7] , img1[8], img1[9], img1[10] , img1[11]);
	is2pag=1;
  }


  if(filesExtMath>=13){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12] );
	is3pag=1;
  }
  if(filesExtMath>=14){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12],img1[13] );
	is3pag=1;
  }
  if(filesExtMath>=15){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12],img1[13] , img1[13]);
	is3pag=1;
  }
  if(filesExtMath>=16){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12],img1[13] , img1[14], img1[15]);
	is3pag=1;
  }
  if(filesExtMath>=17){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12],img1[13] , img1[14], img1[15], img1[16]);
	is3pag=1;
  }
  if(filesExtMath>=18){
  	sprintf(html3,"<title>fonte disponivel em edimar-e@github.com</title><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% ><br><img src=\"%s\" width= 49%%%%  height= 55%%%% ><img src=\"%s\" width= 49%%%%  height= 55%%%% >",img1[12],img1[13] , img1[14], img1[15], img1[16] , img1[17]);
 	is3pag=1;
  }


  if(is1pag==1){
		savetofile("pagina_1.html",html);
  }
  if(is2pag==1){
		savetofile("pagina_2.html",html2);
  }
  if(is3pag==1){
		savetofile("pagina_3.html",html3);
  }



  printf("\n  ----------------------------------------------\n");
  printf("  | Arquivos [%d] | Imagens JPG[%d] | Pastas[%d] |",files_found,filesExtMath,numDirectories+1);
  printf("\n  -------------------------------- ------------\n");
  system("pause");
  return(0);
}