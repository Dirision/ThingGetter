#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>
//#pragma comment(lib, "cstdlib")
#include <cstdlib>
#include <iostream>
#pragma comment( lib, "wininet" )
using namespace std;

class  WebScraper
{

 string getRandomThing()
{

}

// Will generate a url of a random page on the random section of thingaverse
// template: http://www.thingiverse.com/explore/random-things/page:#
 string generatePageNumb()
{
	std::rand();
	// there are 43 random pages 
	int num = rand()%44; 
	std::stringstream ss;
	ss << num;

	string urlName = "http://www.thingiverse.com/explore/random-things/page:" + ss.str();

	return urlName;
}


string  getIdeaNameFromUrl(){};



};
