var nextAsk = function Environment(){
	router.goto("environment");
}
setTimeout(nextAsk,2000); 	
 

 function goEnvironment() {

	router.goto("environment")

 };

module.exports ={ 

	goEnvironment : goEnvironment
};