var nextAsk = function irThanks(){
	router.goto("thanks");
}
setTimeout(nextAsk,2000); 


var goThanks = function goThanks(){
	router.goto("thanks");			
};


module.exports = {

	goThanks : goThanks
};

