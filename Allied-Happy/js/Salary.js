var nextAsk = function irThanks(){
	router.goto("thanks");
}
setTimeout(nextAsk,2000); 

var goLanding = function redirect() {
	router.goto("landing");
 };

function goThanks(){
	router.goto("login");	
		
}
setTimeout(goLanding,2000);


module.exports = {

	goThanks : goThanks
};