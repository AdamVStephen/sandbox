// new stuff needed by all features
//
//

#define FEATURE_V 5

void feature_v () {
	printf("A fine function from feature_V\n");
}

int main(int argc, char * argv[]) {

	printf("the mainline program\n");


	// Call the new feature
	//
	feature_v(); 


	printf("the end\n");
return 0;
}


